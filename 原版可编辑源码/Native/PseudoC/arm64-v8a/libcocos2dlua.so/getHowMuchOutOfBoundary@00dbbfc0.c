
/* cocos2d::ui::ScrollView::getHowMuchOutOfBoundary(cocos2d::Vec2 const&) */

float __thiscall cocos2d::ui::ScrollView::getHowMuchOutOfBoundary(ScrollView *this,Vec2 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
                    /* try { // try from 00dbbfc8 to 00ebc01f has its CatchHandler @ 00dbbfc8
                       catch() { ... } // from try @ 00dbbfc8 with catch @ 00dbbfc8
                       catch() { ... } // from try @ 00dbc058 with catch @ 00dbbfc8 */
  fVar3 = 0.0;
  if (((*(float *)param_1 == 0.0) && (*(float *)(param_1 + 4) == 0.0)) &&
     (this[0x850] == (ScrollView)0x0)) {
    return *(float *)(this + 0x848);
  }
  fVar4 = 0.0;
                    /* try { // try from 00dbc020 to 00ebc027 has its CatchHandler @ 00dbc0e0 */
  fVar1 = (float)Widget::getLeftBoundary(*(Widget **)(this + 0x7b8));
  fVar5 = *(float *)(this + 0x7cc);
  if (fVar1 + *(float *)param_1 <= fVar5) {
    fVar1 = (float)Widget::getRightBoundary(*(Widget **)(this + 0x7b8));
                    /* try { // try from 00dbc050 to 00ebc057 has its CatchHandler @ 00dbc0d0 */
    fVar5 = *(float *)(this + 2000);
                    /* try { // try from 00dbc058 to 00ebc0f3 has its CatchHandler @ 00dbbfc8 */
    if (fVar1 + *(float *)param_1 < fVar5) {
      fVar3 = (float)Widget::getRightBoundary(*(Widget **)(this + 0x7b8));
      goto LAB_00dbc068;
    }
  }
  else {
    fVar3 = (float)Widget::getLeftBoundary(*(Widget **)(this + 0x7b8));
LAB_00dbc068:
    fVar3 = fVar5 - (fVar3 + *(float *)param_1);
  }
  fVar1 = (float)Widget::getTopBoundary(*(Widget **)(this + 0x7b8));
  fVar5 = *(float *)(this + 0x7c4);
  if (fVar5 <= fVar1 + *(float *)(param_1 + 4)) {
    fVar1 = (float)Widget::getBottomBoundary(*(Widget **)(this + 0x7b8));
    fVar2 = *(float *)(param_1 + 4);
    fVar5 = *(float *)(this + 0x7c8);
    if (fVar1 + fVar2 <= fVar5) goto LAB_00dbc0c8;
    fVar1 = (float)Widget::getBottomBoundary(*(Widget **)(this + 0x7b8));
  }
  else {
    fVar1 = (float)Widget::getTopBoundary(*(Widget **)(this + 0x7b8));
  }
  fVar2 = *(float *)(param_1 + 4);
  fVar4 = fVar5 - (fVar1 + fVar2);
LAB_00dbc0c8:
                    /* catch() { ... } // from try @ 00dbc050 with catch @ 00dbc0d0 */
                    /* catch() { ... } // from try @ 00dbc020 with catch @ 00dbc0e0 */
  if ((*(float *)param_1 == 0.0) && (fVar2 == 0.0)) {
    *(float *)(this + 0x848) = fVar3;
    *(float *)(this + 0x84c) = fVar4;
    this[0x850] = (ScrollView)0x0;
  }
  return fVar3;
}

