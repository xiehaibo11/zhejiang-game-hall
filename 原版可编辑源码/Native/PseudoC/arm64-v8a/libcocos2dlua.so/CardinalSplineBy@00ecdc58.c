
/* cocos2d::CardinalSplineBy::CardinalSplineBy() */

void __thiscall cocos2d::CardinalSplineBy::CardinalSplineBy(CardinalSplineBy *this)

{
                    /* try { // try from 00ecdc5c to 00fcdca7 has its CatchHandler @ 00ecdbf4 */
  Action::Action((Action *)this);
                    /* catch() { ... } // from try @ 00ecdc54 with catch @ 00ecdc6c */
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined ***)this = &PTR__CardinalSplineTo_016f5868;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f58d0;
  *(undefined8 *)(this + 0x78) = 0;
  return;
}

