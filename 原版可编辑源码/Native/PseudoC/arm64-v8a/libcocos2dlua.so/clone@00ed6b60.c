
/* cocos2d::Lens3D::clone() const */

Action * __thiscall cocos2d::Lens3D::clone(Lens3D *this)

{
  undefined4 uVar1;
  Action *this_00;
  ulong uVar2;
  undefined8 uVar3;
  
                    /* try { // try from 00ed6b74 to 00fd6bcf has its CatchHandler @ 00ed6968 */
  this_00 = operator_new(0x80,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
    *(undefined ***)this_00 = &PTR__Action_016f7408;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f7470;
                    /* catch() { ... } // from try @ 00ed6b54 with catch @ 00ed6bb4 */
    Size::Size((Size *)(this_00 + 0x58));
    *(undefined8 *)(this_00 + 0x68) = 0;
    *(undefined ***)this_00 = &PTR__Action_016f7990;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f79f8;
  }
  uVar1 = *(undefined4 *)(this + 0x70);
  uVar2 = GridAction::initWithDuration
                    ((GridAction *)this_00,*(float *)(this + 0x4c),(Size *)(this + 0x58));
  if ((uVar2 & 1) != 0) {
    uVar3 = NEON_fmov(0xbf800000,4);
    *(undefined8 *)(this_00 + 0x68) = uVar3;
    uVar2 = Vec2::equals((Vec2 *)(this + 0x68),this_00 + 0x68);
    if ((uVar2 & 1) == 0) {
      uVar3 = *(undefined8 *)(this + 0x68);
      this_00[0x79] = (Action)0x1;
      *(undefined8 *)(this_00 + 0x68) = uVar3;
    }
    *(undefined4 *)(this_00 + 0x70) = uVar1;
    *(undefined4 *)(this_00 + 0x74) = 0x3f333333;
    *(undefined2 *)(this_00 + 0x78) = 0x100;
  }
  Ref::autorelease((Ref *)this_00);
  return this_00;
}

