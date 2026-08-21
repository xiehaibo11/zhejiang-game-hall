
/* fairygui::ScrollPane::scrollToView(cocos2d::Rect const&, bool, bool) */

void __thiscall
fairygui::ScrollPane::scrollToView(ScrollPane *this,Rect *param_1,bool param_2,bool param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
                    /* try { // try from 00a93eec to 00b93f57 has its CatchHandler @ 00a942b4 */
  GComponent::ensureBoundsCorrect(*(GComponent **)(this + 0xf8));
  if (this[0x45] != (ScrollPane)0x0) {
    refresh();
  }
  if (0.0 < *(float *)(this + 0x78)) {
    fVar2 = *(float *)(this + 0x60);
    fVar1 = *(float *)(param_1 + 4);
    if (((fVar1 <= fVar2) || (param_3)) ||
       (fVar3 = *(float *)(this + 0x68), fVar3 <= *(float *)(param_1 + 0xc))) {
      if (this[0x58] != (ScrollPane)0x0) {
LAB_00a93f68:
                    /* try { // try from 00a93f68 to 00b93f8f has its CatchHandler @ 00a94274 */
        fVar1 = *(float *)(this + 0x80) * (float)(int)(fVar1 / *(float *)(this + 0x80));
      }
    }
    else {
      fVar1 = (float)cocos2d::Rect::getMaxY((Rect *)param_1);
      if (fVar1 <= fVar2 + fVar3) goto LAB_00a93f84;
      if (this[0x58] != (ScrollPane)0x0) {
        fVar1 = *(float *)(param_1 + 4);
        goto LAB_00a93f68;
      }
      fVar1 = *(float *)(param_1 + 0xc);
      if (fVar1 <= *(float *)(this + 0x68) * 0.5) {
        fVar1 = (fVar1 + fVar1 + *(float *)(param_1 + 4)) - *(float *)(this + 0x68);
      }
      else {
        fVar1 = (float)cocos2d::Rect::getMaxY((Rect *)param_1);
                    /* try { // try from 00a94074 to 00b94097 has its CatchHandler @ 00a93da0 */
        fVar1 = fVar1 - *(float *)(this + 0x68);
      }
    }
    setPosY(this,fVar1,param_2);
  }
LAB_00a93f84:
  if (0.0 < *(float *)(this + 0x74)) {
                    /* try { // try from 00a93f90 to 00b93faf has its CatchHandler @ 00a93da0 */
                    /* try { // try from 00a93fb0 to 00b94037 has its CatchHandler @ 00a942b8 */
    if (((param_3) || (fVar1 = *(float *)(this + 0x5c), *(float *)param_1 <= fVar1)) ||
       (fVar2 = *(float *)(this + 100), fVar2 <= *(float *)(param_1 + 8))) {
      if (this[0x58] != (ScrollPane)0x0) {
        setPosX(this,*(float *)(this + 0x7c) *
                     (float)(int)(*(float *)param_1 / *(float *)(this + 0x7c)),param_2);
      }
      fVar1 = *(float *)param_1;
    }
    else {
      fVar3 = (float)cocos2d::Rect::getMaxX((Rect *)param_1);
      if (fVar3 <= fVar1 + fVar2) goto LAB_00a94020;
      if (this[0x58] == (ScrollPane)0x0) {
        fVar1 = *(float *)(param_1 + 8);
        if (fVar1 <= *(float *)(this + 100) * 0.5) {
          fVar1 = (fVar1 + fVar1 + *(float *)param_1) - *(float *)(this + 100);
        }
        else {
                    /* try { // try from 00a94098 to 00b940e7 has its CatchHandler @ 00a94288 */
          fVar1 = (float)cocos2d::Rect::getMaxX((Rect *)param_1);
          fVar1 = fVar1 - *(float *)(this + 100);
        }
      }
      else {
        fVar1 = *(float *)(this + 0x7c) * (float)(int)(*(float *)param_1 / *(float *)(this + 0x7c));
      }
    }
    setPosX(this,fVar1,param_2);
  }
LAB_00a94020:
  if ((!param_2) && (this[0x45] != (ScrollPane)0x0)) {
    refresh();
    return;
  }
                    /* try { // try from 00a94050 to 00b94073 has its CatchHandler @ 00a94270 */
  return;
}

