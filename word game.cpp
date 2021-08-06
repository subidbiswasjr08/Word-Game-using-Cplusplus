#include<stdio.h>
int main(){
	char all_Letters[100][100],new_Letters[100][100];
	int choosing_column[100],i,j,k=65;

	printf("\t\t-------------------------");
    printf("\n\t\t\tWORD GAME");
    printf("\n\t\t-------------------------");
    printf("\nInstructions:");
    printf("\n1. Think of a Four Letter Word.");
    printf("\n2. Enter the column number according to your letters of your word.");
    printf("\n3. Enter the four column numbers accordingly with a space.");
    printf("\n____________________________________________________________\n");
    printf("\n\t(Think of a Four letter word)\n\n");

	for(i=0;i<6;i++){    //initialization
		for(j=0;j<5;j++){
			if(k!=91){
				all_Letters[i][j] = k;
				k++;
			}
			if(k>90)
			break;

		}
	}



	printf("1 2 3 4 5\n");
    for(i=0;i<6;i++){    // printing the characters
		for(j=0;j<5;j++){
		printf("%c ",all_Letters[i][j]);
		}
		printf("\n");
    }


    printf("\nEnter the following four numbers of each column:\n>");



	for(k=0;k<4;k++){  //inputs for 1st matrix
    scanf("%d",&choosing_column[k]);
    }



	for(k=0;k<4;){   //new array
      for(i=0;i<4;i++){
    	for(j=0;j<5;j++){
		  new_Letters[i][j] = all_Letters[j][choosing_column[k]-1];
	      }
	      k++;
      }
    }

	printf("\n\n");




	printf("1 2 3 4 5\n");
	for(i=0;i<4;i++){ //printing column to row
         for(j=0;j<5;j++){
		printf("%c ",new_Letters[i][j]);
	}
	printf("\n");
	}
	printf("choose again...\n");




	for(k=0;k<4;k++){  //inputs for 2nd matrix
    scanf("%d",&choosing_column[k]);
    }
    printf("\n\n");
    printf("The Word You Thought Is '");


	for(i=0;i<4;i++){
    			printf("%c",new_Letters[i][choosing_column[i]-1]);
		}
    printf("'\n\nDeveloped by Subid Biswas © 2021 \n");

	return 0;
}

