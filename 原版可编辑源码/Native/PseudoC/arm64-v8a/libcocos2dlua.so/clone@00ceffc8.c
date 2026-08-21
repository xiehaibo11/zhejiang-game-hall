
/* cocosbuilder::CCBEaseInstant::clone() const */

Action * __thiscall cocosbuilder::CCBEaseInstant::clone(CCBEaseInstant *this)

{
  Action *this_00;
  
  this_00 = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
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
    *(undefined8 *)(this_00 + 0x58) = 0;
    *(undefined ***)this_00 = &PTR__ActionEase_016cf450;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016cf4b8;
  }
  cocos2d::ActionEase::initWithAction((ActionEase *)this_00,*(ActionInterval **)(this + 0x58));
  cocos2d::Ref::autorelease((Ref *)this_00);
  return this_00;
}

