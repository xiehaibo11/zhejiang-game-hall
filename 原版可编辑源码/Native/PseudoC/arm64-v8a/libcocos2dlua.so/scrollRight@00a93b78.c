
/* fairygui::ScrollPane::scrollRight(float, bool) */

void __thiscall fairygui::ScrollPane::scrollRight(ScrollPane *this,float param_1,bool param_2)

{
  long lVar1;
  
  lVar1 = 0x28;
  if (this[0x58] != (ScrollPane)0x0) {
    lVar1 = 0x7c;
  }
                    /* try { // try from 00a93b94 to 00b93bef has its CatchHandler @ 00a93c94 */
  setPosX(this,*(float *)(this + 0x5c) + *(float *)(this + lVar1) * param_1,param_2);
  return;
}

