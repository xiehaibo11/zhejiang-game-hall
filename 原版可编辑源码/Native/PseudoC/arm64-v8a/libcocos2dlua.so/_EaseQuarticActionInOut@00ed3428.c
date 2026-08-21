
/* cocos2d::EaseQuarticActionInOut::~EaseQuarticActionInOut() */

void __thiscall
cocos2d::EaseQuarticActionInOut::~EaseQuarticActionInOut(EaseQuarticActionInOut *this)

{
  *(undefined ***)this = &PTR__ActionEase_016f5ab0;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f5b18;
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
  }
  Action::~Action((Action *)this);
                    /* try { // try from 00ed3468 to 00fd34bb has its CatchHandler @ 00ed3468
                       catch() { ... } // from try @ 00ed3468 with catch @ 00ed3468
                       catch() { ... } // from try @ 00ed34c4 with catch @ 00ed3468 */
  operator_delete(this);
  return;
}

