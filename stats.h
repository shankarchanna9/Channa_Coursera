/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.h> 
 * @brief <Developed the seven functions in the stats.h header files and later called in the main function for respective needs  >
 *
 * print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.
 * print_array() - Given an array of data and a length, prints the array to the screen
 * find_median() - Given an array of data and a length, returns the median value
 * find_mean() - Given an array of data and a length, returns the mean
 * find_maximum() - Given an array of data and a length, returns the maximum
 * find_minimum() - Given an array of data and a length, returns the minimum
 * sort_array() - Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. 
 * These functions are developed and stored in the <stats.h> header file
 *
 * @author <Shankar Channa>
 * @date <11 Jul 2020>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__
#define SIZE (40)

void print_statistics(unsigned char a[]); 
void print_array(unsigned char a[]);
void sort_array(unsigned char a[]);
float find_median(unsigned char a[]);
unsigned int find_maximum(unsigned char a[]);
unsigned int find_minimum(unsigned char a[]);
float find_mean(unsigned char a[]);



/*
 * @brief <Prints the statistics of the 1-D given array data>
 *
 * This function intially finds the mean ,median, minimum and maximum values from the given 
 * array data. Later its prints the values of those
 *
 * @param <a[]> < 1-D array data is taken as unsigned char type>
 *
 * @return <Prints the various values under statistics function>
 */

void print_statistics(unsigned char a[]){
unsigned char min, max;
float mean,median;
min=find_minimum(a);
max=find_maximum(a);
mean=find_mean(a);
median=find_median(a);
printf("Minimum=%d\tMaximum=%d\tMean=%.2f\tMedian=%.2f\n",min,max,mean,median);
} 



/*
 * @brief <Prints the 1-D array data>
 *
 * This function prints the 1D array data using print_array() function
 *
 * @param <a[]> < 1-D array data is taken as unsigned char type>
 *
 * @return <Prints the 1D array data on console>
 */
void print_array(unsigned char a[]){
printf("\nGiven array data is printed below\n");
for(int i=0;i<SIZE;i++)
printf("%d\t",a[i]);
printf("\n");
}



/*
 * @brief <Sorts the 1D array data>
 *
 * This function sorts the 1D array data and prints it on console using sort_array() function
 *
 * @param <a[]> < 1-D array data is taken as unsigned char type>
 *
 * @return <Prints the 1D array data on console>
 */
void sort_array(unsigned char a[]){
unsigned char i,j;
int temp;
for(i=0;i<SIZE;i++)
    {
      for(j=i+1;j<SIZE;++j){
         if(a[i]<a[j]){
          temp=a[i];
	  a[i]=a[j];
	  a[j]=temp;
}
}
}
printf("Sorted the array in desending order\n");
for(i=0;i<SIZE;i++)
printf("%d\t",a[i]);
printf("\n");
}



/*
 * @brief <Calculates the median value>
 *
 * This function intially sorts the 1D array data and later finds the median value and return the value to called function
 *
 * @param <a[]> < 1-D array data is taken as unsigned char type>
 *
 * @return <returns the median value>
 */
float find_median(unsigned char a[])
{
unsigned char i, j;
int temp;
for (i = 0; i < SIZE; i++){
 for (j = i + 1; j < SIZE; j++){
   if(a[i] < a[j]){
     	temp = a[i];
        a[i] = a[j];
     	a[j] = temp;
}
}
}
if(SIZE%2!=0)
temp=a[SIZE/2];
temp=((a[(SIZE-1)/2])+(a[SIZE/2]))/2;
return temp;
}


/*
 * @brief <Calculates the mean value>
 *
 * This function calculated the mean value form the gien 1D array data
 *
 * @param <a[]> < 1-D array data is taken as unsigned char type>
 *
 * @return <returns the mean value>
 */
float  find_mean(unsigned char a[])
{
float m=0;
int i;
for(i=0; i<SIZE; i++)
m+=a[i];
return (m/40);
}


/*
 * @brief <Calculates the minimum value>
 *
 * This function calculated the minimum value form the gien 1D array data
 *
 * @param <a[]> < 1-D array data is taken as unsigned char type>
 *
 * @return <returns the minimum value of the given data>
 */
unsigned int find_minimum(unsigned char a[])
{
unsigned char min1;
int i;
min1=a[0];
for(i=1; i<SIZE;i++)
{
if(a[i]<min1)
min1=a[i];
}
return min1;
}



/*
 * @brief <Calculates the maximum value>
 *
 * This function calculated the maximum value form the gien 1D array data
 *
 * @param <a[]> < 1-D array data is taken as unsigned char type>
 *
 * @return <returns the maximum value of the given data>
 */
unsigned int find_maximum(unsigned char a[])
{
unsigned char max1;
int i;
max1=a[0];
for(i=1; i<SIZE;i++)
{
if(a[i]>max1)
max1=a[i];
}
return max1;
}

#endif /* __STATS_H__ */
