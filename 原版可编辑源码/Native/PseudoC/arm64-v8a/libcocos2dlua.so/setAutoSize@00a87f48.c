
/* fairygui::GRichTextField::setAutoSize(fairygui::AutoSizeType) */

void __thiscall fairygui::GRichTextField::setAutoSize(GRichTextField *this,uint param_2)

{
  *(uint *)(this + 500) = param_2;
  if (param_2 < 4) {
    FUIRichText::setOverflow
              (*(FUIRichText **)(this + 0x200),
               *(undefined4 *)(&DAT_013ccde4 + (long)(int)param_2 * 4));
  }
                    /* try { // try from 00a87f7c to 00b87fc3 has its CatchHandler @ 00a88108 */
  FUIRichText::setDimensions
            (*(FUIRichText **)(this + 0x200),*(float *)(this + 200),*(float *)(this + 0xcc));
  if (this[0x98] != (GRichTextField)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a87fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xf0))(this);
  return;
}

