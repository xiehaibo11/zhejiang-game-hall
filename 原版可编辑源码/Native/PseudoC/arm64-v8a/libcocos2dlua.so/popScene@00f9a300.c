
/* cocos2d::Director::popScene() */

void __thiscall cocos2d::Director::popScene(Director *this)

{
  long lVar1;
  Ref *this_00;
  
  this_00 = *(Ref **)(*(long *)(this + 0x178) + -8);
  *(undefined8 **)(this + 0x178) = (undefined8 *)(*(long *)(this + 0x178) + -8);
  Ref::release(this_00);
  lVar1 = *(long *)(this + 0x178) - *(long *)(this + 0x170);
  if (lVar1 == 0) {
    this[0x21] = (Director)0x1;
  }
  else {
    this[0x168] = (Director)0x1;
    *(undefined8 *)(this + 0x160) = *(undefined8 *)(lVar1 + *(long *)(this + 0x170) + -8);
                    /* try { // try from 00f9a340 to 0109a343 has its CatchHandler @ 00f9a384 */
  }
  return;
}

