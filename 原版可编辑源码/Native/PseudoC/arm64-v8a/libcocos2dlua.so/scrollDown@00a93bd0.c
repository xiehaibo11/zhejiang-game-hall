
/* fairygui::ScrollPane::scrollDown(float, bool) */

void __thiscall fairygui::ScrollPane::scrollDown(ScrollPane *this,float param_1,bool param_2)

{
  long lVar1;
  
  lVar1 = 0x28;
  if (this[0x58] != (ScrollPane)0x0) {
    lVar1 = 0x80;
  }
                    /* try { // try from 00a93bf0 to 00b93c23 has its CatchHandler @ 00a93af8 */
  setPosY(this,*(float *)(this + 0x60) + *(float *)(this + lVar1) * param_1,param_2);
  return;
}

