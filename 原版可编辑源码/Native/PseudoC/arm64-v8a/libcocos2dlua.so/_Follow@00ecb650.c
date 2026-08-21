
/* non-virtual thunk to cocos2d::Follow::~Follow() */

void __thiscall cocos2d::Follow::~Follow(Follow *this)

{
  Ref *this_00;
  
                    /* try { // try from 00ecb654 to 00fcb6b3 has its CatchHandler @ 00ecb628 */
  this_00 = (Ref *)(this + -0x28);
  *(undefined ***)this_00 = &PTR__Follow_016f5558;
  *(undefined ***)this = &PTR_clone_016f55b8;
  if (*(Ref **)(this + 0x28) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x28));
  }
                    /* catch() { ... } // from try @ 00ecb64c with catch @ 00ecb698 */
  *(undefined ***)this_00 = &PTR__Action_016f5448;
  *(undefined ***)this = &PTR_clone_016f54a8;
  Ref::~Ref(this_00);
  return;
}

