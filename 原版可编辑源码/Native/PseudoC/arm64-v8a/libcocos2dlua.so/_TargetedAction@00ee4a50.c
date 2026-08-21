
/* cocos2d::TargetedAction::~TargetedAction() */

void __thiscall cocos2d::TargetedAction::~TargetedAction(TargetedAction *this)

{
  *(undefined ***)this = &PTR__TargetedAction_016f89e8;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f8a48;
  if (*(Ref **)(this + 0x60) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x60));
  }
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
  }
                    /* try { // try from 00ee4a94 to 00fe4a9b has its CatchHandler @ 00ee4b90 */
  Action::~Action((Action *)this);
                    /* try { // try from 00ee4a9c to 00fe4abf has its CatchHandler @ 00ee4a2c */
  operator_delete(this);
  return;
}

