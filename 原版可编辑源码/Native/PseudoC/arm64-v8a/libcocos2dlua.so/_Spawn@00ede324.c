
/* non-virtual thunk to cocos2d::Spawn::~Spawn() */

void __thiscall cocos2d::Spawn::~Spawn(Spawn *this)

{
                    /* catch() { ... } // from try @ 00ede358 with catch @ 00ede328 */
  *(undefined ***)(this + -0x28) = &PTR__Spawn_016f86b8;
                    /* try { // try from 00ede350 to 00fde357 has its CatchHandler @ 00ede3bc */
  *(undefined ***)this = &PTR_clone_016f8718;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
                    /* try { // try from 00ede358 to 00fde3d7 has its CatchHandler @ 00ede328 */
    Ref::release(*(Ref **)(this + 0x30));
  }
  if (*(Ref **)(this + 0x38) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x38));
  }
  Action::~Action((Action *)(this + -0x28));
  return;
}

