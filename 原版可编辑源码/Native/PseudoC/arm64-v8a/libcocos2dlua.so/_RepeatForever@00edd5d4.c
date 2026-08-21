
/* cocos2d::RepeatForever::~RepeatForever() */

void __thiscall cocos2d::RepeatForever::~RepeatForever(RepeatForever *this)

{
  *(undefined ***)this = &PTR__RepeatForever_016f8630;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f8690;
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
  }
                    /* catch() { ... } // from try @ 00edd418 with catch @ 00edd60c */
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

