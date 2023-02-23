#include "Kphone.h"

int main()
{
	//전화걸기
	{
		//전화기를 들다
		Kphone* pKphone = new Kphone();

		//전화번호입력
		pKphone->Numbers("010-1234-5678");
		//음성인식
		/*int* pAudio = new int[11] {
			0, 1, 2, 3, 4, 5, 6, 7, 8,
		};
		int length = 11;
		pKphone->Numbers(pAudio, length);*/

		//전화걸기
		pKphone->Send();

		pKphone->Cancel(); //revision 2.0

		if (pKphone != nullptr)
		{
			delete pKphone;
			pKphone = nullptr;
		}

	}

	//전화받기
	{
		//전화기를 들다
		Kphone* pKphone = new Kphone();

		//전화받기
		pKphone->Receive();

		pKphone->Cancel(); //revision 2.0

		if (pKphone != nullptr)
		{
			delete pKphone;
			pKphone = nullptr;
		}
	}

	return 1;
}