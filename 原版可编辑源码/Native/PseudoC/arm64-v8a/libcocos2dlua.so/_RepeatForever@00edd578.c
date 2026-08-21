
/* non-virtual thunk to cocos2d::RepeatForever::~RepeatForever() */

void __thiscall cocos2d::RepeatForever::~RepeatForever(RepeatForever *this)

{
  *(undefined ***)(this + -0x28) = &PTR__RepeatForever_016f8630;
                    /* try { // try from 00edd59c to 00fdd5a7 has its CatchHandler @ 00edd6d0 */
  *(undefined ***)this = &PTR_clone_016f8690;
                    /* try { // try from 00edd5a8 to 00fdd5b3 has its CatchHandler @ 00edd6b8 */
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
  }
                    /* try { // try from 00edd5b4 to 00fdd733 has its CatchHandler @ 00edd1e4 */
                    /* catch() { ... } // from try @ 00edd438 with catch @ 00edd5b8 */
  Action::~Action((Action *)(this + -0x28));
  return;
}

