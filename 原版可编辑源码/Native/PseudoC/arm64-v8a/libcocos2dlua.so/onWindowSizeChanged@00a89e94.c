
/* fairygui::GRoot::onWindowSizeChanged() */

void __thiscall fairygui::GRoot::onWindowSizeChanged(GRoot *this)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  
  lVar1 = cocos2d::Director::getInstance();
  pfVar2 = (float *)(**(code **)(**(long **)(lVar1 + 0x108) + 200))();
                    /* try { // try from 00a89ec4 to 00b89ed7 has its CatchHandler @ 00a89f80 */
  GObject::setSize((GObject *)this,*pfVar2,pfVar2[1],false);
  lVar1 = cocos2d::Director::getInstance();
  fVar3 = *(float *)(lVar1 + 0x1a0);
  if (3.5 <= fVar3) {
    contentScaleLevel = 3;
  }
  else if (2.5 <= fVar3) {
                    /* try { // try from 00a89f00 to 00b89f13 has its CatchHandler @ 00a89f94 */
    contentScaleLevel = 2;
  }
  else {
                    /* try { // try from 00a89ee8 to 00b89efb has its CatchHandler @ 00a89f90 */
    contentScaleLevel = (uint)(1.5 <= fVar3);
  }
                    /* try { // try from 00a89f14 to 00b89fbf has its CatchHandler @ 00a89b60 */
  return;
}

