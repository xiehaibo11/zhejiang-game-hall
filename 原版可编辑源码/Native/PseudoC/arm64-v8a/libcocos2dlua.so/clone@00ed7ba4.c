
/* cocos2d::Waves::clone() const */

Action * __thiscall cocos2d::Waves::clone(Waves *this)

{
  Waves WVar1;
  Waves WVar2;
  Action *this_00;
  ulong uVar3;
  undefined8 uVar4;
  
                    /* try { // try from 00ed7bac to 00fd7bcb has its CatchHandler @ 00ed8638 */
  this_00 = operator_new(0x78,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
                    /* try { // try from 00ed7bec to 00fd7c0b has its CatchHandler @ 00ed86bc */
    *(undefined ***)this_00 = &PTR__Action_016f7408;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f7470;
    Size::Size((Size *)(this_00 + 0x58));
                    /* try { // try from 00ed7c0c to 00fd7c1f has its CatchHandler @ 00ed788c */
    *(undefined ***)this_00 = &PTR__Action_016f7c30;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f7c98;
  }
  uVar4 = *(undefined8 *)(this + 0x68);
                    /* try { // try from 00ed7c20 to 00fd7c47 has its CatchHandler @ 00ed8670 */
  WVar1 = this[0x75];
  WVar2 = this[0x74];
  uVar3 = GridAction::initWithDuration
                    ((GridAction *)this_00,*(float *)(this + 0x4c),(Size *)(this + 0x58));
  if ((uVar3 & 1) != 0) {
    *(undefined8 *)(this_00 + 0x68) = uVar4;
    *(Waves *)(this_00 + 0x75) = WVar1;
    *(undefined4 *)(this_00 + 0x70) = 0x3f800000;
    *(Waves *)(this_00 + 0x74) = WVar2;
  }
                    /* try { // try from 00ed7c4c to 00fd7c77 has its CatchHandler @ 00ed8674 */
  Ref::autorelease((Ref *)this_00);
  return this_00;
}

