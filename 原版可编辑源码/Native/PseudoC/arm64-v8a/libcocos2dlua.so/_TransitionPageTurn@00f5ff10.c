
/* cocos2d::TransitionPageTurn::~TransitionPageTurn() */

void __thiscall cocos2d::TransitionPageTurn::~TransitionPageTurn(TransitionPageTurn *this)

{
                    /* catch() { ... } // from try @ 00f5fe68 with catch @ 00f5ff18 */
                    /* catch() { ... } // from try @ 00f5fe94 with catch @ 00f5ff2c */
  *(undefined ***)this = &PTR__TransitionPageTurn_0171d228;
  if (*(Ref **)(this + 0x388) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x388));
  }
  if (*(Ref **)(this + 0x390) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x390));
  }
  TransitionFlipX::~TransitionFlipX((TransitionFlipX *)this);
  operator_delete(this);
  return;
}

