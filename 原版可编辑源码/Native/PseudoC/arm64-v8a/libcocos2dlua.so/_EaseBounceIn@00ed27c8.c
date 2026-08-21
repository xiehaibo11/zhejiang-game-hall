
/* cocos2d::EaseBounceIn::~EaseBounceIn() */

void __thiscall cocos2d::EaseBounceIn::~EaseBounceIn(EaseBounceIn *this)

{
                    /* catch() { ... } // from try @ 00ed1f28 with catch @ 00ed27d8 */
                    /* catch() { ... } // from try @ 00ed1dd8 with catch @ 00ed27dc */
                    /* catch() { ... } // from try @ 00ed1b14 with catch @ 00ed27e0 */
  *(undefined ***)this = &PTR__ActionEase_016f5ab0;
                    /* catch() { ... } // from try @ 00ed1fa4 with catch @ 00ed27f0 */
  *(undefined ***)(this + 0x28) = &PTR_clone_016f5b18;
                    /* catch() { ... } // from try @ 00ed1d58 with catch @ 00ed27f4 */
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
                    /* catch() { ... } // from try @ 00ed1bec with catch @ 00ed27f8 */
    Ref::release(*(Ref **)(this + 0x58));
  }
                    /* catch() { ... } // from try @ 00ed1bd0 with catch @ 00ed27fc */
                    /* catch() { ... } // from try @ 00ed1bb4 with catch @ 00ed2800 */
  Action::~Action((Action *)this);
                    /* catch() { ... } // from try @ 00ed1b40 with catch @ 00ed2804 */
                    /* catch() { ... } // from try @ 00ed1ae0 with catch @ 00ed2808 */
                    /* catch() { ... } // from try @ 00ed1a90 with catch @ 00ed280c */
                    /* catch() { ... } // from try @ 00ed1a38 with catch @ 00ed2810 */
  operator_delete(this);
  return;
}

