
/* cocos2d::extension::ScrollView::onAfterDraw() */

void __thiscall cocos2d::extension::ScrollView::onAfterDraw(ScrollView *this)

{
  long lVar1;
  GLView *this_00;
  
  if (this[0x35d] != (ScrollView)0x0) {
    lVar1 = Director::getInstance();
    this_00 = *(GLView **)(lVar1 + 0x108);
    lVar1 = GLView::getVR(this_00);
    if (lVar1 == 0) {
      if (this[0x3b0] != (ScrollView)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e16658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)this_00 + 0xd8))
                  (*(undefined4 *)(this + 0x3a0),*(undefined4 *)(this + 0x3a4),
                   *(undefined4 *)(this + 0x3a8),*(undefined4 *)(this + 0x3ac),this_00);
        return;
      }
      glDisable(0xc11);
      return;
    }
  }
  return;
}

