#include<stdio.h>
#include<stdlib.h>

#define total_no_of_parties
#define party_no_1 "A"
#define party_no_2 "B"
#define party_no_3 "C"
#define party_no_4 "D"

int vote_count1 =0,vote_count2 =0,vote_count3 =0,vote_count4 =0 , invalid_votees=0;

void cast_vote()
{
    int choice;
    printf("\n\n please choose your candidate\n\n");
    printf("\n 1. %s",party_no_1);
    printf("\n 2. %s",party_no_2);
    printf("\n 3. %s",party_no_3);
    printf("\n 4. %s",party_no_4);
    printf("\n 5. %s","none of the above");
    printf("\n \n Input your choice(1-4) : ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1 :
        vote_count1++;
        break;
    case 2 :
        vote_count2++;
        break;
    case 3 :
        vote_count3++;
        break;
    case 4 :
        vote_count4++;
        break;
    case 5 :
        invalid_votees++;
        break;
        default:
        printf("\n Error: wrong choice !! please retry and input correct choice");

        getchar();
    }
    printf("\n Thanks for your vote !! ");

}


    void vote_counts()
    {
        printf("\n\n voting statics!! ");
        printf("%d-%s \n", vote_count1 , party_no_1);
        printf("%d-%s \n", vote_count2 , party_no_2);
        printf("%d-%s \n", vote_count3 , party_no_3);
        printf("%d-%s \n", vote_count4 , party_no_4);
        printf("%d-%s \n", invalid_votees , "spoiled votes");
        
    }

    void get_leading_candidate()
    {
        printf("\n\n leading candidate \n\n");
        if(vote_count1>vote_count2 && vote_count1>vote_count3 && vote_count1>vote_count4)
        {
            printf("leading candidate is %s \n\n",party_no_1);
        }

        else if(vote_count2>vote_count1 && vote_count2>vote_count3 && vote_count2>vote_count4)
        {
            printf("\n\n leading candidate is %s",party_no_2);
        }
        else if(vote_count3>vote_count1 && vote_count3>vote_count2 && vote_count3>vote_count4)
        {
            printf("\n\n leading candidate is %s ",party_no_3);
        }
        else if(vote_count4>vote_count1 && vote_count4>vote_count2 && vote_count4>vote_count3)
        {
            printf("\n\n leading candidate is %s ",party_no_4);
        }
        else
        {
            printf("\n\n no party win  !!!! ");
        }
    }


    int main()
    {
        int choice;
        do{
            printf("\n\n WELCOME TO ELECTION VOTING 2022 !! ");
            printf("\n\n 1. cast the votes. ");
            printf("\n\n 2. find the votes count. ");
            printf("\n\n 3. find the leading candidate. ");
            printf("\n\n 0. exit. ");

            printf("\n\n Enter the choice !!  ");
            scanf("%d", &choice);

            switch(choice)
            {
                case 1: 
                cast_vote();
                break;
                case 2: 
                vote_counts();
                break;
                case 3: 
                get_leading_candidate();
                break;
                default : 
                printf("\n\n Error !! inavalid choice : ");
            }


        } while(choice != 0);
        
        getchar();
    }

