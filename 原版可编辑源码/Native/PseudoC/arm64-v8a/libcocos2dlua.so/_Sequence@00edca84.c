
/* cocos2d::Sequence::~Sequence() */

void __thiscall cocos2d::Sequence::~Sequence(Sequence *this)

{
                    /* try { // try from 00edca98 to 00fdca9f has its CatchHandler @ 00edcc30 */
  *(undefined ***)this = &PTR__Sequence_016f8520;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f8580;
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
  }
  if (*(Ref **)(this + 0x60) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x60));
  }
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

