// Pogram for plotting the graph of a function!!!
// ��������� ��� ���������� ������� �������
//--------------------------------------------------------------------------
# include "HorsePRT.h"     // �⠭����� ������⥪� � ���⨯�� �㭪権;
# include "HorseCTR.cpp"    	     	    // �㭪樨 �ࠢ����� �ணࠬ��;
# include "HorseRND.cpp"                        // ��⮤� � ������ �㭪樨;
# include "HorseOUT.cpp"           // ��������� �㭪樨, ���譨� ����䥩�;
# include "HorseVIZ.cpp"           	   // ���㠫������ �嬠⭮�� ����;
# include "HorseWRT.cpp"           	   	 // ������ �ࠥ��� � 䠩�;
# include "HorseGPR.cpp"
//--------------------------------------------------------------------------
int main()
{
				Start(a); // �ਢ���⢨� � ����ன�� ��࠭�;
     int uu; char ss;                      //     ��� ����� ����⮩ ������.
     cell CB[S][S];           // �������� �������

  for(;;) {
			  Menu();  //          �뤠� �� ��࠭ ����.
			  uu = klaw(ss);   //              ���� ����������.
	 if(uu) {
	   switch (ss) {
	     case  68:   Exit();  	    return 0; //      F10   ��⠭��.
	     case  59:   Help();	    continue; //      F1       Help.
	     case  60:   manual(CB);	    continue; //      F2     ��筮�.
   	     case  61:   semiavto(CB);	    continue; //      F3 ���〢⮬��.
	     case  62:   avto(CB);	    continue; //      F4    ��⮬��.
	     case  63:   PrintT(CB);	    continue; //      F5   ��ᬮ��.
	     case  64:   Write(CB);	    continue; //      F6     ������.
	     case  65:   stupid(CB);        continue;
	      default:  Stohas(3,200);      continue; //  ��㪮��� ᮮ�饭��
						      //   � ����⨨ ���ᯮ-
						      //  ��㥬�� �ࠢ.��.
		       }
		}
       switch (ss) {
	 case 13:                   ; continue;    //         Enter - ����.
	      default: Stohas(4,150);   continue;  // ���.ᮮ�. � ���ᯮ��-
						   // ��㥬�� ᨬ���. ����.
		   }
	}
}