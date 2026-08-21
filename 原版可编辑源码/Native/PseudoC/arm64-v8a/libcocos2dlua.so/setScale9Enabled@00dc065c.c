
/* cocos2d::ui::Button::setScale9Enabled(bool) */

void cocos2d::ui::Button::setScale9Enabled(bool param_1)

{
  Helper *pHVar1;
  Widget WVar2;
  long lVar3;
  Widget *this;
  byte in_w1;
  Size *in_x2;
  Rect aRStack_48 [16];
  long local_38;
  
  this = (Widget *)(ulong)param_1;
                    /* try { // try from 00dc0664 to 00ec0687 has its CatchHandler @ 00dc07d8 */
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  WVar2 = (Widget)(in_w1 & 1);
  if (this[0x515] != WVar2) {
                    /* try { // try from 00dc068c to 00ec0697 has its CatchHandler @ 00dc07d4 */
    this[0x515] = WVar2;
    Scale9Sprite::setRenderingType(*(Scale9Sprite **)(this + 0x4f0),WVar2);
                    /* try { // try from 00dc06a0 to 00ec06c3 has its CatchHandler @ 00dc07d0 */
    Scale9Sprite::setRenderingType(*(Scale9Sprite **)(this + 0x4f8),WVar2);
    Scale9Sprite::setRenderingType(*(Scale9Sprite **)(this + 0x500),WVar2);
    if (this[0x515] == (Widget)0x0) {
                    /* try { // try from 00dc06e0 to 00ec06f7 has its CatchHandler @ 00dc0834 */
      (**(code **)(*(long *)this + 0x600))(this,this[0x514]);
    }
    else {
      WVar2 = this[0x387];
      (**(code **)(*(long *)this + 0x600))(this,0);
      this[0x514] = WVar2;
    }
    pHVar1 = (Helper *)(this + 0x518);
    Helper::restrictCapInsetRect(pHVar1,this + 0x548,in_x2);
    Rect::operator=((Rect *)pHVar1,aRStack_48);
    if (this[0x515] != (Widget)0x0) {
                    /* try { // try from 00dc0720 to 00ec0753 has its CatchHandler @ 00dc0830 */
      Scale9Sprite::setCapInsets(*(Scale9Sprite **)(this + 0x4f0),pHVar1);
    }
    pHVar1 = (Helper *)(this + 0x528);
    Helper::restrictCapInsetRect(pHVar1,this + 0x550,in_x2);
    Rect::operator=((Rect *)pHVar1,aRStack_48);
    if (this[0x515] != (Widget)0x0) {
                    /* try { // try from 00dc0754 to 00ec0883 has its CatchHandler @ 00dc008c */
      Scale9Sprite::setCapInsets(*(Scale9Sprite **)(this + 0x4f8),pHVar1);
    }
    pHVar1 = (Helper *)(this + 0x538);
    Helper::restrictCapInsetRect(pHVar1,this + 0x558,in_x2);
    Rect::operator=((Rect *)pHVar1,aRStack_48);
    if (this[0x515] != (Widget)0x0) {
      Scale9Sprite::setCapInsets(*(Scale9Sprite **)(this + 0x500),pHVar1);
    }
    *(undefined4 *)(this + 0x38c) = 0xffffffff;
    Widget::setBright(this,(bool)this[899]);
                    /* catch() { ... } // from try @ 00dc04ec with catch @ 00dc07b0 */
    *(undefined2 *)(this + 0x563) = 0x101;
                    /* catch() { ... } // from try @ 00dc04d8 with catch @ 00dc07b4 */
    this[0x565] = (Widget)0x1;
  }
                    /* catch() { ... } // from try @ 00dc03bc with catch @ 00dc07b8 */
                    /* catch() { ... } // from try @ 00dc03a8 with catch @ 00dc07bc */
                    /* catch() { ... } // from try @ 00dc0340 with catch @ 00dc07c0 */
                    /* catch() { ... } // from try @ 00dc032c with catch @ 00dc07c4 */
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00dc02cc with catch @ 00dc07c8 */
                    /* catch() { ... } // from try @ 00dc02b8 with catch @ 00dc07cc */
                    /* catch() { ... } // from try @ 00dc06a0 with catch @ 00dc07d0 */
                    /* catch() { ... } // from try @ 00dc068c with catch @ 00dc07d4 */
                    /* catch() { ... } // from try @ 00dc0664 with catch @ 00dc07d8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00dc0650 with catch @ 00dc07dc */
  __stack_chk_fail();
}

