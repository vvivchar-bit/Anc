//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{  Image1->Visible = true;   // показує портрет
    Image2->Visible = false;  // ховає художнє

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
   Image1->Visible = false;  // ховає портрет
    Image2->Visible = true;   // показує художнє фото
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
    Image1->Visible = false;  // ховає обидві фотографії
    Image2->Visible = false;
}
//---------------------------------------------------------------------------

