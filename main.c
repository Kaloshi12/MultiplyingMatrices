int main()
{

    int arow,colum,bcolum;
    scanf("%d %d %d",&arow,&colum,&bcolum);
    int matrice1[arow][colum];
    int matrice2[colum][bcolum];
    int product[arow][bcolum];
    int sum=0;
    for(int i=0;i<arow;i++){
        for(int j=0;j<colum;j++){
            scanf("%d",&matrice1[i][j]);
        }
    }
    for(int i=0;i<colum;i++){
        for(int j=0;j<bcolum;j++){
            scanf("%d",&matrice2[i][j]);
        }
    }
    for(int i=0;i<arow;i++){
        for(int j=0;j<bcolum;j++){
            for(int k=0;k<colum;k++){
                sum+=matrice1[i][k]*matrice2[k][j];
            }
            product[i][j]=sum;
            sum=0;
        }
    }
    for(int i=0;i<arow;i++){
        for(int j=0;j<bcolum;j++){
            printf("%d ",product[i][j]);
        }
        printf("\n");
    }


    return 0;
}
