
/* non-virtual thunk to cocos2d::EaseSineInOut::~EaseSineInOut() */

void __thiscall cocos2d::EaseSineInOut::~EaseSineInOut(EaseSineInOut *this)

{
  Action *this_00;
  
                    /* catch() { ... } // from try @ 00ed22e8 with catch @ 00ed2764 */
                    /* catch() { ... } // from try @ 00ed2264 with catch @ 00ed2768 */
                    /* catch() { ... } // from try @ 00ed220c with catch @ 00ed276c */
                    /* catch() { ... } // from try @ 00ed2220 with catch @ 00ed2770
                       catch() { ... } // from try @ 00ed26f4 with catch @ 00ed2770 */
                    /* catch() { ... } // from try @ 00ed2144 with catch @ 00ed2774 */
                    /* catch() { ... } // from try @ 00ed20ec with catch @ 00ed2778 */
                    /* catch() { ... } // from try @ 00ed2510 with catch @ 00ed277c */
  this_00 = (Action *)(this + -0x28);
  *(undefined ***)this_00 = &PTR__ActionEase_016f5ab0;
                    /* catch() { ... } // from try @ 00ed2100 with catch @ 00ed278c
                       catch() { ... } // from try @ 00ed26dc with catch @ 00ed278c */
                    /* catch() { ... } // from try @ 00ed1f94 with catch @ 00ed2790 */
  *(undefined ***)this = &PTR_clone_016f5b18;
                    /* catch() { ... } // from try @ 00ed1f14 with catch @ 00ed2794 */
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
                    /* catch() { ... } // from try @ 00ed1ea8 with catch @ 00ed2798 */
    Ref::release(*(Ref **)(this + 0x30));
  }
                    /* catch() { ... } // from try @ 00ed228c with catch @ 00ed279c
                       catch() { ... } // from try @ 00ed270c with catch @ 00ed279c */
                    /* catch() { ... } // from try @ 00ed24c8 with catch @ 00ed27a0 */
  Action::~Action(this_00);
                    /* catch() { ... } // from try @ 00ed2158 with catch @ 00ed27a4
                       catch() { ... } // from try @ 00ed22fc with catch @ 00ed27a4
                       catch() { ... } // from try @ 00ed26e8 with catch @ 00ed27a4
                       catch() { ... } // from try @ 00ed2700 with catch @ 00ed27a4 */
  operator_delete(this_00);
  return;
}

