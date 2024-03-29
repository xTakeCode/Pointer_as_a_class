// ---------------------------------------------------------------------------

#ifndef PointerH
#define PointerH
// ---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.CheckLst.hpp>
#include <Vcl.CategoryButtons.hpp>

// ---------------------------------------------------------------------------
class TForm1 : public TForm {
__published: // IDE-managed Components
	TGroupBox *GroupBox2;
	TLabel *LabelAutor;
	TLabel *LabelUnit;
	TEdit *EditValue;
	TTimer *Timer1;
	TImage *Image1;
	TButton *SetButton;
	TLabel *LabelColor;
	TScrollBar *ScrollBar1;
	TTrackBar *TrackBar1;
	TLabel *Label1;
	TLabel *Label2;
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall SetButtonClick(TObject *Sender);
	void __fastcall TrackBar1Change(TObject *Sender);
	void __fastcall ScrollBar1Change(TObject *Sender);
private: // User declarations
	Graphics::TBitmap * bitmap1;
	TRect rect1;
public: // User declarations
	__fastcall TForm1(TComponent* Owner);
	void Set_Auto(int);
	void Draw_Shield();
};

// ---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
// ---------------------------------------------------------------------------
#endif
