
/* covariant return thunk to cocosbuilder::CCBRotateTo::clone() const */

Action * __thiscall cocosbuilder::CCBRotateTo::clone(CCBRotateTo *this)

{
  Action *pAVar1;
  undefined4 uVar2;
  Action *this_00;
  ulong uVar3;
  
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
    *(undefined ***)this_00 = &PTR__Action_016cf270;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016cf2d0;
  }
  uVar2 = *(undefined4 *)(this + 0x34);
  uVar3 = cocos2d::ActionInterval::initWithDuration
                    ((ActionInterval *)this_00,*(float *)(this + 0x24));
  if ((uVar3 & 1) != 0) {
    *(undefined4 *)(this_00 + 0x5c) = uVar2;
  }
  cocos2d::Ref::autorelease((Ref *)this_00);
  pAVar1 = (Action *)0x0;
  if (this_00 != (Action *)0x0) {
    pAVar1 = this_00 + 0x28;
  }
  return pAVar1;
}

