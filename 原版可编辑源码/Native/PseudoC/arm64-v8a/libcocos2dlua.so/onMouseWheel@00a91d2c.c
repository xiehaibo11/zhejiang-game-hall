
/* fairygui::ScrollPane::onMouseWheel(fairygui::EventContext*) */

void __thiscall fairygui::ScrollPane::onMouseWheel(ScrollPane *this,EventContext *param_1)

{
  int iVar1;
  float fVar2;
  
  if (this[0x4f] == (ScrollPane)0x0) {
    return;
  }
  iVar1 = -1;
  if (0 < *(int *)(*(long *)(param_1 + 8) + 0x20)) {
    iVar1 = 1;
  }
  if ((0.0 < *(float *)(this + 0x74)) && (*(float *)(this + 0x78) == 0.0)) {
    if (this[0x58] == (ScrollPane)0x0) {
                    /* catch() { ... } // from try @ 00a91d6c with catch @ 00a91da4 */
      fVar2 = *(float *)(this + 0x2c);
    }
    else {
                    /* try { // try from 00a91d6c to 00b91d6f has its CatchHandler @ 00a91da4 */
      fVar2 = *(float *)(this + 0x7c);
                    /* try { // try from 00a91d70 to 00b91db7 has its CatchHandler @ 00a91d20 */
    }
                    /* try { // try from 00a91db8 to 00b92157 has its CatchHandler @ 00a91db8
                       catch() { ... } // from try @ 00a91db8 with catch @ 00a91db8
                       catch() { ... } // from try @ 00a921d8 with catch @ 00a91db8 */
    setPosX(this,*(float *)(this + 0x5c) + fVar2 * (float)iVar1,false);
    return;
  }
  if (this[0x58] == (ScrollPane)0x0) {
    fVar2 = *(float *)(this + 0x2c);
  }
  else {
    fVar2 = *(float *)(this + 0x80);
  }
  setPosY(this,*(float *)(this + 0x60) + fVar2 * (float)iVar1,false);
  return;
}

