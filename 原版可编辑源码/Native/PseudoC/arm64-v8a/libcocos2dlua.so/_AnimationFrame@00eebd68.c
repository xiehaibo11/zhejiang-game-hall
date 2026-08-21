
/* cocos2d::AnimationFrame::~AnimationFrame() */

void __thiscall cocos2d::AnimationFrame::~AnimationFrame(AnimationFrame *this)

{
                    /* try { // try from 00eebd68 to 00febe93 has its CatchHandler @ 00eebd68
                       catch() { ... } // from try @ 00eebd68 with catch @ 00eebd68
                       catch() { ... } // from try @ 00eebf04 with catch @ 00eebd68 */
  ~AnimationFrame(this);
  operator_delete(this);
  return;
}

