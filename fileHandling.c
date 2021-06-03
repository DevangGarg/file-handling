# include <stdio.h>
# include <string.h>

int main( )
{

	FILE *filePointer ;
	
	char dataToBeWritten[150] = "Coding is the fun activity. Learn it and try to improve with time in it.";
	filePointer = fopen("File.txt", "w") ;
	if ( filePointer == NULL )
	{
		printf( "File.txt file failed to open." ) ;
	}
	else
	{
		
		printf("The file is now opened.\n") ;
		
		if ( strlen ( dataToBeWritten ) > 0 )
		{
			
			fputs(dataToBeWritten, filePointer) ;
			fputs("\n", filePointer) ;
		}
		
		fclose(filePointer) ;
		
		printf("Data successfully written in file File.txt\n");
		printf("The file is now closed.") ;
	}
	return 0;		
}
