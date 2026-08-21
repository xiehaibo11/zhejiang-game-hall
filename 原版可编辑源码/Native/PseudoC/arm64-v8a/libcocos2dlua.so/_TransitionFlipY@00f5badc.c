
/* cocos2d::TransitionFlipY::~TransitionFlipY() */

void __thiscall cocos2d::TransitionFlipY::~TransitionFlipY(TransitionFlipY *this)

{
                    /* try { // try from 00f5bae8 to 0105baff has its CatchHandler @ 00f5bb88 */
  *(undefined ***)this = &PTR__TransitionFlipX_01712c10;
                    /* try { // try from 00f5bb00 to 0105bb0f has its CatchHandler @ 00f5bb70 */
  if (*(Ref **)(this + 0x370) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x370));
  }
  if (*(Ref **)(this + 0x378) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x378));
  }
  Scene::~Scene((Scene *)this);
  operator_delete(this);
  return;
}

