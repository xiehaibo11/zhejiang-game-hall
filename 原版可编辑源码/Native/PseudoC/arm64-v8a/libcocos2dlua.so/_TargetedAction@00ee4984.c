
/* cocos2d::TargetedAction::~TargetedAction() */

void __thiscall cocos2d::TargetedAction::~TargetedAction(TargetedAction *this)

{
                    /* try { // try from 00ee498c to 00fe4993 has its CatchHandler @ 00ee4a24 */
                    /* try { // try from 00ee4994 to 00fe49b3 has its CatchHandler @ 00ee48c4 */
  *(undefined ***)this = &PTR__TargetedAction_016f89e8;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f8a48;
  if (*(Ref **)(this + 0x60) != (Ref *)0x0) {
                    /* try { // try from 00ee49b4 to 00fe49bb has its CatchHandler @ 00ee4a24 */
    Ref::release(*(Ref **)(this + 0x60));
  }
                    /* try { // try from 00ee49bc to 00fe49db has its CatchHandler @ 00ee48c4 */
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
  }
  Action::~Action((Action *)this);
  return;
}

