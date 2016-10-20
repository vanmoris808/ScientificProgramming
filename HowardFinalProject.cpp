/*
 * C++ Code for Temp
 *
 *
 *
 */

#include <iostream>
using namespace std;

int main()
{
	//Parameters of the 2 arrays
	int date = 29;

	//Array Creation & Temperature
	
	
	//High Temps Of Day Feb1976 Feb2016 Hardcoded
	int hightemps76[] = { 46, 46, 28, 41, 32, 24, 26, 35, 35, 39, 50, 41, 52, 48, 46, 61, 64, 46, 55, 48, 48, 52, 34, 51, 57, 51, 66, 64, 55 };
	int hightemps16[] = { 60, 52, 56, 55, 43, 37, 45, 39, 37, 40, 32, 26, 25, 17, 44, 54, 41, 37, 41, 59, 58, 50, 43, 58, 59, 40, 40, 58, 62 };
	
	//Mean Temps Of The Day
	int avgtemps76[] = { 40, 28, 22, 32, 28, 22, 22, 30, 30, 32, 43, 37, 44, 40, 35, 52, 52, 42, 48, 44, 39, 44, 30, 39, 48, 46, 54, 52, 42 };
	int avgtemps16[] = { 50, 44, 48, 49, 38, 30, 37, 34, 32, 36, 26, 22, 16, 9, 29, 47, 39, 32, 33, 50, 49, 43, 43, 48, 49, 35, 34, 47, 52 };
	
	//Average Mean Temps Of The Day
	int histtemps[] = { 33, 33, 33, 33, 34, 34, 34, 34, 34, 34, 34, 34, 35, 35, 35, 35, 35, 35, 36, 36, 36, 36, 36, 36, 37, 37, 37, 37, 38 };
	
	//These Are The Low Temps Of The Day For Feburary of 1976 & 2016 Hardcoded into an Array
	int lowtemps76[] = { 35, 10, 15, 24, 23, 21, 17, 24, 26, 24, 35, 33, 37, 32, 27, 43, 39, 37, 42, 39, 30, 36, 26, 27, 39, 41, 43, 37, 30 };
	int lowtemps16[] = { 40, 36, 39, 43, 32, 23, 29, 28, 26, 32, 20, 17, 7, 1, 13, 39, 36, 27, 24, 40, 39, 35, 36, 38, 38, 29, 28, 35, 42 };


	//This Array Will Hold the Average Temps
	int favgtemps76[29];
	int favgtemps16[29];
	int days[29];
	
	
	//Mean Temperatures For Each Day
	
	for (int i = 0; i < d; i++)
	{
		days[i] = i + 1;
		favgtemps76[i] = (hightemps76[i] + lowtemps76[i]) / 2;
		favgtemps16[i] = (hightemps16[i] + lowtemps16[i]) / 2;
	}

	//Total Means For Each Year
    //Initialization
	int hmean76 = 0, lmean76 = 0, mmean76 = 0, fmmean76 = 0;
	int hmean16 = 0, lmean16 = 0, mmean16 = 0, fmmean16 = 0;

	//Calculate All of the associated means for Each Year
	for (int i = 0; i < 29; i++)
	{
		hmean76 = hmean76 + hightemps76[i];
		hmean16 = hmean16 + hightemps16[i];
		lmean76 = lmean76 + lowtemps76[i];
		lmean16 = lmean16 + lowtemps16[i];
		mmean76 = mmean76 + avgtemps76[i];
		mmean16 = mmean16 + avgtemps16[i];
		fmmean76 = fmmean76 + favgtemps76[i];
    	fmmean16 = fmmean16 + favgtemps16[i];

	}

	hmean76 = hmean76 / date;
	hmean16 = hmean16 / date;
	lmean76 = lmean76 / date;
	lmean16 = lmean16 / date;
	mmean76 = mmean76 / date;
	mmean16 = mmean16 / date;
	fmmean76 = fmmean76 / date;
	fmmean16 = fmmean16 / date;
	

	//The Differences of The Means In Each Year
	int highdif, meddif, lowdif, fmeddif;
	
	//Assign the values of the differences of the mean temperatures for Feburary of 2016 and 1976 to the variables created above
	highdif = hmean76 - hmean16;
	meddif = mmean76 - mmean16;
	lowdif = lmean76 - lmean16;
	fmeddif = fmmean76 - fmmean16;
	
	//The Standard Deviation
	int hsdev16[29], msdev16[29], lsdev16[29], fsdev16[29], hsdev76[29], msdev76[29], lsdev76[29], fsdev76[29];

	for (int j = 0; j < 29; j++)
	{
		if (hightemps16[j] - hmean16 > -1)
		{
			hsdev16[j] = hightemps16[j] - hmean16;
		}
		else
		{
			hsdev16[j] = (hightemps16[j] - hmean16) * -1;
		}

		if (avgtemps16[j] - mmean16 > -1)
		{
			msdev16[j] = avgtemps16[j] - mmean16;
		}
		else
		{
			msdev16[j] = (avgtemps16[j] - mmean16) * -1;
		}
		
        if (lowtemps16[j] - lmean16 > -1)
		{
			lsdev16[j] = lowtemps16[j] - lmean16;
		}
		else
		{
			lsdev16[j] = (lowtemps16[j] - lmean16) * -1;
		}

        if (hightemps76[j] - hmean76 > -1)
		{
			hsdev76[j] = hightemps76[j] - hmean76;
		}
		else
		{
			hsdev76[j] = (hightemps76[j] - hmean76) * -1;
		}

        if (avgtemps76[j] - mmean76 > -1)
		{
			msdev76[j] = avgtemps76[j] - mmean76;
		}
		else
		{
			msdev76[j] = (avgtemps76[j] - mmean76) * -1;
		}

        if (lowtemps76[j] - lmean76 > -1)
		{
			lsdev76[j] = lowtemps76[j] - lmean76;
		}
		else
		{
			lsdev76[j] = (lowtemps76[j] - lmean76) * -1;
		}

        if (favgtemps76[j] - fmmean76 > -1)
		{
			fsdev76[j] = favgtemps76[j] - fmmean76;
		}
		else
		{
			fsdev76[j] = (favgtemps76[j] - fmmean76) * -1;
		}

        if (favgtemps16[j] - fmmean16 > -1)
		{
			fsdev16[j] = favgtemps16[j] - fmmean16;
		}
		else
		{
			fsdev16[j] = (favgtemps16[j] - fmmean16) * -1;
		}

	} 

	//The Standard Deviations
	double highstdev16 = 0, falstdev16 = 0, medstdev16 = 0, lowstdev16 = 0, highstdev76 = 0, falstdev76 = 0, medstdev76 = 0, lowstdev76 = 0;

	for (int k = 0; k < 29; k++)
	{
		highstdev16 = highstdev16 + hsdev16[k];
		highstdev76 = highstdev76 + hsdev76[k];
		medstdev16 = medstdev16 + msdev16[k];
		medstdev76 = medstdev76 + msdev76[k];
		lowstdev16 = lowstdev16 + lsdev16[k];
		lowstdev76 = lowstdev76 + lsdev76[k];
		falstdev16 = falstdev16 + fsdev16[k];
		falstdev76 = falstdev76 + fsdev76[k];
	}
	
	highstdev16 = highstdev16 / d;
	highstdev76 = highstdev76 / d;
	medstdev16 = medstdev16 / d;
	medstdev76 = medstdev76 / d;
	lowstdev16 = lowstdev16 / d;
	lowstdev76 = lowstdev76 / d;
	falstdev16 = falstdev16 / d;
	falstdev76 = falstdev76 / d;
		int pageselector = 1;

	do
	{
		system("CLS");
		cout << "1 = Homepage" << endl << "0 = End Program" << endl << endl;
		if(pageselector == 1)
		{
			
			cout << "0 = Good By" << endl;
			cout << "1 = Home Page" << endl;
			cout << "2 = All Temperatures" << endl;
			cout << "3 = Means Of The Month Calculated From All Temperatures In Feburary Of The Applicable Year" << endl;
			
		}
        
		else if (pageselector == 2)
		{
			cout << "Temperatures are in 1976TEMP|2016TEMP Format" << endl;
			cout << "TOD = Temp of Day|Highs - Highest TOD|Lows - Lowest TOD|Averages - Mean TOD|" << endl << "favgtemps - Mean TOD Calculated From High/Lows Only|Hist - Historical Temperature of a Given Day (The Average Average)" <<endl << endl;
			for (int i = 0; de < 29; i++)
			{
				cout << "Feburary " << days[i] << "   ";
				cout << "(Highs): " << hightemps76[i] << "|" << hightemps16[i] << "     ";
				cout << "(Averages): " << avgtemps76[i] << "|" << avgtemps16[i] << "     ";
				cout << "(Lows): " << lowtemps76[i] << "|" << lowtemps16[i] << "     ";
				cout << "(favgtemps): " << favgtemps76[de] << "|" << favgtemps16[de] << "     ";
				cout << "(Histo): " << histtemps[de] << endl;
			}


		}

        else if (pageselector == 3)
		{

			cout << "These Are The Means Of The Year, Calculated From All The Days In The Applicable Year's Range (Month)" << endl;
			cout << "The Means are In 1976TEMP|2016TEMP format - The Psuedo-Average Was Calculared from Highs and Lows Only" << endl;
			cout << "The Deltas (differences) are calculated in 1976-2016 format (the 1976 is the bsse temperature)" << endl;
			cout << "The Standard Deviations Are are in 'Change from 1976' format (X > 0 = 1976 Is Hotter, X < 0 = 1976 Is Cooler)" << endl << endl;
			cout << "(Highs): " << hmean76 << "|" << hmean16 << " - " << "Delta: " << highdif << "     " << "Standard Deviation: " << highstdev76 << "|" << highstdev16 << endl <<  endl;
			cout << "(Averages): " << mmean76 << "|" << mmean16 << " - " << "Delta: " << meddif << "     " << "Standard Deviation: " << medstdev76 << "|" << medstdev16 << endl << endl;  
			cout << "(Pesudo-Averages): " << fmmean76 << "|" << fmmean16 << " - " << "Delta: " << fmeddif << "     " << "Standard Deviation: " << falstdev76 << "|" << falstdev16 << endl << endl;
			cout << "(Lows): " << lmean76 << "|" << lmean16 << " - " << "Delta: " << lowdif << "     " << "Standard Deviation: " << lowstdev76 << "|" << lowstdev16 << endl << endl;

		}

		else
		{
			cout << "Invalid, choose between Numbers 0 - 3";
		}

		cin >> pageselector;

	} while (pageselector != 0);
	
	system("CLS");

	for (int dw = 0; d < 5000; d++) { cout << "Thank You "; }

}