
/* cocos2d::Twirl::clone() const */

Action * __thiscall cocos2d::Twirl::clone(Twirl *this)

{
  Action *this_00;
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  this_00 = operator_new(0x80,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00ed8000 to 00fd800f has its CatchHandler @ 00ed8618 */
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
                    /* try { // try from 00ed8018 to 00fd8023 has its CatchHandler @ 00ed8608 */
    *(undefined ***)this_00 = &PTR__Action_016f7408;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f7470;
    Size::Size((Size *)(this_00 + 0x58));
    *(undefined8 *)(this_00 + 0x68) = 0;
    *(undefined ***)this_00 = &PTR__Action_016f7cd8;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f7d40;
  }
  uVar3 = *(undefined8 *)(this + 0x70);
  uVar1 = GridAction::initWithDuration
                    ((GridAction *)this_00,*(float *)(this + 0x4c),(Size *)(this + 0x58));
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)(this + 0x68);
    *(undefined4 *)(this_00 + 0x78) = 0x3f800000;
    *(undefined8 *)(this_00 + 0x68) = uVar2;
    *(undefined8 *)(this_00 + 0x70) = uVar3;
  }
  Ref::autorelease((Ref *)this_00);
                    /* try { // try from 00ed8088 to 00fd80ab has its CatchHandler @ 00ed8684 */
  return this_00;
}

