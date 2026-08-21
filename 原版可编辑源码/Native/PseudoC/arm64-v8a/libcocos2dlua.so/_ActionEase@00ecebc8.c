
/* non-virtual thunk to cocos2d::ActionEase::~ActionEase() */

void __thiscall cocos2d::ActionEase::~ActionEase(ActionEase *this)

{
                    /* catch() { ... } // from try @ 00eceaac with catch @ 00ecebe4 */
  *(undefined ***)(this + -0x28) = &PTR__ActionEase_016f5ab0;
  *(undefined ***)this = &PTR_clone_016f5b18;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
  }
                    /* try { // try from 00ecec00 to 00fced33 has its CatchHandler @ 00ecec00
                       catch() { ... } // from try @ 00ecec00 with catch @ 00ecec00
                       catch() { ... } // from try @ 00eceda4 with catch @ 00ecec00
                       catch() { ... } // from try @ 00ecee60 with catch @ 00ecec00
                       catch() { ... } // from try @ 00ecee80 with catch @ 00ecec00 */
  Action::~Action((Action *)(this + -0x28));
  return;
}

