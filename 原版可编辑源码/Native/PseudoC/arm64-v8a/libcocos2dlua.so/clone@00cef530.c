
/* cocosbuilder::CCBSetSpriteFrame::clone() const */

Action * __thiscall cocosbuilder::CCBSetSpriteFrame::clone(CCBSetSpriteFrame *this)

{
  Action *this_00;
  Ref *this_01;
  
  this_00 = operator_new(0x60,(nothrow_t *)&std::nothrow);
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  cocos2d::Action::Action(this_00);
  *(undefined4 *)(this_00 + 0x4c) = 0;
  *(undefined ***)this_00 = &PTR__CCBSetSpriteFrame_016cf118;
  *(undefined ***)(this_00 + 0x28) = &PTR_clone_016cf178;
  this_01 = *(Ref **)(this + 0x58);
  *(Ref **)(this_00 + 0x58) = this_01;
  if (this_01 != (Ref *)0x0) {
    cocos2d::Ref::retain(this_01);
  }
  cocos2d::Ref::autorelease((Ref *)this_00);
  return this_00;
}

