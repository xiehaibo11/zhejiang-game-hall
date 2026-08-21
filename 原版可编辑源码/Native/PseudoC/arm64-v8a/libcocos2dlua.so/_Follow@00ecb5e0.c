
/* cocos2d::Follow::~Follow() */

void __thiscall cocos2d::Follow::~Follow(Follow *this)

{
  *(undefined ***)this = &PTR__Follow_016f5558;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f55b8;
                    /* catch() { ... } // from try @ 00ecb5c0 with catch @ 00ecb60c */
  if (*(Ref **)(this + 0x50) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x50));
  }
                    /* catch() { ... } // from try @ 00ecb654 with catch @ 00ecb628 */
  *(undefined ***)this = &PTR__Action_016f5448;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f54a8;
  Ref::~Ref((Ref *)this);
  return;
}

