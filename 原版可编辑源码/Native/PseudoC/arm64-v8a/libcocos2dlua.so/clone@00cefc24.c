
/* cocosbuilder::CCBRotateXTo::clone() const */

Action * __thiscall cocosbuilder::CCBRotateXTo::clone(CCBRotateXTo *this)

{
  undefined4 uVar1;
  Action *this_00;
  ulong uVar2;
  
  this_00 = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    *(undefined8 *)(this_00 + 0x60) = 0;
    *(undefined8 *)(this_00 + 0x48) = 0;
    *(undefined8 *)(this_00 + 0x40) = 0;
    *(undefined8 *)(this_00 + 0x58) = 0;
    *(undefined8 *)(this_00 + 0x50) = 0;
    *(undefined8 *)(this_00 + 0x28) = 0;
    *(undefined8 *)(this_00 + 0x20) = 0;
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(undefined8 *)(this_00 + 0x30) = 0;
    *(undefined8 *)(this_00 + 8) = 0;
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)(this_00 + 0x18) = 0;
    *(undefined8 *)(this_00 + 0x10) = 0;
    cocos2d::Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
    *(undefined ***)this_00 = &PTR__Action_016cf310;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016cf370;
  }
  uVar1 = *(undefined4 *)(this + 0x5c);
  uVar2 = cocos2d::ActionInterval::initWithDuration
                    ((ActionInterval *)this_00,*(float *)(this + 0x4c));
  if ((uVar2 & 1) != 0) {
    *(undefined4 *)(this_00 + 0x5c) = uVar1;
  }
  cocos2d::Ref::autorelease((Ref *)this_00);
  return this_00;
}

