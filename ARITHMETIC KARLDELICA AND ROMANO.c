#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
#include <iomanip>
using namespace std;

void u_menu()
{
	cout << endl;
	cout << endl;
	cout << "\t\t\t\t\t\t\t\t\tLength \n";
	cout << endl;
	cout << "\t\t\t\t\t\t\t\t[a] Meters to Feet\n";
	cout << "\t\t\t\t\t\t\t\t[b] Inches to Cm\n";
	cout << "\t\t\t\t\t\t\t\t[c] Mm to Inches\n";
	cout << "\t\t\t\t\t\t\t\t[d] Inches to Feet\n";
	cout << "\t\t\t\t\t\t\t\t[e] Cm to Inches\n";
	cout << "\t\t\t\t\t\t\t\t[f] Back\n";
	cout << "\t\t\t\t\t\t\t\t[g] Exit\n";
	cout << "\t\t\t\t\t\t\t\tPlease Enter a letter:";
}

void u2_menu()
{
	cout << endl;
	cout << endl;
	cout << "\t\t\t\t\t\t\t\t\tVolume \n";
	cout << endl;
	cout << "\t\t\t\t\t\t\t\t[a] Liters to Gallon\n";
	cout << "\t\t\t\t\t\t\t\t[b] Gallon to Liters\n";
	cout << "\t\t\t\t\t\t\t\t[c] mL to Cups\n";
	cout << "\t\t\t\t\t\t\t\t[d] Cups to mL\n";
	cout << "\t\t\t\t\t\t\t\t[e] Tablespoons to Cups\n";
	cout << "\t\t\t\t\t\t\t\t[f] Back\n";
	cout << "\t\t\t\t\t\t\t\t[g] Exit\n";
	cout << "\t\t\t\t\t\t\t\tPlease Enter a letter:";
}

void u3_menu()
{
	cout << endl;
	cout << endl;
	cout << "\t\t\t\t\t\t\t\t\tWeight and Mass \n";
	cout << endl;
	cout << "\t\t\t\t\t\t\t\t[a] Kilograms to Pounds\n";
	cout << "\t\t\t\t\t\t\t\t[b] Pounds to Kilograms\n";
	cout << "\t\t\t\t\t\t\t\t[c] Grams to Ounce\n";
	cout << "\t\t\t\t\t\t\t\t[d] Ounce to Grams\n";
	cout << "\t\t\t\t\t\t\t\t[e] Pounds to Ounce\n";
	cout << "\t\t\t\t\t\t\t\t[f] Ounce to Pounds\n";
	cout << "\t\t\t\t\t\t\t\t[g] Grams to Pounds\n";
	cout << "\t\t\t\t\t\t\t\t[h] Pounds to Grams\n";
	cout << "\t\t\t\t\t\t\t\t[i] Grams to Kilograms\n";
	cout << "\t\t\t\t\t\t\t\t[j] Kilograms to Grams\n";
	cout << "\t\t\t\t\t\t\t\t[k] Back\n";
	cout << "\t\t\t\t\t\t\t\t[l] Exit\n";
	cout << "\t\t\t\t\t\t\t\tPlease Enter a letter:";
}

void umenu ()
{
	cout << endl;
	cout << endl;
	cout << "\t\t\t\t\t\t\t\t\tUNITS OF MEASUREMENT\n";
	cout << endl;
	cout << "\t\t\t\t\t\t\t\t[A]Length\n";
	cout << "\t\t\t\t\t\t\t\t[B]Volume\n";
	cout << "\t\t\t\t\t\t\t\t[C]Weight and Mass\n";
	cout << "\t\t\t\t\t\t\t\t[D]Exit\n";
	cout << "\t\t\t\t\t\t\t\tPlease Enter a Letter:";
} 
//for Length
float m_f(float m)
{ 
	float m_f;
	m_f = m*3.2808;
	return (m_f);	
}

float i_cm(float in)
{
	float i_cm;
	i_cm = in/0.30370;
	return (i_cm);
}

float mm_i(float mm)
{
	float mm_i;
	mm_i = mm*0.039370;
	return (mm_i);
}

float i_f(float in)
{
	float i_f;
	i_f = in *0.083333;
	return (i_f);
}

float cm_i (float cm)
{
	float cm_i;
	cm_i = cm* 0.39370;
	return (cm_i);
}
//for Volume
float li_gal(float l)
{
	float li_gal;
	li_gal = l*0.2641720524;
	return (li_gal);
}

float gal_li (float gl)
{
	float gal_li;
	gal_li = gl*3.785411784;
	return (gal_li);
}

float ml_c (float mL)
{
	float ml_c;
	ml_c = mL*0.0042267528;
	return (ml_c);
}

float c_ml (float cp)
{
	float c_ml;
	c_ml = cp*236.5882365;
	return (c_ml);
}

float tb_c (float ts)
{
	float tb_c;
	tb_c = ts*0.0625;
	return (tb_c);	
} 
//for Weight and Mass
float kg_lbs (float lb)
{
	float kg_lbs;
	kg_lbs = lb*2.2046226218;
	return (kg_lbs);	
}

float lbs_kg (float kG)
{
	float lbs_kg;
	lbs_kg = kG*0.45359237;
	return (lbs_kg);
} 

float g_oz (float o)
{
	float g_oz;
	g_oz = o*0.0352739619;
	return (g_oz);
}

float oz_g (float G)
{
	float oz_g;
	oz_g = G*28.349523125;
	return (oz_g);
}

float lbs_oz (float ls)
{
	float lbs_oz;
	lbs_oz = ls*16;
	return (lbs_oz);
}

float oz_lbs (float ln)
{
	float oz_lbs;
	oz_lbs = ln*0.0625;
	return (oz_lbs);
}

float g_lbs (float k)
{
	float g_lbs;
	g_lbs = k*0.0022046226;
	return (g_lbs);
}

float lbs_g (float L)
{
	float lbs_g;
	lbs_g = L*453.59237;
	return (lbs_g);
}

float g_kg (float Kg)
{
	float g_kg;
	g_kg = Kg*0.001;
	return (g_kg);
}

float kg_g (float gs)
{
	float kg_g;
	kg_g = gs*1000;
	return (kg_g);
}

int main ()
{
	string round;
	char mnu,m;
	float result,r;
	char y,n,con;
	
void intro();
	START:;
		system ("CLS");
		umenu();
		cin >> mnu;
		switch (mnu)
		{
			case 'A':
				LSUB:
					system("CLS");
					u_menu();
					cin >> m;
					switch (m)
					{
						case 'a':
							MtoF:
								system ("CLS");
								cout << "\t\t\t\t\t\t\t\t\tMeters to Feet\n";
								cout << endl;
								cout << "\t\t\t\t\t\t\t\tEnter a Value:";
								cin >> r;
								result = m_f (r);
								cout << "\t\t\t\t\t\t\t\t"<< r<< "M"<<"----->"<< result<< "F" <<endl;
								YES:
									cout << "\t\t\t\t\t\t\t\tDo you want to Continue?[Y/N]:";
									cin >> con;
									switch (con)
									{
										case 'Y':
										case 'y':
											goto MtoF;
											break;
										case 'N':
										case 'n':
											goto LSUB;
											break;
										default:
											cout << "Error!!!\n";
											goto YES;
									}
						case 'b':
							ItoCm:
								system("CLS");
								cout << "\t\t\t\t\t\t\t\t\tInches to Cm\n";
								cout << endl;
								cout << "\t\t\t\t\t\t\t\tEnter a Value:";
								cin >> r;
								result = i_cm (r);
								cout << "\t\t\t\t\t\t\t\t" << r <<"In"<< "----->" <<result <<"Cm" << endl;
								YES2:
									cout << "\t\t\t\t\t\t\t\tDo you want to continue?[Y/N]:";
									cin >> con;
									switch (con)
									{
										case 'Y':
										case 'y':
											goto ItoCm;
											break;
										case 'N':
										case 'n':
											goto LSUB;
											break;
										default:
											cout << "Error!!!\n";
											goto YES2;
									}
						case 'c':
							MmtoI:
								system ("CLS");
								cout <<"\t\t\t\t\t\t\t\t\tMm to Inches\n";
								cout <<endl;
								cout <<"\t\t\t\t\t\t\t\tEnter a Value:";
								cin >> r;
								result = mm_i (r);
								cout <<"\t\t\t\t\t\t\t\t"<< r << "Mm" << "----->" <<result <<"In" <<endl;
								YES3:
									cout << "\t\t\t\t\t\t\t\tDo you want to continue?[Y/N]:";
									cin >> con;
									switch (con)
									{
										case 'Y':
										case 'y':
											goto MmtoI;
											break;
										case 'N':
										case 'n':
											goto LSUB;
											break;
										default:
											cout << "Error!!!\n";
											goto YES3;
					               }
					    case 'd':
					    	ItoF:
					    		system("CLS");
					    		cout <<"\t\t\t\t\t\t\t\t\tInches to Feet\n";
					    		cout << endl;
					    		cout <<"\t\t\t\t\t\t\t\t"<<"Enter a Value:";
					    		cin >> r;
					    		result = i_f (r);
					    		cout <<"\t\t\t\t\t\t\t\t"<< r << "In" << "----->" <<result <<"F" <<endl;
								YES4:
									cout << "\t\t\t\t\t\t\t\tDo you want to continue?[Y/N]:";
									cin >> con;
									switch (con)
									{
										case 'Y':
										case 'y':
											goto ItoF;
											break;
										case 'N':
										case 'n':
											goto LSUB;
											break;
										default:
											cout << "Error!!!\n";
											goto YES4;
								    }
							case 'e':
					    	CmtoI:
					    		system("CLS");
					    		cout <<"\t\t\t\t\t\t\t\t\tCm to Inches\n";
					    		cout << endl;
					    		cout <<"\t\t\t\t\t\t\t\t"<<"Enter a Value:";
					    		cin >> r;
					    		result = cm_i (r);
					    		cout <<"\t\t\t\t\t\t\t\t"<< r << "Cm" << "----->" <<result <<"In" <<endl;
								YES5:
									cout << "\t\t\t\t\t\t\t\tDo you want to continue?[Y/N]:";
									cin >> con;
									switch (con)
									{
										case 'Y':
										case 'y':
											goto CmtoI;
											break;
										case 'N':
										case 'n':
											goto LSUB;
											break;
										default:
											cout << "Error!!!\n";
											goto YES5;
								    }
								    case 'f':
								    	goto START;
								    	break;
								    case 'g':
								    	return 0;
								    	break;
								    default:
								    	cout << "Try Again";
								    	system("pause");
								    	goto LSUB;
							    }
			case 'B':
			VSUB:
			system ("CLS");
			cout << endl;
			u2_menu();
					cin >> m;
					switch (m)
					{
						case 'a':
							LtoG:
								system ("CLS");
								cout << "\t\t\t\t\t\t\t\t\tLiters to Gallon\n";
								cout << endl;
								cout << "\t\t\t\t\t\t\t\tEnter a Value:";
								cin >> r;
								result = li_gal (r);
								cout << "\t\t\t\t\t\t\t\t" << r << "Li" <<"----->" << result << "Gal" <<endl;
								YESV:
									cout << "\t\t\t\t\t\t\t\tDo you want to Continue?[Y/N]:";
									cin >> con;
									switch (con)
									{
										case 'Y':
										case 'y':
											goto LtoG;
											break;
										case 'N':
										case 'n':
											goto VSUB;
											break;
										default:
											cout << "Error!!!\n";
											goto YESV;
									}
						case 'b':
							GtoL:
								system("CLS");
								cout << "\t\t\t\t\t\t\t\t\tGallon to Liter\n";
								cout << endl;
								cout << "\t\t\t\t\t\t\t\tEnter a Value:";
								cin >> r;
								result = gal_li (r);
								cout << "\t\t\t\t\t\t\t\t" << r <<"Gal"<< "----->" <<result <<"Li" << endl;
								YESV2:
									cout << "\t\t\t\t\t\t\t\tDo you want to continue?[Y/N]:";
									cin >> con;
									switch (con)
									{
										case 'Y':
										case 'y':
											goto GtoL;
											break;
										case 'N':
										case 'n':
											goto VSUB;
											break;
										default:
											cout << "Error!!!\n";
											goto YESV2;
									}
						case 'c':
							MtoC:
								system ("CLS");
								cout <<"\t\t\t\t\t\t\t\t\tmL to Cups\n";
								cout <<endl;
								cout <<"\t\t\t\t\t\t\t\tEnter a Value:";
								cin >> r;
								result = ml_c (r);
								cout <<"\t\t\t\t\t\t\t\t"<< r << "mL" << "----->" <<result <<"Cup/s" <<endl;
								YESV3:
									cout << "\t\t\t\t\t\t\t\tDo you want to continue?[Y/N]:";
									cin >> con;
									switch (con)
									{
										case 'Y':
										case 'y':
											goto MtoC;
											break;
										case 'N':
										case 'n':
											goto VSUB;
											break;
										default:
											cout << "Error!!!\n";
											goto YESV3;
					               }
						case 'd':
					    	CtoM:
					    		system("CLS");
					    		cout <<"\t\t\t\t\t\t\t\t\tCups to mL\n";
					    		cout << endl;
					    		cout <<"\t\t\t\t\t\t\t\tEnter a Value:";
					    		cin >> r;
					    		result = c_ml (r);
					    		cout <<"\t\t\t\t\t\t\t\t"<< r << "Cup/s" << "----->" <<result <<"mL" <<endl;
								YESV4:
									cout << "\t\t\t\t\t\t\t\tDo you want to continue?[Y/N]:";
									cin >> con;
									switch (con)
									{
										case 'Y':
										case 'y':
											goto CtoM;
											break;
										case 'N':
										case 'n':
											goto VSUB;
											break;
										default:
											cout << "Error!!!\n";
											goto YESV4;
								    }
							case 'e':
					    	TtoC:
					    		system("CLS");
					    		cout <<"\t\t\t\t\t\t\t\tTablespoons to Cups\n";
					    		cout << endl;
					    		cout <<"\t\t\t\t\t\t\t\tEnter a Value:";
					    		cin >> r;
					    		result = tb_c (r);
					    		cout <<"\t\t\t\t\t\t\t\t"<< r << "Tb" << "----->" <<result <<"Cup/s" <<endl;
								YESV5:
									cout << "\t\t\t\t\t\t\t\tDo you want to continue?[Y/N]:";
									cin >> con;
									switch (con)
									{
										case 'Y':
										case 'y':
											goto TtoC;
											break;
										case 'N':
										case 'n':
											goto VSUB;
											break;
										default:
											cout << "Error!!!\n";
											goto YESV5;
								    }
								    case 'f':
								    	goto START;
								    	break;
								    case 'g':
								    	return 0;
								    	break;
								    default:
								    	cout << "Try Again";
								    	system("pause");
								    	goto LSUB;
							    }	
			case 'C':
			WMSUB:
			system ("CLS");
			cout << endl;
			u3_menu();
					cin >> m;
					switch (m)
					{
						case 'a':
							KtoP:
								system ("CLS");
								cout << "\t\t\t\t\t\t\t\t\tKilograms to Pounds \n";
								cout << endl;
								cout << "\t\t\t\t\t\t\t\tEnter a Value:";
								cin >> r;
								result = kg_lbs (r);
								cout << "\t\t\t\t\t\t\t\t" << r << "Kg" <<"----->" << result << "Lbs" <<endl;
								YESWM:
									cout << "\t\t\t\t\t\t\t\tDo you want to Continue?[Y/N]:";
									cin >> con;
									switch (con)
									{
										case 'Y':
										case 'y':
											goto KtoP;
											break;
										case 'N':
										case 'n':
											goto WMSUB;
											break;
										default:
											cout << "Error!!!\n";
											goto YESWM;
									}
						case 'b':
							PtoK:
								system("CLS");
								cout << "\t\t\t\t\t\t\t\t\tPounds to Kilograms \n";
								cout << endl;
								cout << "\t\t\t\t\t\t\t\tEnter a Value:";
								cin >> r;
								result = lbs_kg (r);
								cout << "\t\t\t\t\t\t\t\t" << r <<"Pounds"<< "----->" <<result <<"Kg" << endl;
								YESWM2:
									cout << "\t\t\t\t\t\t\t\tDo you want to continue?[Y/N]:";
									cin >> con;
									switch (con)
									{
										case 'Y':
										case 'y':
											goto PtoK;
											break;
										case 'N':
										case 'n':
											goto WMSUB;
											break;
										default:
											cout << "Error!!!\n";
											goto YESWM2;
									}		
						case 'c':
							GtoO:
								system ("CLS");
								cout <<"\t\t\t\t\t\t\t\t\tGrams to Ounce\n";
								cout <<endl;
								cout <<"\t\t\t\t\t\t\t\tEnter a Value:";
								cin >> r;
								result = g_oz (r);
								cout <<"\t\t\t\t\t\t\t\t"<< r << "G" << "----->" <<result <<"Ounce" <<endl;
								YESWM3:
									cout << "\t\t\t\t\t\t\t\tDo you want to continue?[Y/N]:";
									cin >> con;
									switch (con)
									{
										case 'Y':
										case 'y':
											goto GtoO;
											break;
										case 'N':
										case 'n':
											goto WMSUB;
											break;
										default:
											cout << "Error!!!\n";
											goto YESWM3;
					               }	
						case 'd':
					    	OtoG:
					    		system("CLS");
					    		cout <<"\t\t\t\t\t\t\t\t\tOunce to Grams\n";
					    		cout << endl;
					    		cout <<"\t\t\t\t\t\t\t\tEnter a Value:";
					    		cin >> r;
					    		result = oz_g (r);
					    		cout <<"\t\t\t\t\t\t\t\t"<< r << "Oz" << "----->" <<result <<"G" <<endl;
								YESWM4:
									cout << "\t\t\t\t\t\t\t\tDo you want to continue?[Y/N]:";
									cin >> con;
									switch (con)
									{
										case 'Y':
										case 'y':
											goto OtoG;
											break;
										case 'N':
										case 'n':
											goto WMSUB;
											break;
										default:
											cout << "Error!!!\n";
											goto YESWM4;
								    }	
						case 'e':
					    	PtoO:
					    		system("CLS");
					    		cout <<"\t\t\t\t\t\t\t\t\tPounds to Ounce\n";
					    		cout << endl;
					    		cout <<"\t\t\t\t\t\t\t\tEnter a Value:";
					    		cin >> r;
					    		result = lbs_oz (r);
					    		cout <<"\t\t\t\t\t\t\t\t"<< r << "lbs" << "----->" <<result <<"Oz" <<endl;
								YESWM5:
									cout << "\t\t\t\t\t\t\t\tDo you want to continue?[Y/N]:";
									cin >> con;
									switch (con)
									{
										case 'Y':
										case 'y':
											goto PtoO;
											break;
										case 'N':
										case 'n':
											goto WMSUB;
											break;
										default:
											cout << "Error!!!\n";
											goto YESWM5;
								    }
						case 'f':
					    	OtoP:
					    		system("CLS");
					    		cout <<"\t\t\t\t\t\t\t\t\tOunce to Pounds\n";
					    		cout << endl;
					    		cout <<"\t\t\t\t\t\t\t\tEnter a Value:";
					    		cin >> r;
					    		result = oz_lbs (r);
					    		cout <<"\t\t\t\t\t\t\t\t"<< r << "oz" << "----->" <<result <<"lbs" <<endl;
								YESWM6:
									cout << "\t\t\t\t\t\t\t\tDo you want to continue?[Y/N]:";
									cin >> con;
									switch (con)
									{
										case 'Y':
										case 'y':
											goto OtoP;
											break;
										case 'N':
										case 'n':
											goto WMSUB;
											break;
										default:
											cout << "Error!!!\n";
											goto YESWM6;
								    }	
						case 'g':
					    	GtoP:
					    		system("CLS");
					    		cout <<"\t\t\t\t\t\t\t\t\tGrams to Pounds\n";
					    		cout << endl;
					    		cout <<"\t\t\t\t\t\t\t\tEnter a Value:";
					    		cin >> r;
					    		result = g_lbs (r);
					    		cout <<"\t\t\t\t\t\t\t\t"<< r << "g" << "----->" <<result <<"lbs" <<endl;
								YESWM7:
									cout << "\t\t\t\t\t\t\t\tDo you want to continue?[Y/N]:";
									cin >> con;
									switch (con)
									{
										case 'Y':
										case 'y':
											goto GtoP;
											break;
										case 'N':
										case 'n':
											goto WMSUB;
											break;
										default:
											cout << "Error!!!\n";
											goto YESWM7;
								    }	
						case 'h':
					    	PtoG:
					    		system("CLS");
					    		cout <<"\t\t\t\t\t\t\t\t\tPounds to Grams\n";
					    		cout << endl;
					    		cout <<"\t\t\t\t\t\t\t\tEnter a Value:";
					    		cin >> r;
					    		result = lbs_g (r);
					    		cout <<"\t\t\t\t\t\t\t\t"<< r << "lbs" << "----->" <<result <<"g" <<endl;
								YESWM8:
									cout << "\t\t\t\t\t\t\t\tDo you want to continue?[Y/N]:";
									cin >> con;
									switch (con)
									{
										case 'Y':
										case 'y':
											goto PtoG;
											break;
										case 'N':
										case 'n':
											goto WMSUB;
											break;
										default:
											cout << "Error!!!\n";
											goto YESWM8;
								    }
						case 'i':
					    	GtoK:
					    		system("CLS");
					    		cout <<"\t\t\t\t\t\t\t\t\tGrams to Kilograms\n";
					    		cout << endl;
					    		cout <<"\t\t\t\t\t\t\t\tEnter a Value:";
					    		cin >> r;
					    		result = g_kg (r);
					    		cout <<"\t\t\t\t\t\t\t\t"<< r << "g" << "----->" <<result <<"kg" <<endl;
								YESWM9:
									cout << "\t\t\t\t\t\t\t\tDo you want to continue?[Y/N]:";
									cin >> con;
									switch (con)
									{
										case 'Y':
										case 'y':
											goto GtoK;
											break;
										case 'N':
										case 'n':
											goto WMSUB;
											break;
										default:
											cout << "Error!!!\n";
											goto YESWM9;
								    }	
						case 'j':
					    	KtoG:
					    		system("CLS");
					    		cout <<"\t\t\t\t\t\t\t\t\tKilograms to Grams\n";
					    		cout << endl;
					    		cout <<"\t\t\t\t\t\t\t\tEnter a Value:";
					    		cin >> r;
					    		result = kg_g (r);
					    		cout <<"\t\t\t\t\t\t\t\t"<< r << "kg" << "----->" <<result <<"g" <<endl;
								YESWM10:
									cout << "\t\t\t\t\t\t\t\tDo you want to continue?[Y/N]:";
									cin >> con;
									switch (con)
									{
										case 'Y':
										case 'y':
											goto KtoG;
											break;
										case 'N':
										case 'n':
											goto WMSUB;
											break;
										default:
											cout << "Error!!!\n";
											goto YESWM10;
								    }	
									case 'k':
								    	goto START;
								    	break;
								    case 'l':
								    	return 0;
								    	break;
								    default:
								    	cout << "Try Again";
								    	system("pause");
								    	goto LSUB;
							    }																									   												   			
}
}



