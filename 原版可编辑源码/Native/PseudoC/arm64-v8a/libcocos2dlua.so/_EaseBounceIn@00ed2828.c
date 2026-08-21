
/* non-virtual thunk to cocos2d::EaseBounceIn::~EaseBounceIn() */

void __thiscall cocos2d::EaseBounceIn::~EaseBounceIn(EaseBounceIn *this)

{
                    /* catch() { ... } // from try @ 00ed1b54 with catch @ 00ed2828
                       catch() { ... } // from try @ 00ed2694 with catch @ 00ed2828 */
                    /* catch() { ... } // from try @ 00ed1af4 with catch @ 00ed282c
                       catch() { ... } // from try @ 00ed2688 with catch @ 00ed282c */
                    /* catch() { ... } // from try @ 00ed2564 with catch @ 00ed2830 */
                    /* catch() { ... } // from try @ 00ed19e4 with catch @ 00ed2840
                       catch() { ... } // from try @ 00ed2678 with catch @ 00ed2840 */
  *(undefined ***)(this + -0x28) = &PTR__ActionEase_016f5ab0;
                    /* catch() { ... } // from try @ 00ed19c8 with catch @ 00ed2850 */
  *(undefined ***)this = &PTR_clone_016f5b18;
                    /* catch() { ... } // from try @ 00ed1944 with catch @ 00ed2858 */
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
  }
  Action::~Action((Action *)(this + -0x28));
  return;
}

