
/* cocos2d::TargetedAction::TargetedAction() */

void __thiscall cocos2d::TargetedAction::TargetedAction(TargetedAction *this)

{
  Action::Action((Action *)this);
                    /* try { // try from 00ee4958 to 00fe4963 has its CatchHandler @ 00ee4a28 */
  *(undefined4 *)(this + 0x4c) = 0;
                    /* try { // try from 00ee4964 to 00fe498b has its CatchHandler @ 00ee48c4 */
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined ***)this = &PTR__TargetedAction_016f89e8;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f8a48;
  return;
}

