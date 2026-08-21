
/* cocos2d::AnimationFrame::AnimationFrame() */

void __thiscall cocos2d::AnimationFrame::AnimationFrame(AnimationFrame *this)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eebcd4 with catch @ 00eebc68
                        */
  Ref::Ref((Ref *)this);
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined ***)this = &PTR__AnimationFrame_016fa3e0;
  *(undefined ***)(this + 0x28) = &PTR_clone_016fa408;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x60) = 0x3f800000;
                    /* try { // try from 00eebca0 to 00febcaf has its CatchHandler @ 00eebd30 */
  return;
}

