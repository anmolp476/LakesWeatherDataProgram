#include <math.h>
#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
//Varaible for Celcius symbol 
char dc=248; 
//Variable for lakename (Used in Q4)
char ln[30]; 

//Function to find the average of the lakes (Q1)
double average(double x[]){
  int counter;
  
  double sum = 0.0, mean = 0.0;
  
  for(counter = 0; counter < 366; counter++){
    sum += x[counter];
  }
    
  mean = sum/counter;
  return(mean); 
}

//Function to find the average of the lakes (Q5, Q9)
double averageq2(double x[], int lowerBounds, int higherBounds)
{  
  double sum = 0.0, mean = 0.0;
  
  for(int counter = lowerBounds; counter < higherBounds; counter++)
  {
    sum += x[counter];
  }
  
  //printf("%0.2lf is the sum, and there are %d terms", sum, (higherBounds-lowerBounds));
  mean = sum/(higherBounds-lowerBounds);
  return(mean); 
}


//Calculates the difference between two values (Q9) 
double diff(double x, double y)
{
  double z = x - y; 
  return(z); 
}


void dayToDate(int day)
{
	//The day is in january
	if(day >= 1 && day <= 31)
	{
		printf("January %d, 2020\n", day);
	}
	
	else if(day >= 32 && day <= 59)
	{
		printf("February %d, 2020\n", day-31);
	}
	
	else if(day >= 60 && day <= 90)
	{
		printf("March %d, 2020\n", day-59);
	}
	
	else if(day >= 91 && day <= 120)
	{
		printf("April %d, 2020\n", day-90);
	}
	
	else if(day >= 121 && day <= 151)
	{
		printf("May %d, 2020\n", day-121);
	}
	
	else if(day >= 152 && day <= 181)
	{
		printf("June %d, 2020\n", day-151);
	}
	
	else if(day >= 182 && day <= 212)
	{
		printf("July %d, 2020\n", day-181);
	}
	
	else if(day >= 213 && day <= 243)
	{
		printf("August %d, 2020\n", day-212);
	}
	
	else if(day >= 244 && day <= 273)
	{
		printf("September %d, 2020\n", day-243);
	}
	
	else if(day >= 274 && day <= 304)
	{
		printf("October %d, 2020\n", day-273);
	}
	
	else if(day >= 305 && day <= 334)
	{
		printf("November %d, 2020\n", day-304);
	}
	
	else if(day >= 335 && day <= 365)
	{
		printf("December %d, 2020\n", day-334);
	}
}

//Function used to compare two values (Used in Q2)
void compare(double x, double y){
  if(x>y){
    printf("HIGHER"); 
  }
  else if (x<y){
    printf("LOWER"); 
  }
  else{
    printf("SAME"); 
  }
}

//Function used to sort an array into accending order
void sort(double x[], int n)
{
   int i, j = 0;
   double temp; 
   for (i = 0; i < n; i++)       
       for (j = i+1; j < n; j++)
           if (x[i] > x[j])
           {
              temp = x[i];
              x[i] = x[j]; 
              x[j] = temp;
           }
}

//Prints out the array 
void printArray(double x[], int n)
{
    for (int i=0; i < n; i++)
        printf("%.2lf ", x[i]);
    printf("\n"); 
}

//Function for Q3
void sortday(double x[], int y[], int n) 
{
   int i, j = 0;
   double temp; 
   int tempday; 
   for (i = 0; i < n; i++)       
       for (j = i+1; j < n; j++)
           if (x[i] > x[j])
           {
              temp = x[i];
              x[i] = x[j]; 
              x[j] = temp;

              tempday = y[i]; 
              y[i] = y[j]; 
              y[j] = tempday; 
           }
}

//A function that checks on what days the temp is the same
void same(double x[], int y[], int z[], int n)
{ 
  int j; 
  
  for(j= 0; j<=n; j++)
  {
	if(x[0] == x[j])
	{
	   z[j] = y[j]; 
	   //printf("%lf is equal to %lf at day %d = y[j] and %d = z[j]\n", x[0], x[j], y[j], z[j]);
	   //printf("%d is z[j], %d is y[j], and %lf is x[j] \n", z[j], y[j], x[j]);
	}
  } 
  
  for(int i = 0; i <= n; i++)
  {
	  //printf("The temperature %lf is at day %d = y[] and %d = z[]\n", x[i], y[i], z[i]);
  }
}

//A function used to process the dates from the daynum array 
void printdate(int z[], int n)
{
    for (int i=0; i < n; i++)
    {
      dayToDate(z[i]); 
       
    }   
} 

//Function to print out the lake name for Q4
void lakename(double x, double y[], char stg[]) 
{
  if(x == y[0])
  {
    printf("Lake St.Clair has the "); 
    strcpy(stg,"lstcr"); 
  }
  else if(x == y[1])
  {
    printf("Lake Ontario has the ");
    strcpy(stg,"lont");
  }
  else if(x == y[2])
  {
    printf("Lake Erie has the ");
    strcpy(stg,"lerie"); 
  }
  else if(x == y[3])
  {
    printf("Lake Huron has the ");
    strcpy(stg,"lhur");
  }
  else if(x == y[4])
  {
    printf("Lake Michigan has the ");
    strcpy(stg,"lmich");
  }
  else if(x == y[5])
  {
    printf("Lake Superior has the ");
    strcpy(stg,"lsup");
  }
}

void lakename2(double x, double y[]) 
{
  if(x == y[0])
  {
    printf("Lake Superior has an average temperature of "); 
  }
  else if(x == y[1])
  {
    printf("Lake Ontario has an average temperature of ");
  }
  else if(x == y[2])
  {
    printf("Lake St.Clair has an average temperature of ");
  }
  else if(x == y[3])
  {
    printf("Lake Michigan has an average temperature of ");
  }
  else if(x == y[4])
  {
    printf("Lake Huron has an average temperature of ");
  }
  else 
  {
    printf("Lake Erie has an average temperature of ");
  }
}

//Function for Q4
void organizeLakeNameAndTemp(double lakeValues[], char lakeNames[], int n)
{
	double temp, tempName; 
	int i, j = 0;
	
	for(i = 0; i < n; i++)
	{
		for(j = i+1; j < n; j++)
		{
			if(lakeValues[i] > lakeValues[j])
			{
				temp = lakeValues[i];
				lakeValues[i] = lakeValues[j];
				lakeValues[j] = temp;
				
				tempName = lakeNames[i];
				lakeNames[i] = lakeNames[j];
				lakeNames[j] = tempName;
				
			}
			
		}
	}
}

//Function for Q7
void checkSwim(double lake[], char lakeNames[6][50], int whichLake)
{
    int numDays = 0;
    
    for(int i = 0; i < 366; i++)
    {
        if(lake[i] > 20.0)
        {
            numDays += 1;
        }
    }
    
    switch(whichLake)
    {
        case 0:
            printf("%s     | %d days  |\n", lakeNames[0], numDays);
            break;
        case 1: 
            printf("%s        | %d days |\n", lakeNames[1], numDays);
            break;
        case 2: 
            printf("%s | %d days |\n", lakeNames[2], numDays);
            break;
        case 3: 
            printf("%s      | %d days |\n", lakeNames[3], numDays);
            break;
        case 4:
            printf("%s     | %d days |\n", lakeNames[4], numDays);
            break;
        case 5: 
            printf("%s         | %d days |\n", lakeNames[5], numDays);
            break;
        
        default:
            printf("Not correct input");
        
    }
    
}

//Function for Q8
void checkFreeze(double lake[], char lakeNames[6][50], int whichLake)
{
    int numDays = 0;
    
    for(int i = 0; i < 366; i++)
    {
        if(lake[i] < 0.0)
        {
            numDays += 1;
        }
    }
    
    switch(whichLake)
    {
        case 0:
            printf("%s     | %d |\n", lakeNames[0], numDays);
            break;
        case 1: 
            printf("%s        | %d |\n", lakeNames[1], numDays);
            break;
        case 2: 
            printf("%s | %d |\n", lakeNames[2], numDays);
            break;
        case 3: 
            printf("%s      | %d |\n", lakeNames[3], numDays);
            break;
        case 4:
            printf("%s     | %d |\n", lakeNames[4], numDays);
            break;
        case 5: 
            printf("%s  | %d |\n", lakeNames[5], numDays);
            break;
        
        default:
            printf("Not correct input");
        
    }
    
}

//Function for Q6
void winterAvg(double lake[], char string[6][50], int whichLake)
{
    double sum1 = 0, sum2 = 0, avg = 0, counterAdd = 0;
    int counter1 = 0, counter2 = 0;
    
    for(int i = 0; i < 79; i++)
    {
        sum1 += lake[i];
        counter1 += 1;
    }
    
    for(int k = 354; k < 366; k++)
    {
        sum2 += lake[k];
        counter2 += 1;
    }
    
    counterAdd = (counter1+counter2);
    avg = (sum1+sum2)/counterAdd;
    
    switch(whichLake)
    {
        case 0:
            printf("%s     | %0.2lf%cC |\n", string[0], avg, dc);
            break;
        case 1: 
            printf("%s        | %0.2lf%cC |\n", string[1], avg, dc);
            break;
        case 2: 
            printf("%s | %0.2lf%cC |\n", string[2], avg, dc);
            break;
        case 3: 
            printf("%s      | %0.2lf%cC |\n", string[3], avg, dc);
            break;
        case 4:
            printf("%s     | %0.2lf%cC |\n", string[4], avg, dc);
            break;
        case 5: 
            printf("%s         | %0.2lf%cC |\n", string[5], avg, dc);
            break;
        
        default:
            printf("Not correct input");
        
    }
}



/*double warmestTemp(double lake1, double lake2, double lake3, double lake4, double lake5, double lake6)
{
	
	return 0.0;
}*/
 
int main() {
  FILE *fptr = fopen("temp2020.txt", "r");
  int year;
  int day[366];
  double sup[366];
  double mich[366];
  double huron[366];
  double erie[366];
  double ont[366];
  double stclr[366];
  //Average of all the lakes combined 
  double allavg;
  //Array with all the avergae temps
    

  //File Proccesing 
  if (fptr == NULL) {
    printf("Error, file could not be opened");
  }
  while (!feof(fptr)) {
    for (int i = 0; i < 366; i++) {
        fscanf(fptr, "%d %d %lf %lf %lf %lf %lf %lf", &year, &day[i], &sup[i], &mich[i], &huron[i], &erie[i], &ont[i], &stclr[i]);
    }  
  }

  //Finding the average of all six lakes
  allavg = ((average(sup) + average(mich) + average(huron) + average(erie) + average(ont) + average(stclr))/6); 

  double lsup = average(sup); 
  double lmich = average(mich);
  double lhuron = average(huron);
  double lerie = average(erie);
  double lont = average(ont); 
  double lstclr = average(stclr); 

  //Question 1 Outputs 
  printf("\033[4;36m");
  printf("Question 1:\n");
  printf("\033[0m");
  printf("\n"); 
  printf("\033[0;32m");
  printf("Table 1: A Table containing the average temperature for each lake\n");
  printf("\033[0m");
  printf("------------------------------\n");
  printf("|| Lake Superior || %.2lf%cC  ||\n", lsup, dc);
  printf("------------------------------\n");
  printf("|| Lake Michigan || %.2lf%cC ||\n", lmich, dc);
  printf("------------------------------\n");
  printf("|| Lake Huron    || %.2lf%cC  ||\n", lhuron, dc);
  printf("------------------------------\n");
  printf("|| Lake Erie     || %.2lf%cC ||\n", lerie, dc);
  printf("------------------------------\n");
  printf("|| Lake Ontario  || %.2lf%cC ||\n", lont, dc);
  printf("------------------------------\n");
  printf("|| Lake St.Clair || %.2lf%cC ||\n", lstclr, dc);
  printf("------------------------------\n");
  printf("|| All the Lakes || %.2lf%cC ||\n", allavg, dc); 
  printf("------------------------------\n");
  printf("\n");  

  //Question 2
  printf("\033[4;36m");
  printf("Question 2:\n\n");
  printf("\033[0m");
  printf("\033[0;32m");
  printf("Table 2: Which lakes have a higher/lower then average temperature\n");
  printf("\033[0m");
  printf("-----------------------------\n");
  printf("|| Lake Superior || "); compare(average(sup), allavg); printf("  ||\n");
  printf("-----------------------------\n"); 
  printf("|| Lake Michigan || "); compare(average(mich), allavg); printf(" ||\n"); 
  printf("-----------------------------\n");
  printf("|| Lake Huron    || "); compare(average(huron), allavg); printf("  ||\n");
  printf("-----------------------------\n"); 
  printf("|| Lake Erie     || "); compare(average(erie), allavg); printf(" ||\n"); 
  printf("-----------------------------\n");
  printf("|| Lake Ontario  || "); compare(average(ont), allavg); printf(" ||\n");
  printf("-----------------------------\n");
  printf("|| Lake St.Clair || "); compare(average(stclr), allavg); printf(" ||\n");
  printf("-----------------------------\n");
  double avgTemps[6] = {lstclr, lont, lerie, lhuron, lmich, lsup};
  double ATemps[6] = {lstclr, lont, lerie, lhuron, lmich, lsup};
  
  //Now sort the array from lowest to highest 
  sort(avgTemps, 6); 
  //printArray(avgTemps, 6); 
  
  //Get the index of the last element of the sorted array
  int lengthIndex = sizeof(avgTemps)/sizeof(avgTemps[0])-1;

  double coldest = avgTemps[0]; 
  double warmest = avgTemps[5]; 

  printf("\033[0;35m");
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf("\033[0m");

  printf("\033[0;35m"); 
  printf("The coldest and warmest lakes based on average yearly temperatures: \n");
  printf("\033[0m");

  lakename(coldest, ATemps, ln); 
  printf(" coldest temperature at: %0.2lf%cC\n", coldest, dc);
  lakename(warmest, ATemps, ln); 
  printf(" warmest temperature at: %0.2lf%cC\n", warmest, dc);
  
  //Question 3
  int copyDaynum[366], copyDaynum2[366], copyDaynum3[366], copyDaynum4[366], copyDaynum5[366], copyDaynum6[366]
  , day1[366], day2[366], day3[366], day4[366], day5[366], day6[366]; 
  
  double copySoop[366], copyOnt[366], copyHuron[366], copyErie[366], copyStClr[366], copyMich[366]; 
  int lengthIndexk = sizeof(day)/sizeof(day[0]);
    
  for(int i = 0; i < lengthIndexk; i++)
  {
	  day1[i] = day[i];
	  day2[i] = day[i];
	  day3[i] = day[i];
	  day4[i] = day[i];
	  day5[i] = day[i];
	  day6[i] = day[i];
    copySoop[i] = sup[i];
	  copyOnt[i] = ont[i];
	  copyErie[i] = erie[i];
	  copyStClr[i] = stclr[i];
	  copyHuron[i] = huron[i];
	  copyMich[i] = mich[i];
  }

  printf("\033[0;35m");
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf("\033[0m");
  
  //Lake Superior 
  printf("\033[4;36m");
  printf("Question 3:\n");
  printf("\033[0m");

  printf("\033[0;35m");
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf("\033[0m");

  printf("\033[0;35m"); 
  printf("The days on which the warmest and coldest temperatures fall on for each lake: \n");
  printf("\033[0m"); 

  sortday(sup, day1, 366); 
  printf("For Lake Superior the coldest temperature of %.2lf%cC was recorded on:\n", sup[0], dc);
  same(sup, day1, copyDaynum, 366); 
  printdate(copyDaynum, 366);
  printf("For Lake Superior the warmest temperature of %.2lf%cC was recorded on:\n", sup[365], dc); 
  dayToDate(day1[365]);

  printf("\033[0;35m");
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf("\033[0m");

  //Lake Michigan
  sortday(mich, day2, 366); 
  printf("For Lake Michigan the coldest temperature of %.2lf%cC was recorded on:\n", mich[0], dc);
  same(mich, day2, copyDaynum2, 366); 
  printdate(copyDaynum2, 366); 
  printf("For Lake Michigan the warmest temperature of %.2lf%cC was recorded on:\n", mich[365], dc); 
  dayToDate(day2[365]);
  
  printf("\033[0;35m");
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf("\033[0m");
  
  //Lake Huron
  sortday(huron, day3, 366); 
  printf("For Lake Huron the coldest temperature of %.2lf%cC was recorded on:\n", huron[0], dc);
  same(huron, day3, copyDaynum3, 366); 
  printdate(copyDaynum3, 366); 
  printf("For Lake Huron the warmest day has a temperature of %.2lf%cC was recorded on:\n", huron[365], dc); 
  dayToDate(day3[365]);
  
  printf("\033[0;35m");
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf("\033[0m");
  
  //Lake Erie
  sortday(erie, day4, 366); 
  printf("For Lake Erie the coldest temperature of %.2lf%cC was recorded on:\n", erie[0], dc);
  same(erie, day4, copyDaynum4, 366); 
  printdate(copyDaynum4, 366); 
  printf("For Lake Erie the warmest temperature of %.2lf%cC was recorded on:\n", erie[365], dc); 
  dayToDate(day4[365]);
  
  printf("\033[0;35m");
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf("\033[0m");
  
  //Lake Ontario
  sortday(ont, day5, 366); 
  printf("For Lake Ontario the coldest temperature of %.2lf%cC was recorded on:\n", ont[0], dc);
  same(ont, day5, copyDaynum5, 366); 
  printdate(copyDaynum5, 366); 
  printf("For Lake Ontario the warmest temperature of %.2lf%cC was recorded on:\n", ont[365], dc); 
  dayToDate(day5[365]);
 
  printf("\033[0;35m");
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf("\033[0m");
  
  //Lake St.Clair
  sortday(stclr, day6, 366); 
  printf("For Lake St.Clair the coldest temperature of %.2lf%cC was recorded on:\n", stclr[0], dc);
  same(stclr, day6, copyDaynum6, 366); 
  printdate(copyDaynum6, 366); 
  printf("For Lake St.Clair the warmest temperature of %.2lf%cC was recorded on:\n", stclr[365], dc); 
  dayToDate(day6[365]);
  
  printf("\033[0;35m");
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf("\033[0m");
  
  //Question 4
  printf("\033[4;36m");
  printf("Question 4:\n");
  printf("\033[0m");  
  double Wtemps[6] =
  {
    stclr[365],
    ont[365],
    erie[365],
    huron[365],
    mich[365],
    sup[365], 
  };

  double Ctemps[6] =
  {
    stclr[0],
    ont[0],
    erie[0],
    huron[0],
    mich[0],
    sup[0], 
  };
  
  printf("\033[0;35m");
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf("\033[0m");

  printf("\033[0;35m"); 
  printf("The overall coldest and warmest temperature from all the lakes and the days those temperatures fall on: \n");
  printf("\033[0m"); 

  double warmestTemps[6] = {stclr[365], ont[365], erie[365], huron[365], mich[365], sup[365]};
  sort(warmestTemps, 6);  
  double warm = warmestTemps[5];
  lakename(warm, Wtemps, ln);
  printf("warmest temperature of %.2lf%cC was recorded on:\n", warm, dc);   

  if(strcmp(ln,"lstcr")==0)
  {
    sortday(stclr, day6, 366);
    dayToDate(day6[365]);
  }
  else if(strcmp(ln,"lont")==0)
  {
    sortday(ont, day5, 366);
    dayToDate(day5[365]);
  }
  else if(strcmp(ln,"lerie")==0)
  {
    sortday(erie, day4, 366);
    dayToDate(day4[365]);
  }
  else if(strcmp(ln,"lhur")==0)
  {
    sortday(huron, day3, 366);
    dayToDate(day3[365]);
  }
  else if(strcmp(ln,"lmich")==0)
  {
    sortday(mich, day2, 366); 
    dayToDate(day2[365]);
  }
  else if(strcmp(ln,"lsup")==0)
  {
    sortday(sup, day1, 366); 
    dayToDate(day1[365]);
  }

  printf("\n");
  
  double coldestTemps[6] = {stclr[0], ont[0], erie[0], huron[0], mich[0], sup[0]};
  sort(coldestTemps, 6); 
  double cold = coldestTemps[0];
  lakename(cold, Ctemps, ln);
  printf("coldest temperature of %.2lf%cC was recorded on:\n", cold, dc); 

  if(strcmp(ln,"lstcr")==0)
  {
    sortday(stclr, day6, 366);
    same(stclr, day6, copyDaynum6, 366); 
    printdate(copyDaynum6, 366); 
  }
  else if(strcmp(ln,"lont")==0)
  {
    sortday(ont, day5, 366);
    same(ont, day5, copyDaynum5, 366); 
    printdate(copyDaynum5, 366); 
  }
  else if(strcmp(ln,"lerie")==0)
  { 
    sortday(erie, day4, 366);
    same(erie, day4, copyDaynum4, 366); 
    printdate(copyDaynum4, 366); 
  }
  else if(strcmp(ln,"lhur")==0)
  {
    sortday(huron, day3, 366);
    same(huron, day3, copyDaynum3, 366); 
    printdate(copyDaynum3, 366); 
  }
  else if(strcmp(ln,"lmich")==0)
  {
    sortday(mich, day2, 366); 
    same(mich, day2, copyDaynum2, 366); 
    printdate(copyDaynum2, 366);
  }
  else if(strcmp(ln,"lsup")==0)
  {
    sortday(sup, day1, 366); 
    same(sup, day1, copyDaynum, 366); 
    printdate(copyDaynum, 366);
  }

  printf("\033[0;35m");
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf("\033[0m");

  //Question 5
  double sumAvgDays[6];
  printf("\033[4;36m");
  printf("Question 5: \n\n");
  printf("\033[0m");

  double csup = averageq2(copySoop, 171, 265);
  double cont = averageq2(copyOnt, 171, 265);
  double cstclr = averageq2(copyStClr, 171, 265);
  double cmich = averageq2(copyMich, 171, 265);
  double chur = averageq2(copyHuron, 171, 265);
  double cerie = averageq2(copyErie, 171, 265);
  double laverages[6] = {csup, cont, cstclr, cmich, chur, cerie}; 

  
  sumAvgDays[0] = averageq2(copySoop, 171, 265);
  sumAvgDays[1] = averageq2(copyOnt, 171, 265);
  sumAvgDays[2] = averageq2(copyStClr, 171, 265);
  sumAvgDays[3] = averageq2(copyMich, 171, 265);
  sumAvgDays[4] = averageq2(copyHuron, 171, 265);
  sumAvgDays[5] = averageq2(copyErie, 171, 265);

  sort(sumAvgDays, 6);

  printf("\033[0;32m");
  printf("Table 3: The summer average from day 172 to day 265\n");
  printf("\033[0m");
  printf("-------------------------------------------------------\n");
  lakename2(sumAvgDays[0], laverages); 
  printf("| %0.2lf%cC |\n", sumAvgDays[0], dc);

  lakename2(sumAvgDays[1], laverages); 
  printf("   | %0.2lf%cC |\n", sumAvgDays[1], dc);

  lakename2(sumAvgDays[2], laverages); 
  printf("| %0.2lf%cC |\n", sumAvgDays[2], dc);

  lakename2(sumAvgDays[3], laverages); 
  printf(" | %0.2f%cC |\n", sumAvgDays[3], dc);

  lakename2(sumAvgDays[4], laverages); 
  printf("| %0.2lf%cC |\n", sumAvgDays[4], dc);

  lakename2(sumAvgDays[5], laverages); 
  printf("    | %0.2lf%cC |\n", sumAvgDays[5], dc);
  printf("-------------------------------------------------------\n");

  //Question 6
  printf("\033[4;36m");
  printf("\nQuestion 6: \n\n");
  printf("\033[0m");
  
  char lakeNames[6][50] = {"Lake Superior", "Lake Huron", "Lake Saint Claire", "Lake Ontario", "Lake Michigan", "Lake Erie"};

  printf("\033[0;32m");
  printf("Table 4: The winter averages for all 6 lakes\n");
  printf("\033[0m");

  printf("----------------------------\n");
  winterAvg(copyStClr, lakeNames, 2);//0 == Lake Superior
  winterAvg(copySoop, lakeNames, 0);//2 == Lake Saint Clair
  winterAvg(copyHuron, lakeNames, 1);//5 == Lake Erie
  winterAvg(copyErie, lakeNames, 5);//4 == Lake Michigan
  winterAvg(copyMich, lakeNames, 4);//1 == Lake Huron
  winterAvg(copyOnt, lakeNames, 3);//3 == Lake Ontario
  printf("----------------------------\n");
  
  
  //Question 7
  printf("\033[4;36m");
  printf("\nQuestion 7: \n\n");
  printf("\033[0m");

  printf("\033[0;32m");
  printf("Table 5: The number of days you can swim comfortable for each lake\n");
  printf("\033[0m");

  printf("-----------------------------\n");
  checkSwim(copyHuron, lakeNames, 1);
  checkSwim(copyOnt, lakeNames, 3);
  checkSwim(copyMich, lakeNames, 4);
  checkSwim(copyErie, lakeNames, 5);
  checkSwim(copyStClr, lakeNames, 2);
  checkSwim(copySoop, lakeNames, 0);
  printf("-----------------------------\n");
  
  
  //Question 8
  printf("\033[4;36m");
  printf("\nQuestion 8: \n\n");
  printf("\033[0m");

  printf("\033[0;32m");
  printf("Table 6: The number of days that each lake freezes\n");
  printf("\033[0m");

  printf("-----------------------\n");
  checkFreeze(copyStClr, lakeNames, 2);
  checkFreeze(copyMich, lakeNames, 4);
  checkFreeze(copyMich, lakeNames, 4);
  checkFreeze(copySoop, lakeNames, 0);
  checkFreeze(copyHuron, lakeNames, 1);
  checkFreeze(copyOnt, lakeNames, 3);
  printf("-----------------------\n");
  

  //Question 9 
  FILE *fptr19 = fopen("temp2019.txt", "r");
  int year19;
  int day19[366];
  double sup19[366];
  double mich19[366];
  double huron19[366];
  double erie19[366];
  double ont19[366];
  double stclr19[366];
  //Average of all the lakes combined 
  double allavg19;
  
  //File Processing 
  if (fptr19 == NULL) {
    printf("Error, file could not be opened");
  }
  while (!feof(fptr19)) {
    for (int i = 0; i < 366; i++) {
        fscanf(fptr19, "%d %d %lf %lf %lf %lf %lf %lf", &year19, &day19[i], &sup19[i], &mich19[i], &huron19[i], &erie19[i], &ont19[i], &stclr19[i]);
    }  
  }
  allavg19 = ((average(sup19) + average(mich19) + average(huron19) + average(erie19) + average(ont19) + average(stclr19))/6); 

  double lsup19 = averageq2(sup19, 0, 365); 
  double lmich19 = averageq2(mich19, 0, 365);
  double lhuron19 = averageq2(huron19, 0, 365);
  double lerie19 = averageq2(erie19, 0, 365);
  double lont19 = averageq2(ont19, 0, 365); 
  double lstclr19 = averageq2(stclr19, 0, 365); 

  //Question 9 Outputs 
  printf("\n");
  printf("\033[4;36m");
  printf("Question 9:\n");
  printf("\033[0m");
  printf("\n");

  printf("\033[0;32m");
  printf("Table 7: A Table containing the average temperature for each lake\n");
  printf("\033[0m");
  printf("\n");

  printf("--------------------------------------------------------------------\n");
  printf("|| Lake Name     || 2019 (%cC )  || 2020 (%cC )   ||Difference (%cC )||\n", dc, dc, dc);
  printf("--------------------------------------------------------------------\n"); 
  printf("|| Lake Superior || %6.2lf      || %6.2lf       || %6.2lf         ||\n", lsup19, lsup, diff(lsup, lsup19));
  printf("|| Lake Michigan || %6.2lf      || %6.2lf       || %6.2lf         ||\n", lmich19, lmich, diff(lmich,lmich19));
  printf("|| Lake Huron    || %6.2lf      || %6.2lf       || %6.2lf         ||\n", lhuron19, lhuron, diff(lhuron,lhuron19));
  printf("|| Lake Erie     || %6.2lf      || %6.2lf       || %6.2lf         ||\n", lerie19, lerie, diff(lerie,lerie19));
  printf("|| Lake Ontario  || %6.2lf      || %6.2lf       || %6.2lf         ||\n", lont19, lont, diff(lont,lont19));
  printf("|| Lake St.Clair || %6.2lf      || %6.2lf       || %6.2lf         ||\n", lstclr19, lstclr, diff(lstclr,lstclr19));
  printf("|| All Lakes     || %6.2lf      || %6.2lf       || %6.2lf         ||\n", allavg19, allavg, diff(allavg,allavg19)); 
  printf("--------------------------------------------------------------------\n");
  printf("\n"); 
  return (0);
}