
/* cocos2d::TransitionPageTurn::~TransitionPageTurn() */

void __thiscall cocos2d::TransitionPageTurn::~TransitionPageTurn(TransitionPageTurn *this)

{
                    /* try { // try from 00f5fec4 to 0105ff47 has its CatchHandler @ 00f5fda4 */
  *(undefined ***)this = &PTR__TransitionPageTurn_0171d228;
  if (*(Ref **)(this + 0x388) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x388));
  }
  if (*(Ref **)(this + 0x390) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x390));
  }
  TransitionFlipX::~TransitionFlipX((TransitionFlipX *)this);
  return;
}

