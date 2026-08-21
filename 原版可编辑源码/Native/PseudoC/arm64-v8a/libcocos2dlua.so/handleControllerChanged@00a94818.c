
/* fairygui::ScrollPane::handleControllerChanged(fairygui::GController*) */

void __thiscall fairygui::ScrollPane::handleControllerChanged(ScrollPane *this,GController *param_1)

{
  int iVar1;
  
  if (*(GController **)(this + 0x130) == param_1) {
    iVar1 = *(int *)(param_1 + 0x70);
    if (*(int *)(this + 0x24) == 0) {
      if ((this[0x58] != (ScrollPane)0x0) &&
         (GComponent::ensureBoundsCorrect(*(GComponent **)(this + 0xf8)),
         0.0 < *(float *)(this + 0x74))) {
                    /* try { // try from 00a948b4 to 00b948ff has its CatchHandler @ 00a94984 */
        setPosX(this,*(float *)(this + 0x7c) * (float)iVar1,true);
        return;
      }
    }
    else {
                    /* try { // try from 00a94864 to 00b948b3 has its CatchHandler @ 00a94864
                       catch() { ... } // from try @ 00a94864 with catch @ 00a94864
                       catch() { ... } // from try @ 00a94900 with catch @ 00a94864
                       catch() { ... } // from try @ 00a94944 with catch @ 00a94864 */
      if ((this[0x58] != (ScrollPane)0x0) &&
         (GComponent::ensureBoundsCorrect(*(GComponent **)(this + 0xf8)),
         0.0 < *(float *)(this + 0x78))) {
        setPosY(this,*(float *)(this + 0x80) * (float)iVar1,true);
        return;
      }
    }
  }
  return;
}

