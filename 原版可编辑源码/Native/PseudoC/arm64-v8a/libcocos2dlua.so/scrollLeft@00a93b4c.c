
/* fairygui::ScrollPane::scrollLeft(float, bool) */

void __thiscall fairygui::ScrollPane::scrollLeft(ScrollPane *this,float param_1,bool param_2)

{
  long lVar1;
  
                    /* try { // try from 00a93b4c to 00b93b87 has its CatchHandler @ 00a93c90 */
  lVar1 = 0x28;
  if (this[0x58] != (ScrollPane)0x0) {
    lVar1 = 0x7c;
  }
  setPosX(this,*(float *)(this + 0x5c) - *(float *)(this + lVar1) * param_1,param_2);
  return;
}

