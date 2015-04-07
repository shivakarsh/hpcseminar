        REAL FUNCTION SUM_CENTRAL(VALUES,X,Y,Z)
        INTEGER X,Y,Z,i,j,k,l
        REAL, DIMENSION(X,Y,Z) :: VALUES
        REAL, DIMENSION(X,Y,Z) :: VALUES_DUMMY

        VALUES_DUMMY(:,:,:)=0 
        VALUES(1,:,:)=0
        VALUES(X,:,:)=0
        VALUES(:,1,:)=0
        VALUES(:,Y,:)=0
        VALUES(:,:,1)=0
        VALUES(:,:,Z)=0


        
        

        DO k=2,Z-1
                DO j=2,Y-1
                        DO i=2,X-1
                        VALUES_DUMMY(i,j,k)=(VALUES(i,j,k)+VALUES(i+1,j,k)+VALUES(i-1,j,k))/3;
                        END DO
                    VALUES_DUMMY(i,j,k)=(VALUES(i,j,k)+VALUES(i,j+1,k)+VALUES(i,j-1,k))/3;
                END DO
                    VALUES_DUMMY(i,j,k)=(VALUES(i,j,k)+VALUES(i,j,k+1)+VALUES(i,j-1,k-1))/3;

        END DO




        VALUES=VALUES_DUMMY
        SUM_CENTRAL=SUM(VALUES)
        END FUNCTION


        


        
     
