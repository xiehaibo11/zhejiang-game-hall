
/* non-virtual thunk to cocos2d::EaseSineInOut::~EaseSineInOut() */

void __thiscall cocos2d::EaseSineInOut::~EaseSineInOut(EaseSineInOut *this)

{
                    /* try { // try from 00ed270c to 00fd2723 has its CatchHandler @ 00ed279c */
                    /* try { // try from 00ed2724 to 00fd272f has its CatchHandler @ 00ed2740 */
  *(undefined ***)(this + -0x28) = &PTR__ActionEase_016f5ab0;
                    /* catch() { ... } // from try @ 00ed2374 with catch @ 00ed2730
                       try { // try from 00ed2730 to 00fd296f has its CatchHandler @ 00ed1904 */
                    /* catch() { ... } // from try @ 00ed2278 with catch @ 00ed2734 */
  *(undefined ***)this = &PTR_clone_016f5b18;
                    /* catch() { ... } // from try @ 00ed2240 with catch @ 00ed2738 */
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
                    /* catch() { ... } // from try @ 00ed2340 with catch @ 00ed273c */
    Ref::release(*(Ref **)(this + 0x30));
  }
                    /* catch() { ... } // from try @ 00ed2354 with catch @ 00ed2740
                       catch() { ... } // from try @ 00ed2724 with catch @ 00ed2740 */
                    /* catch() { ... } // from try @ 00ed2120 with catch @ 00ed2744 */
  Action::~Action((Action *)(this + -0x28));
  return;
}

