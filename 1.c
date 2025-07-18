#include <stdio.h>
int main(){


    char ch;
    int num;
    int total;
    int sum=0;
    int type;
printf("===================================== \n");

printf("    Welcome to Shopping Software  \n");

printf("===================================== \n");

printf("Type Y to start  \n");

printf("Type n to exit \n");

char input;
scanf("%s",&input);
if(input=='y' || input=='Y'){
       printf("Type 1 or fruits\n");

       printf("Type 2 for vegetebles\n");
       
       printf("Type 3 for sports\n");
       
       printf("Type 4 for cloths\n");
       
       printf("Please enter your type\n");
       scanf("%d",&type);
       

    if(type==1){
           printf("You have selected for fruit section\n");
           
           printf("===================================== \n");
        printf("  SRNO         Particular      Amount \n");
     
        printf("   1.            Apple           60   \n");
        
        printf("   2.            Banana          50   \n");
        
        printf("   3.            Kiwi            150  \n");
        
        printf("   4.            Oranges          90  \n");
        
        printf("   5.            Mango           100  \n");
       
        printf("===================================== \n");
        printf("Do you want to Buy Apple \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){

            printf("Apple is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*60;
            sum=sum+total;
            printf("The amount for apple is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy Banana \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Banana is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*50;
             sum=sum+total;
            printf("The amount for Banana is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy Kiwi \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Kiwi is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*150;
             sum=sum+total;
            printf("The amount for Kiwi is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy Oranges \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Oranges is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*90;
             sum=sum+total;
            printf("The amount for Oranges is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }


        printf("Do you want to Buy Mango \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("mango is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*100;
             sum=sum+total;
            printf("The amount for Mango is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        // sum
        float dis=0.0;

        if(sum>=1 && sum<=500){
            dis=(sum*5)/100;
        }
        else
        if(sum>=501 &&  sum<=2000){
            dis=(sum*10)/100;
        }
        if(sum>=2001){
            dis=(sum*15)/100;
        }

        // dis
        float after=sum-dis;

        // after
        float Gst=(after*18)/100;
        float Gt=after+Gst;


        printf("================================================== \n");
        printf("The amount for shopping is           %d     \n",sum);
        printf("The discount on shopping is          %f     \n",dis);
        printf("The Amount after discount is         %f     \n",after);
        printf("The GST on shopping is               %f     \n",Gst);
        printf("The CGST on shopping is              %f     \n",Gst/2);
        printf("The SGST on shopping is              %f     \n",Gst/2);
        printf("The Grand Total of shopping is       %f     \n",Gt);
        printf("================================================== \n");
        printf("      Thank you for shopping with us... \n");
        printf("================================================== \n");
       
     }
    else
    if(type==2){
        printf("You have selected for Vegetable section\n");
         printf("===================================== \n");

        printf("  SRNO         Particular      Amount \n");
     
        printf("   1.            Onion           30   \n");
        
        printf("   2.            Potato          10   \n");
        
        printf("   3.            Pumpkin         20  \n");
        
        printf("   4.            Lady'sFinger    30  \n");
        
        printf("   5.            Mirch           50  \n");
       
        printf("===================================== \n");
        printf("Do you want to Buy Onion \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){

            printf("Onion is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*30;
            sum=sum+total;
            printf("The amount for Onion is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy Potato \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Potato is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*20;
             sum=sum+total;
            printf("The amount for Potato is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy Pumpkin \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Pumpkin is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*20;
             sum=sum+total;
            printf("The amount for Pumpkin is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy Lady'sFinger \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Lady'sFinger is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*30;
             sum=sum+total;
            printf("The amount for Lady'sFinger is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }


        printf("Do you want to Buy Chilli \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Chilli is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*50;
             sum=sum+total;
            printf("The amount for Chilli is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        // sum
        float dis=0.0;

        if(sum>=1 && sum<=200){
            dis=(sum*5)/100;
        }
        else
        if(sum>=201 &&  sum<=500){
            dis=(sum*10)/100;
        }
        if(sum>=501){
            dis=(sum*15)/100;
        }

        // dis
        float after=sum-dis;

        // after
        float Gst=(after*18)/100;
        float Gt=after+Gst;


        printf("================================================== \n");
        printf("The amount for shopping is           %d     \n",sum);
        printf("The discount on shopping is          %f     \n",dis);
        printf("The Amount after discount is         %f     \n",after);
        printf("The GST on shopping is               %f     \n",Gst);
        printf("The CGST on shopping is              %f     \n",Gst/2);
        printf("The SGST on shopping is              %f     \n",Gst/2);
        printf("The Grand Total of shopping is       %f     \n",Gt);
        printf("================================================== \n");
        printf("      Thank you for shopping with us... \n");
        printf("================================================== \n");
     }
    else
    if(type==3){
           printf("You have selected for Sports section\n");
           
           printf("===================================== \n");
        printf("  SRNO         Particular      Amount \n");
     
        printf("   1.            Bat           6000   \n");
        
        printf("   2.            Gloves        500   \n");
        
        printf("   3.            Ball          150  \n");
        
        printf("   4.            Kit          5000  \n");
        
        printf("   5.            Soes          1000  \n");
       
        printf("===================================== \n");
        printf("Do you want to Buy Bat \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){

            printf("Bat is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*6000;
            sum=sum+total;
            printf("The amount for apple is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy Gloves \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Gloves is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*50;
             sum=sum+total;
            printf("The amount for Gloves is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy Ball \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Ball is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*150;
             sum=sum+total;
            printf("The amount for Ball is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy Kit \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Kit is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*5000;
             sum=sum+total;
            printf("The amount for Kit is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }


        printf("Do you want to Buy Soes \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Soes is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*1000;
             sum=sum+total;
            printf("The amount for Soes is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        // sum
        float dis=0.0;

        if(sum>=1 && sum<=5000){
            dis=(sum*5)/100;
        }
        else
        if(sum>=5001 &&  sum<=1000){
            dis=(sum*10)/100;
        }
        if(sum>=10001){
            dis=(sum*15)/100;
        }

        // dis
        float after=sum-dis;

        // after
        float Gst=(after*18)/100;
        float Gt=after+Gst;


        printf("================================================== \n");
        printf("The amount for shopping is           %d     \n",sum);
        printf("The discount on shopping is          %f     \n",dis);
        printf("The Amount after discount is         %f     \n",after);
        printf("The GST on shopping is               %f     \n",Gst);
        printf("The CGST on shopping is              %f     \n",Gst/2);
        printf("The SGST on shopping is              %f     \n",Gst/2);
        printf("The Grand Total of shopping is       %f     \n",Gt);
        printf("================================================== \n");
        printf("      Thank you for shopping with us... \n");
        printf("================================================== \n");
       
     }
    else
    if(type==4){
           printf("You have selected for Clothes section\n");
           
           printf("===================================== \n");
        printf("  SRNO         Particular      Amount \n");
     
        printf("   1.            Jeans          1600   \n");
        
        printf("   2.            T-Shirt          150   \n");
        
        printf("   3.           Coat            1500  \n");
        
        printf("   4.            Trousers          350  \n");
        
        printf("   5.            Half-pant           200  \n");
       
        printf("===================================== \n");
        printf("Do you want to Buy Jeans \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){

            printf("Jeans is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*1600;
            sum=sum+total;
            printf("The amount for Jeans is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy T-shirt \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("T-Shirt is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*150;
             sum=sum+total;
            printf("The amount for T-shirt is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy Coat \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Coat is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*1500;
             sum=sum+total;
            printf("The amount for Coat is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy Trouser \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Trouser is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*350;
             sum=sum+total;
            printf("The amount for Trouser is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }


        printf("Do you want to Buy Half-Pant \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Half-Pant is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*200;
             sum=sum+total;
            printf("The amount for Mango is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        // sum
        float dis=0.0;

        if(sum>=1 && sum<=700){
            dis=(sum*5)/100;
        }
        else
        if(sum>=701 &&  sum<=1500){
            dis=(sum*10)/100;
        }
        if(sum>=15001){
            dis=(sum*15)/100;
        }

        // dis
        float after=sum-dis;

        // after
        float Gst=(after*18)/100;
        float Gt=after+Gst;


        printf("================================================== \n");
        printf("The amount for shopping is           %d     \n",sum);
        printf("The discount on shopping is          %f     \n",dis);
        printf("The Amount after discount is         %f     \n",after);
        printf("The GST on shopping is               %f     \n",Gst);
        printf("The CGST on shopping is              %f     \n",Gst/2);
        printf("The SGST on shopping is              %f     \n",Gst/2);
        printf("The Grand Total of shopping is       %f     \n",Gt);
        printf("================================================== \n");
        printf("      Thank you for shopping with us... \n");
        printf("================================================== \n");
       
     }
     else{
         printf("Please enter the valid option...\n");
     }
} else
    if(input=='n' || input=='N'){
    printf("Thank you for using the software \n");
        }
    else{
    printf("Please enter the valid option...\n");

     }     
     
return 0;

}