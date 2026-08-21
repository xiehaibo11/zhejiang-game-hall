
/* cocos2d::Spawn::~Spawn() */

void __thiscall cocos2d::Spawn::~Spawn(Spawn *this)

{
  *(undefined ***)this = &PTR__Spawn_016f86b8;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f8718;
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
  }
  if (*(Ref **)(this + 0x60) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x60));
  }
                    /* catch() { ... } // from try @ 00ede2a4 with catch @ 00ede30c */
  Action::~Action((Action *)this);
  return;
}

