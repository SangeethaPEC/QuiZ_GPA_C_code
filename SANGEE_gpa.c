#include<stdio.h>
#include<conio.h>
void textcolor(int YELLOW);
void gpa_calci(char grade[],int credit[])
{
	float gpa=0,totCredit=0;
	int i;
	for (i=0;i<9;i++)
	{
		switch(grade[i])
				{
			case 's':
				gpa+=10 * credit[i];
				totCredit+=credit[i];
				break;
			case 'a':
				gpa+=9 * credit[i];
				totCredit+= credit[i];
				break;

			case 'b':
				gpa+=8 * credit[i];
				totCredit+=credit[i];
				break;

			case 'c':
				gpa+= 7 * credit[i];
				totCredit+=credit[i];
				break;

			case 'd':
				gpa+=6 * credit[i];
				totCredit+=credit[i];
				break;

			case 'e':
				gpa+= 5 * credit[i];
				totCredit+= credit[i];
				break;
			default:
					printf("\nenter grade between A-E");
	    }
    }
    gpa=gpa/totCredit;
    clrscr();
    textcolor(YELLOW);
    window(10,10,40,11);
    cprintf("\n YOUR SCORE IS :%f",gpa);
    getch();
}
void gpa_calculation()
{
	int sem,choice,c[9];
	char *a;
	clrscr();
	printf("\nSEMESTER:\t");
	scanf("%d",&sem);
	clrscr();
	switch(sem)
	{
		case 1:
			printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT\n");
			printf("ENG1:\t");
			a[0]=getche();
			c[0]=4;
			printf("\nMAT1:\t");
			a[1]=getche();
			c[1]=4;
			printf("\nPHY1:\t");
			a[2]=getche();
			c[2]=3;
			printf("\nCHE1:\t");
			a[3]=getche();
			c[3]=3;
			printf("\nCP:\t");
			a[4]=getche();
			c[4]=3;
			printf("\nEG:\t");
			a[5]=getche();
			c[5]=4;
			printf("\nCP LAB:\t");
			a[6]=getche();
			c[6]=2;
			printf("\nPHY CHE LAB:\t");
			a[7]=getche();
			c[7]=1;
			printf("\nEPL LAB:\t");
			a[8]=getche();
			c[8]=2;
			break;
		case 2:
			printf("\nENTER YOUR DEPARTMENT");
			printf("\n1.CSE\n2.ECE\n3.EEE\n4.CIVIL\n5.MECHANICAL\n");
			printf("Enter your choice:\t");
			choice=getche();
			//clrscr();
			switch(choice)
			{
				case '1':
					printf("Your CSE Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nENG2:\t");
					a[0]=getche();
					c[0]=4;
					printf("\nMAT2:\t");
					a[1]=getche();
					c[1]=4;
					printf("\nPHY2:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nCHE2:\t");
					a[3]=getche();
					c[3]=3;
					printf("\nDPSD:\t");
					a[4]=getche();
					c[4]=3;
					printf("\nPDS1:\t");
					a[5]=getche();
					c[5]=3;
					printf("\nDIGI LAB:\t");
					a[6]=getche();
					c[6]=2;
					printf("\nPHY CHE LAB:\t");
					a[7]=getche();
					c[7]=1;
					printf("\nPDS LAB:\t");
					a[8]=getche();
					c[8]=2;
					break;
				case '2':
					printf("Your ECE Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nENG2:\t");
					a[0]=getche();
					c[0]=4;
					printf("\nMAT2:\t");
					a[1]=getche();
					c[1]=4;
					printf("\nPHY2:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nCHE2:\t");
					a[3]=getche();
					c[3]=3;
					printf("\nED:\t");
					a[4]=getche();
					c[4]=3;
					printf("\nCT:\t");
					a[5]=getche();
					c[5]=4;
					printf("\nCD LAB:\t");
					a[6]=getche();
					c[6]=2;
					printf("\nPHY CHE LAB:\t");
					a[7]=getche();
					c[7]=1;
					a[8]=0;
					c[8]=0;
					break;
					case '3':
					printf("Your EEE Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nENG2:\t");
					a[0]=getche();
					c[0]=4;
					printf("\nMAT2:\t");
					a[1]=getche();
					c[1]=4;
					printf("\nPHY2:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nCHE2:\t");
					a[3]=getche();
					c[3]=3;
					printf("\nBCM:\t");
					a[4]=getche();
					c[4]=4;
					printf("\nCT:\t");
					a[5]=getche();
					c[5]=4;
					printf("\nCP LAB:\t");
					a[6]=getche();
					c[6]=2;
					printf("\nPHY CHE LAB:\t");
					a[7]=getche();
					c[7]=1;
					printf("\nEC LAB:\t");
					a[8]=getche();
					c[8]=2;
					break;
				case '4':
					printf("Your CIVIL Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nENG2:\t");
					a[0]=getche();
					c[0]=4;
					printf("\nMAT2:\t");
					a[1]=getche();
					c[1]=4;
					printf("\nPHY2:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nCHE2:\t");
					a[3]=getche();
					c[3]=3;
					printf("\nBEE:\t");
					a[4]=getche();
					c[4]=4;
					printf("\nEM:\t");
					a[5]=getche();
					c[5]=4;
					printf("\nCAD LAB:\t");
					a[6]=getche();
					c[7]=2;
					printf("\nPHY CHE LAB:\t");
					a[8]=getche();
					c[8]=1;
					break;
				case '5':
					printf("Your MECHANICAL Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nENG2:\t");
					a[0]=getche();
					c[0]=4;
					printf("\nMAT2:\t");
					a[1]=getche();
					c[1]=4;
					printf("\nPHY2:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nCHE2:\t");
					a[3]=getche();
					c[3]=3;
					printf("\nBEE:\t");
					a[4]=getche();
					c[4]=4;
					printf("\nEM:\t");
					a[5]=getche();
					c[5]=4;
					printf("\nCAD LAB:\t");
					a[6]=getche();
					c[6]=2;
					printf("\nPHY CHE LAB:\t");
					a[7]=getche();
					c[7]=1;
					a[8]=0;
					c[8]=0;
					break;

			}
			break;
		case 3:
			printf("\nENTER YOUR DEPARTMENT");
			printf("\n1.CSE\n2.ECE\n3.EEE\n4.CIVIL\n5.MECHANICAL\n");
			printf("Enter your choice:\t");
			choice=getche();
			clrscr();
			switch(choice)
			{
				case '1':
					printf("Your CSE Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nTDPE:\t");
					a[0]=getche();
					c[0]=4;
					printf("\nPDS2:\t");
					a[1]=getche();
					c[1]=3;
					printf("\nDBMS:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nCA:\t");
					a[3]=getche();
					c[3]=3;
					printf("\nADC:\t");
					a[4]=getche();
					c[4]=3;
					printf("\nEVS:\t");
					a[5]=getche();
					c[5]=3;
					printf("\nPDS2 LAB:\t");
					a[6]=getche();
					c[6]=2;
					printf("\nDBMS LAB:\t");
					a[7]=getche();
					c[7]=2;
					a[8]=0;
					c[8]=0;
				case '2':
					printf("Your ECE Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nTPDE:\t");
					a[0]=getche();
					c[0]=4;
					printf("\nEEI:\t");
					a[1]=getche();
					c[1]=4;
					printf("\nOOPDS:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nDE:\t");
					a[3]=getche();
					c[3]=3;
					printf("\nSS:\t");
					a[4]=getche();
					c[4]=3;
					printf("\ECI:\t");
					a[5]=getche();
					c[5]=4;
					printf("\nADC LAB:\t");
					a[6]=getche();
					c[6]=2;
					printf("\nOOPDS  LAB:\t");
					a[7]=getche();
					c[7]=2;
					a[8]=0;
					c[8]=0;
					break;
				case '3':
					printf("Your EEE Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nTPDE:\t");
					a[0]=getche();
					c[0]=4;
					printf("\nDLL:\t");
					a[1]=getche();
					c[1]=4;
					printf("\nEMT:\t");
					a[2]=getche();
					c[2]=4;
					printf("\nEVS:\t");
					a[3]=getche();
					c[3]=3;
					printf("\nEDC:\t");
					a[4]=getche();
					c[4]=4;
					printf("\nLICA:\t");
					a[5]=getche();
					c[5]=3;
					printf("\nELAB LAB:\t");
					a[6]=getche();
					c[6]=2;
					printf("\nLDIC LAB:\t");
					a[7]=getche();
					c[7]=2;
					a[8]=0;
					c[8]=0;
				case '4':
					printf("Your CIVIL Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nTPDE:\t");
					a[0]=getche();
					c[0]=4;
					printf("\nEVS:\t");
					a[1]=getche();
					c[1]=3;
					printf("\nEGE:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nMOS:\t");
					a[3]=getche();
					c[3]=4;
					printf("\nMOF:\t");
					a[4]=getche();
					c[4]=3;
					printf("\nSURI:\t");
					a[5]=getche();
					c[5]=3;
					printf("\nSUR  LAB:\t");
					a[6]=getche();
					c[6]=2;
					printf("\nCABD LAB:\t");
					a[7]=getche();
					c[7]=2;
					a[8]=0;
					c[8]=0;
					break;
				case '5':
					printf("Your MECHANICAL Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nTPDE:\t");
					a[0]=getche();
					c[0]=4;
					printf("\nSOM:\t");
					a[1]=getche();
					c[1]=4;
					printf("\nET:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nFMM:\t");
					a[3]=getche();
					c[3]=3;
					printf("\nMTI:\t");
					a[4]=getche();
					c[4]=3;
					printf("\nEDC:\t");
					a[5]=getche();
					c[5]=3;
					printf("\nMT LAB:\t");
					a[6]=getche();
					c[6]=2;
					printf("\nFMMM LAB:\t");
					a[7]=getche();
					c[7]=2;
					printf("\nEE LAB:\t");
					a[8]=getche();
					c[8]=2;
					break;

			}
			break;
		case 4:
			printf("\nENTER YOUR DEPARTMENT");
			printf("\n1.CSE\n2.ECE\n3.EEE\n4.CIVIL\n5.MECHANICAL\n");
			printf("Enter your choice:\t");
			choice=getche();
			clrscr();
			switch(choice)
			{
				case '1':
					printf("Your CSE Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\n:PQT\t");
					a[0]=getche();
					c[0]=4;
					printf("\nCN:\t");
					a[1]=getche();
					c[1]=3;
					printf("\nOS:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nDAA:\t");
					a[3]=getche();
					c[3]=3;
					printf("\nMPC:\t");
					a[4]=getche();
					c[4]=3;
					printf("\nSE:\t");
					a[5]=getche();
					c[5]=3;
					printf("\nNET LAB:\t");
					a[6]=getche();
					c[6]=2;
					printf("\nMPC LAB:\t");
					a[7]=getche();
					c[7]=2;
					printf("\nOS LAB:\t");
					a[8]=getche();
					c[8]=2;
					break;
				case '2':
					printf("Your ECE Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nPRP:\t");
					a[0]=getche();
					c[0]=4;
					printf("\nEC2:\t");
					a[1]=getche();
					c[1]=3;
					printf("\nCT:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nEMF:\t");
					a[3]=getche();
					c[3]=4;
					printf("\nLIC:\t");
					a[4]=getche();
					c[4]=3;
					printf("\nCSE:\t");
					a[5]=getche();
					c[5]=3;
					printf("\nCSI LAB:\t");
					a[6]=getche();
					c[6]=2;
					printf("\nLIC LAB:\t");
					a[7]=getche();
					c[7]=2;
					printf("\nEECS LAB:\t");
					a[8]=getche();
					c[8]=2;
					break;
				case '3':
					printf("Your EEE Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nNM:\t");
					a[0]=getche();
					c[0]=4;
					printf("\nEM1:\t");
					a[1]=getche();
					c[1]=4;
					printf("\nOOP:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nTD:\t");
					a[3]=getche();
					c[3]=3;
					printf("\nDTS:\t");
					a[4]=getche();
					c[4]=3;
					printf("\nMI:\t");
					a[5]=getche();
					c[5]=3;
					printf("\nOOP LAB:\t");
					a[6]=getche();
					c[6]=2;
					printf("\nEM1 LAB:\t");
					a[7]=getche();
					c[7]=2;
					a[8]=0;
					c[8]=0;
					break;
				case '4':
					printf("Your CIVIL Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nNM:\t");
					a[0]=getche();
					c[0]=4;
					printf("\nCM:\t");
					a[1]=getche();
					c[1]=3;
					printf("\nSOM:\t");
					a[2]=getche();
					c[2]=4;
					printf("\nAPE:\t");
					a[3]=getche();
					c[3]=4;
					printf("\nSUR2:\t");
					a[4]=getche();
					c[4]=3;
					printf("\nSM:\t");
					a[5]=getche();
					c[5]=3;
					printf("\nSM LAB:\t");
					a[6]=getche();
					c[6]=2;
					printf("\nHE LAB:\t");
					a[7]=getche();
					c[7]=2;
					printf("\nSUR LAB:\t");
					a[8]=getche();
					c[8]=2;
					break;
				case '5':
					printf("Your MECHANICAL Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nSNM:\t");
					a[0]=getche();
					c[0]=4;
					printf("\nKOM:\t");
					a[1]=getche();
					c[1]=3;
					printf("\nMT2:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nEMM:\t");
					a[3]=getche();
					c[3]=3;
					printf("\nEVS:\t");
					a[4]=getche();
					c[4]=3;
					printf("\nTE:\t");
					a[5]=getche();
					c[5]=3;
					printf("\nMT LAB:\t");
					a[6]=getche();
					c[6]=2;
					printf("\nTE LAB:\t");
					a[7]=getche();
					c[7]=2;
					printf("\nSM LAB:\t");
					a[8]=getche();
					c[8]=2;
					break;

			}
			break;
		case 5:
			printf("\nENTER YOUR DEPARTMENT");
			printf("\n1.CSE\n2.ECE\n3.EEE\n4.CIVIL\n5.MECHANICAL\n");
			printf("Enter your choice:\t");
			choice=getche();
			clrscr();
			switch(choice)
			{
				case '1':
					printf("Your CSE Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nDM:\t");
					a[0]=getche();
					c[0]=4;
					printf("\nIP:\t");
					a[1]=getche();
					c[1]=4;
					printf("\nOOAD:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nTOC:\t");
					a[3]=getche();
					c[3]=3;
					printf("\nCG:\t");
					a[4]=getche();
					c[4]=3;
					printf("\nCT LAB:\t");
					a[5]=getche();
					c[5]=2;
					printf("\nIP LAB:\t");
					a[6]=getche();
					c[6]=2;
					printf("\nCG LAB:\t");
					a[7]=getche();
					c[7]=2;
					a[8]=0;
					c[8]=0;
					break;
				case '2':
					printf("Your ECE Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nDC:\t");
					a[0]=getche();
					c[0]=3;
					printf("\nPDSP:\t");
					a[1]=getche();
					c[1]=4;
					printf("\nTLWG:\t");
					a[2]=getche();
					c[2]=4;
					printf("\nEVS:\t");
					a[3]=getche();
					c[3]=3;
					printf("\nMPMC:\t");
					a[4]=getche();
					c[4]=3;
					printf("\nDSP LAB:\t");
					a[5]=getche();
					c[5]=2;
					printf("\nCS LAB:\t");
					a[6]=getche();
					c[6]=2;
					printf("\nMPC LAB:\t");
					a[7]=getche();
					c[7]=2;
					a[8]=0;
					c[8]=0;
					break;
				case '3':
					printf("Your EEE Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nPSA:\t");
					a[0]=getche();
					c[0]=3;
					printf("\nMPMC:\t");
					a[1]=getche();
					c[1]=3;
					printf("\nPPE:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nPE:\t");
					a[3]=getche();
					c[3]=3;
					printf("\nEM2:\t");
					a[4]=getche();
					c[4]=4;
					printf("\nCS:\t");
					a[5]=getche();
					c[5]=4;
					printf("\nCI LAB:\t");
					a[6]=getche();
					c[6]=2;
					printf("\nCOM LAB:\t");
					a[7]=getche();
					c[7]=2;
					printf("\nEM2 LAB:\t");
					a[8]=getche();
					c[8]=2;
					break;
				case '4':
					printf("Your CIVIL Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nSA1:\t");
					a[0]=getche();
					c[0]=4;
					printf("\nFE:\t");
					a[1]=getche();
					c[1]=3;
					printf("\nEE1:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nHE:\t");
					a[3]=getche();
					c[3]=3;
					printf("\nDRCE:\t");
					a[4]=getche();
					c[4]=3;
					printf("\nCTEP:\t");
					a[5]=getche();
					c[5]=3;
					printf("\nCU LAB:\t");
					a[6]=getche();
					c[6]=2;
					printf("\nSM LAB:\t");
					a[7]=getche();
					c[7]=2;
					printf("\nSUR CAMP:\t");
					a[8]=getche();
					c[8]=1;
					break;
				case '5':
					printf("Your MECHANICAL Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nCAD:\t");
					a[0]=getche();
					c[0]=3;
					printf("\nHMT:\t");
					a[1]=getche();
					c[1]=3;
					printf("\nDME:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nMM:\t");
					a[3]=getche();
					c[3]=3;
					printf("\nDM:\t");
					a[4]=getche();
					c[4]=3;
					printf("\nPEE:\t");
					a[5]=getche();
					c[5]=3;
					printf("\nDY LAB:\t");
					a[6]=getche();
					c[6]=2;
					printf("\nTE LAB:\t");
					a[7]=getche();
					c[7]=2;
					printf("\nMM LAB:\t");
					a[8]=getche();
					c[8]=2;
					break;
			}
			break;


		case 6:
			printf("\nENTER YOUR DEPARTMENT");
			printf("\n1.CSE\n2.ECE\n3.EEE\n4.CIVIL\n5.MECHANICAL\n");
			printf("Enter your choice:\t");
			choice=getche();
			clrscr();
			switch(choice)
			{
				case '1':
					printf("Your CSE Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\n:DS\t");
					a[0]=getche();
					c[0]=3;
					printf("\nMC:\t");
					a[1]=getche();
					c[1]=3;
					printf("\nCP:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nDSP:\t");
					a[3]=getche();
					c[3]=4;
					printf("\nAI:\t");
					a[4]=getche();
					c[4]=3;
					printf("\nELECTIVE 1:\t");
					a[5]=getche();
					c[5]=3;
					printf("\nMAD LAB:\t");
					a[6]=getche();
					c[6]=2;
					printf("\nCMP LAB:\t");
					a[7]=getche();
					c[7]=2;
					printf("\nCOM LAB:\t");
					a[8]=getche();
					c[8]=2;
					break;
				case '2':
					printf("Your ECE Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nPOM:\t");
					a[0]=getche();
					c[0]=3;
					printf("\nCOA:\t");
					a[1]=getche();
					c[1]=3;
					printf("\nCN:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nVLSI:\t");
					a[3]=getche();
					c[3]=3;
					printf("\nAWP:\t");
					a[4]=getche();
					c[4]=3;
					printf("\nELECTIVE 1:\t");
					a[5]=getche();
					c[5]=3;
					printf("\nCN LAB:\t");
					a[6]=getche();
					c[6]=2;
					printf("\nVLSI LAB:\t");
					a[7]=getche();
					c[7]=2;
					printf("\nCOM LAB:\t");
					a[8]=getche();
					c[8]=2;
					break;
				case '3':
					printf("Your EEE Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nCE:\t");
					a[0]=getche();
					c[0]=3;
					printf("\nSSD:\t");
					a[1]=getche();
					c[1]=3;
					printf("\nES:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nPSOC:\t");
					a[3]=getche();
					c[3]=3;
					printf("\nDEM:\t");
					a[4]=getche();
					c[4]=4;
					printf("\nELECTIVE 1:\t");
					a[5]=getche();
					c[5]=3;
					printf("\nPED LAB:\t");
					a[6]=getche();
					c[6]=2;
					printf("\nMPC LAB:\t");
					a[7]=getche();
					c[7]=2;
					printf("\nPST:\t");
					a[8]=getche();
					c[8]=1;
					break;
				case '4':
					printf("Your CIVIL Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nDRCBMS:\t");
					a[0]=getche();
					c[0]=3;
					printf("\nSA2:\t");
					a[1]=getche();
					c[1]=4;
					printf("\nDSS:\t");
					a[2]=getche();
					c[2]=4;
					printf("\nRAHE:\t");
					a[3]=getche();
					c[3]=3;
					printf("\nEE2:\t");
					a[4]=getche();
					c[4]=3;
					printf("\nELECTIVE:\t");
					a[5]=getche();
					c[5]=3;
					printf("\nEE LAB:\t");
					a[6]=getche();
					c[6]=2;
					printf("\nCHE LAB:\t");
					a[7]=getche();
					c[7]=2;
					a[8]=0;
					c[8]=0;
					break;
				case '5':
					printf("Your MECHANICAL Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nDTS:\t");
					a[0]=getche();
					c[0]=3;
					printf("\nPOM:\t");
					a[1]=getche();
					c[1]=3;
					printf("\nAE:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nFEA:\t");
					a[3]=getche();
					c[3]=3;
					printf("\nGOJP:\t");
					a[4]=getche();
					c[4]=3;
					printf("\nELECTIVE 1:\t");
					a[5]=getche();
					c[5]=3;
					printf("\nCADM LAB:\t");
					a[6]=getche();
					c[6]=2;
					printf("\nDFP LAB:\t");
					a[7]=getche();
					c[7]=2;
					printf("\nCOM LAB:\t");
					a[8]=getche();
					c[8]=2;
					break;

			}
			break;
		case 7:
			printf("\nENTER YOUR DEPARTMENT");
			printf("\n1.CSE\n2.ECE\n3.EEE\n4.CIVIL\n5.MECHANICAL\n");
			printf("Enter your choice:\t");
			choice=getche();
			clrscr();
			switch(choice)
			{
				case '1':
					printf("Your CSE Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\n:CNS\t");
					a[0]=getche();
					c[0]=3;
					printf("\nGTA:\t");
					a[1]=getche();
					c[1]=3;
					printf("\nGCC:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nRSMT:\t");
					a[3]=getche();
					c[3]=3;
					printf("\nELECTIVE 2:\t");
					a[4]=getche();
					c[4]=3;
					printf("\nELECTIVE 3:\t");
					a[5]=getche();
					c[5]=3;
					printf("\nSEC LAB:\t");
					a[6]=getche();
					c[6]=2;
					printf("\nGCC LAB:\t");
					a[7]=getche();
					c[7]=2;
					a[8]=0;
					c[8]=0;
					break;
				case '2':
					printf("Your ECE Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nRFME:\t");
					a[0]=getche();
					c[0]=3;
					printf("\nOCN:\t");
					a[1]=getche();
					c[1]=3;
					printf("\nERTS:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nELECTIVE 2:\t");
					a[3]=getche();
					c[3]=3;
					printf("\nELECTIVE 3:\t");
					a[4]=getche();
					c[4]=3;
					printf("\nELECTIVE 4:\t");
					a[5]=getche();
					c[5]=3;
					printf("\nEMP LAB:\t");
					a[6]=getche();
					c[6]=2;
					printf("\nOM LAB:\t");
					a[7]=getche();
					c[7]=2;
					a[8]=0;
					c[8]=0;
					break;
				case '3':
					printf("Your EEE Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nHVE:\t");
					a[0]=getche();
					c[0]=3;
					printf("\nPAS:\t");
					a[1]=getche();
					c[1]=3;
					printf("\nSEM:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nPOM:\t");
					a[3]=getche();
					c[3]=3;
					printf("\nELECTIVE 2:\t");
					a[4]=getche();
					c[4]=3;
					printf("\nELECTIVE 3:\t");
					a[5]=getche();
					c[5]=3;
					printf("\nPSS LAB:\t");
					a[6]=getche();
					c[6]=2;
					printf("\nCMPRE:\t");
					a[7]=getche();
					c[7]=1;
					a[8]=0;
					c[8]=0;
					break;
				case '4':
					printf("Your CIVIL Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nSDEE:\t");
					a[0]=getche();
					c[0]=3;
					printf("\nPCS:\t");
					a[1]=getche();
					c[1]=3;
					printf("\nWRIE:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nELECTIVE:\t");
					a[3]=getche();
					c[3]=3;
					printf("\nELECTIVE:\t");
					a[4]=getche();
					c[4]=3;
					printf("\nCAD LAB:\t");
					a[5]=getche();
					c[5]=2;
					printf("\nDP:\t");
					a[6]=getche();
					c[6]=2;
					printf("\nEQS:\t");
					a[7]=getche();
					c[7]=2;
					a[8]=0;
					c[8]=0;
					break;
				case '5':
					printf("Your MECHANICAL Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nPPE:\t");
					a[0]=getche();
					c[0]=3;
					printf("\nMTS:\t");
					a[1]=getche();
					c[1]=3;
					printf("\nCIMS:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nTQM:\t");
					a[3]=getche();
					c[3]=3;
					printf("\nELECTIVE 2:\t");
					a[4]=getche();
					c[4]=3;
					printf("\nELECTIVE 3:\t");
					a[5]=getche();
					c[5]=3;
					printf("\nSA LAB:\t");
					a[6]=getche();
					c[6]=2;
					printf("\nMTS LAB:\t");
					a[7]=getche();
					c[7]=2;
					printf("\nCMPRE:\t");
					a[8]=getche();
					c[8]=1;
					break;
			}
			break;
		case 8:
			printf("\nENTER YOUR DEPARTMENT");
			printf("\n1.CSE\n2.ECE\n3.EEE\n4.CIVIL\n5.MECHANICAL\n");
			printf("Enter your choice:\t");
			choice=getche();
			clrscr();
			switch(choice)
			{
				case '1':
					printf("Your CSE Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\n:MCAP\t");
					a[0]=getche();
					c[0]=3;
					printf("\nELECTIVE 4:\t");
					a[1]=getche();
					c[1]=3;
					printf("\nELECTIVE 5:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nPROW:\t");
					a[3]=getche();
					c[3]=6;
					a[4]=0;
					c[4]=0;
					a[5]=0;
					c[5]=0;
					a[6]=0;
					c[6]=0;
					a[7]=0;
					c[7]=0;
					a[8]=0;
					c[8]=0;	
					break;
				case '2':
					printf("Your ECE Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nWC:\t");
					a[0]=getche();
					c[0]=3;
					printf("\nWN:\t");
					a[1]=getche();
					c[1]=3;
					printf("\nELECTIVE 5:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nELECTIVE 6:\t");
					a[3]=getche();
					c[3]=3;
					printf("\nPROW:\t");
					a[4]=getche();
					c[4]=6;
					a[5]=0;
					c[5]=0;
					a[6]=0;
					c[6]=0;
					a[7]=0;
					c[7]=0;
					a[8]=0;
					c[8]=0;	
					break;
				case '3':
					printf("Your EEE Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nEEGUC:\t");
					a[0]=getche();
					c[0]=3;
					printf("\nELECTIVE 4:\t");
					a[1]=getche();
					c[1]=3;
					printf("\nELECTIVE 5:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nPROW:\t");
					a[3]=getche();
					c[3]=6;
					a[4]=0;
					c[4]=0;
					a[5]=0;
					c[5]=0;
					a[6]=0;
					c[6]=0;
					a[7]=0;
					c[7]=0;
					a[8]=0;
					c[8]=0;	
					break;
				case '4':
					printf("Your CIVIL Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nPOM:\t");
					a[0]=getche();
					c[0]=3;
					printf("\nELECTIVE 4:\t");
					a[1]=getche();
					c[1]=3;
					printf("\nELECTIVE 5:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nPROW:\t");
					a[3]=getche();
					c[3]=6;
					a[4]=0;
					c[4]=0;
					a[5]=0;
					c[5]=0;
					a[6]=0;
					c[6]=0;
					a[7]=0;
					c[7]=0;
					a[8]=0;
					c[8]=0;
					break;
				case '5':
					printf("Your MECHANICAL Department");
					printf("ENTER THE CORRECT GRADE FOR APPROPRIATE SUBJECT");
					printf("\nEE:\t");
					a[0]=getche();
					c[0]=3;
					printf("\nELECTIVE 4:\t");
					a[1]=getche();
					c[1]=3;
					printf("\nELECTIVE 5:\t");
					a[2]=getche();
					c[2]=3;
					printf("\nPROW:\t");
					a[3]=getche();
					c[3]=6;
					a[4]=0;
					c[4]=0;
					a[5]=0;
					c[5]=0;
					a[6]=0;
					c[6]=0;
					a[7]=0;
					c[7]=0;
					a[8]=0;
					c[8]=0;
					break;

			}
			break;
	}
gpa_calci(a,c);
}
int main()
{
clrscr();
gpa_calculation();
getch();
return 0;
}
