
/* cocos2d::Follow::~Follow() */

void __thiscall cocos2d::Follow::~Follow(Follow *this)

{
  *(undefined ***)this = &PTR__Follow_016f5558;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f55b8;
  if (*(Ref **)(this + 0x50) != (Ref *)0x0) {
                    /* try { // try from 00ecb6f4 to 00fcb787 has its CatchHandler @ 00ecb928 */
    Ref::release(*(Ref **)(this + 0x50));
  }
  *(undefined ***)this = &PTR__Action_016f5448;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f54a8;
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

