
/* cocos2d::FlipY3D::clone() const */

Action * __thiscall cocos2d::FlipY3D::clone(FlipY3D *this)

{
  Action *this_00;
  
  this_00 = operator_new(0x68,(nothrow_t *)&std::nothrow);
  Action::Action(this_00);
  *(undefined4 *)(this_00 + 0x4c) = 0;
  *(undefined ***)this_00 = &PTR__Action_016f7408;
  *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f7470;
  Size::Size((Size *)(this_00 + 0x58));
  *(undefined ***)this_00 = &PTR__Action_016f78e0;
  *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f7950;
                    /* catch() { ... } // from try @ 00ed6518 with catch @ 00ed65ac */
  if ((*(float *)(this + 0x58) == 1.0) && (*(float *)(this + 0x5c) == 1.0)) {
    GridAction::initWithDuration
              ((GridAction *)this_00,*(float *)(this + 0x4c),(Size *)(this + 0x58));
  }
  Ref::autorelease((Ref *)this_00);
  return this_00;
}

