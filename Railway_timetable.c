#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>


{
  
  
  
  
printf ("\n\t\t\t ---------------------------\n");
      
printf ("\t\t\t| Welcome To Indian Railway |\n");
      
printf ("\t\t\t|---------------------------|\n");
      
printf ("\t\t\t|     Search Your Train     |\n");

printf ("\t\t\t --------------------------- \n\n");
  
  do
    {
    
      
      
      
      
      

if(!isdigit(choice1[0])) {
printf("\t\t\tInvalid Input ...\n\n");
goto label1;
}

switch (choice)
	
	{
	
	  
	  
	  
	  
	  
	    
	    {
	      
		("Sorry !! You entered same source & destination station\n");
	      
	    
	  
	  
	
	  
	  
	  
	  
	
	  
	  
if(!isdigit(number1[0])) {
printf("\t\t\tInvalid Input ...\n\n");
goto label1;
}
number=atoi(number1);
	  
	  
	
	  
	  
	  
	  
	  
	  
	  do
	    {
	      
	      printf ("\t\t\t\t\t\t      |");
	      
	    
	  while (!feof (fp));
	  
	  
	  
	
	  
	
label3:     
      
if(!isalpha(ans1[0])) {
printf("\t\t\tInvalid Input ...\n\n");
goto label3;
}
ans=ans1[0];
    

  while (ans == 'y' || ans == 'Y');
 
}


{
  
  
  int r[14][14] = 
    { 
{0, 11, 34, 176, 206, 296, 347, 422, 473, 486, 542, 593, 637, 656}, 
{11, 0, 23, 165, 196, 285, 336, 412, 462, 475, 532, 582, 626, 646}, 
{34, 23, 0, 142, 173, 263, 314, 389, 439, 453, 509, 560, 603, 623}, 
{176, 165, 142, 0, 31, 121, 172, 247, 297, 311, 367, 418, 461, 481}, 
{206, 196, 173, 31, 0, 90, 141, 216, 266, 280, 336, 387, 430, 450}, 
{296, 285, 263, 121, 90, 0, 51, 126, 176, 190, 246, 297, 340, 362}, 
{347, 336, 314, 172, 141, 51, 0, 75, 125, 139, 195, 246, 289, 309}, 
{422, 412, 389, 247, 216, 126, 75, 0, 50, 64, 120, 171, 214, 234}, 
{473, 462, 439, 297, 266, 176, 125, 50, 0, 14, 70, 121, 164, 184}, 
{486, 475, 453, 311, 280, 190, 139, 64, 14, 0, 56, 107, 150, 170}, 
{542, 532, 509, 367, 336, 246, 195, 120, 70, 56, 0, 51, 94, 114}, 
{593, 582, 560, 418, 387, 297, 246, 171, 121, 107, 51, 0, 43, 63}, 
{606, 596, 573, 431, 400, 310, 259, 184, 134, 120, 64, 13, 30, 0} 
};
  
  
  do
    {
      
      i++;
      
	{
	  
	  g = i;
	
      else if (!strcmp (destination, c))
	{
	  
	  h = i;
	
    }
  while (!feof (fp));
  
    {
      
      
    
  
    {
      
      
    
  
  else if (y == 0)
    {
      
	("Sorry !! Destination station is not available in our database\n");
      
    
  
  
  
  printf ("\n\n");
  
    //printf("\t\t --------------------------------------------------\n");
    printf ("==> Distance between %s & %s station = %d km.", source,
	    destination, r[g - 1][h - 1]);
  
    printf ("\n\n\t\tAvailable Train Between %s & %s Station\n", source,
	    destination);
  printf
    (" --------------------------------------------------------------------------------\n");
  
    ("|Index| Train   |  Train Name       | Arrival | Reach |    Coach Classes         |\n");
  
    ("|     | Number  |                   |  Time   | Time  |                          |\n");
  
    ("|-----|---------|-------------------|---------|-------|--------------------------|\n");
  i = 0;
  
  do
    {
      
      
	
	{
	  
	  
	  
	
    
  while (!feof (fp));
  printf
    (" --------------------------------------------------------------------------------\n\n");
  
  do
    {
label2:      
      
if(!isdigit(a1[0])) { 
printf("Invalid Input ...\n\n");
goto label2;
}
a=atoi(a1);
if(a>i || a<=0) {
printf("Invalid index ... \n\n");
goto label2;
}     
      
      
    
  while (ans1 == 'y' || ans1 == 'Y');



{
  
  
  
  
  do
    {
      
      
	
	  {
	    
	    
	    
	    
	    do
	      
	    
	    
	    printf (" --------------------------\n");
	    
	    do
	      {
		
		
		  {
		    
		    
		    
		  
	      
	    while (!feof (fp));
	    printf (" --------------------------\n\n");
	    
	    
	  
    }
  
  
  
  



{
  
  
  
  
  do
    
  
  
  
    {
      
      
    
  
  
  
  do
    
  
  
  printf (" --------------------------\n");
  
  do
    {
      
      
	{
	  
	  
	  
	
    
  while (!feof (fp));
  printf (" --------------------------\n\n");
  
  



{
  
  
  
  
  
  
  fp3 = fopen ("Database4.txt", "r");
  
  do
    
  
  
  
    
    {
      
      
    
  printf ("| ");
  
  
  do
    fscanf (fp2, "%d", &b);
  
  
  do
    {
      
      
	{
	  
	  
	    {
	      
	      
	    
	
    
  while (getc (fp1) != -1);
  
  
  
  do
    
  
  
  do
    {
      
      
	{
	  
	  
	    {
	      
	      
	    
	
    
  while (getc (fp1) != -1);
  
  
