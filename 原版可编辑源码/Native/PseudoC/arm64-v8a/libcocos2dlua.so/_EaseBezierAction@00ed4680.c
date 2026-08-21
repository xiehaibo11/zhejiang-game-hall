
/* cocos2d::EaseBezierAction::~EaseBezierAction() */

void __thiscall cocos2d::EaseBezierAction::~EaseBezierAction(EaseBezierAction *this)

{
  *(undefined ***)this = &PTR__ActionEase_016f5ab0;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f5b18;
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
  }
  Action::~Action((Action *)this);
                    /* try { // try from 00ed46c8 to 00fd46cb has its CatchHandler @ 00ed4714 */
  operator_delete(this);
  return;
}

