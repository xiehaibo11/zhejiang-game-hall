
/* fairygui::ScrollPane::scrollUp(float, bool) */

void __thiscall fairygui::ScrollPane::scrollUp(ScrollPane *this,float param_1,bool param_2)

{
  long lVar1;
  
  lVar1 = 0x28;
  if (this[0x58] != (ScrollPane)0x0) {
    lVar1 = 0x80;
  }
  setPosY(this,*(float *)(this + 0x60) - *(float *)(this + lVar1) * param_1,param_2);
  return;
}

