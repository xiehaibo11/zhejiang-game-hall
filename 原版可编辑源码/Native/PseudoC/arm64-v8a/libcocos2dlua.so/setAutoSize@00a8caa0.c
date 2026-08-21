
/* fairygui::GBasicTextField::setAutoSize(fairygui::AutoSizeType) */

void __thiscall fairygui::GBasicTextField::setAutoSize(GBasicTextField *this,uint param_2)

{
  Label *this_00;
  float fVar1;
  float fVar2;
  
  *(uint *)(this + 500) = param_2;
  if (param_2 < 4) {
    cocos2d::Label::setOverflow
              (*(Label **)(this + 0x200),*(undefined4 *)(&DAT_013ccde4 + (long)(int)param_2 * 4));
    if (*(int *)(this + 500) == 1) {
      this_00 = *(Label **)(this + 0x200);
      fVar1 = 0.0;
    }
    else {
      this_00 = *(Label **)(this + 0x200);
      fVar1 = *(float *)(this + 200);
      if (*(int *)(this + 500) != 2) goto LAB_00a8cb0c;
    }
    fVar2 = 0.0;
  }
  else {
    this_00 = *(Label **)(this + 0x200);
    fVar1 = *(float *)(this + 200);
LAB_00a8cb0c:
    fVar2 = *(float *)(this + 0xcc);
  }
  cocos2d::Label::setDimensions(this_00,fVar1,fVar2);
                    /* try { // try from 00a8cb18 to 00b8cb67 has its CatchHandler @ 00a8cb18
                       catch() { ... } // from try @ 00a8cb18 with catch @ 00a8cb18
                       catch() { ... } // from try @ 00a8cba0 with catch @ 00a8cb18
                       catch() { ... } // from try @ 00a8cbe4 with catch @ 00a8cb18 */
  if (this[0x98] != (GBasicTextField)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a8cb3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xf0))(this);
  return;
}

