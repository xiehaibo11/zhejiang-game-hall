
/* cocos2d::TransitionJumpZoom::~TransitionJumpZoom() */

void __thiscall cocos2d::TransitionJumpZoom::~TransitionJumpZoom(TransitionJumpZoom *this)

{
                    /* try { // try from 00f58f78 to 01058f7f has its CatchHandler @ 00f59058 */
  *(undefined ***)this = &PTR__TransitionFlipX_01712c10;
  if (*(Ref **)(this + 0x370) != (Ref *)0x0) {
                    /* try { // try from 00f58f80 to 01059093 has its CatchHandler @ 00f58f38 */
    Ref::release(*(Ref **)(this + 0x370));
  }
  if (*(Ref **)(this + 0x378) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x378));
  }
  Scene::~Scene((Scene *)this);
  operator_delete(this);
  return;
}

