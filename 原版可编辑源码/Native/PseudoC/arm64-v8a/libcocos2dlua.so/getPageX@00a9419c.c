
/* fairygui::ScrollPane::getPageX() const */

int __thiscall fairygui::ScrollPane::getPageX(ScrollPane *this)

{
  int iVar1;
  float fVar2;
  
                    /* try { // try from 00a9419c to 00b941af has its CatchHandler @ 00a94288 */
  if (this[0x58] != (ScrollPane)0x0) {
    fVar2 = *(float *)(this + 0x7c);
    iVar1 = (int)(*(float *)(this + 0x5c) / fVar2);
                    /* try { // try from 00a941c0 to 00b941d3 has its CatchHandler @ 00a942b4 */
    return (uint)(fVar2 * 0.5 < *(float *)(this + 0x5c) - fVar2 * (float)iVar1) + iVar1;
  }
                    /* try { // try from 00a941d8 to 00b941eb has its CatchHandler @ 00a942b8 */
  return 0;
}

