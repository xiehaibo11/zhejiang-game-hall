
/* fairygui::ScrollPane::getLoopPartSize(float, int) */

float __thiscall fairygui::ScrollPane::getLoopPartSize(ScrollPane *this,float param_1,int param_2)

{
  ScrollPane *pSVar1;
  long lVar2;
  
  pSVar1 = this + 0x6c;
  if (param_2 != 0) {
    pSVar1 = this + 0x70;
  }
  lVar2 = 0x2f4;
  if (param_2 != 0) {
    lVar2 = 0x2f0;
  }
  return (*(float *)pSVar1 + (float)*(int *)(*(long *)(this + 0xf8) + lVar2)) / param_1;
}

