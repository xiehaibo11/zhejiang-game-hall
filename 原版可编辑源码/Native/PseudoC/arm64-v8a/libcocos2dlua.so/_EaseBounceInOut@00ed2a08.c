
/* cocos2d::EaseBounceInOut::~EaseBounceInOut() */

void __thiscall cocos2d::EaseBounceInOut::~EaseBounceInOut(EaseBounceInOut *this)

{
                    /* try { // try from 00ed2a0c to 00fd2ac7 has its CatchHandler @ 00ed2970 */
  *(undefined ***)this = &PTR__ActionEase_016f5ab0;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f5b18;
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
  }
  Action::~Action((Action *)this);
                    /* catch() { ... } // from try @ 00ed29dc with catch @ 00ed2a50 */
  operator_delete(this);
  return;
}

