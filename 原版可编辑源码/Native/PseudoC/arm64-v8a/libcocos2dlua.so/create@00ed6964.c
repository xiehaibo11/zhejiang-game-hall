
/* cocos2d::Lens3D::create(float, cocos2d::Size const&, cocos2d::Vec2 const&, float) */

Action * cocos2d::Lens3D::create(float param_1,Size *param_2,Vec2 *param_3,float param_4)

{
  Action *this;
  ulong uVar1;
  Action *pAVar2;
  undefined8 uVar3;
  
                    /* try { // try from 00ed6968 to 00fd6b53 has its CatchHandler @ 00ed6968
                       catch() { ... } // from try @ 00ed6968 with catch @ 00ed6968
                       catch() { ... } // from try @ 00ed6b74 with catch @ 00ed6968 */
  this = operator_new(0x80,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__Action_016f7408;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f7470;
    Size::Size((Size *)(this + 0x58));
    *(undefined ***)this = &PTR__Action_016f7990;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f79f8;
    pAVar2 = this + 0x68;
    *(undefined4 *)pAVar2 = 0;
    *(undefined4 *)(this + 0x6c) = 0;
    uVar1 = GridAction::initWithDuration((GridAction *)this,param_1,param_2);
    if ((uVar1 & 1) == 0) {
      Ref::release((Ref *)this);
      this = (Action *)0x0;
    }
    else {
      uVar3 = NEON_fmov(0xbf800000,4);
      *(undefined8 *)pAVar2 = uVar3;
      uVar1 = Vec2::equals((Vec2 *)param_3,pAVar2);
      if ((uVar1 & 1) == 0) {
        uVar3 = *(undefined8 *)param_3;
        this[0x79] = (Action)0x1;
        *(undefined8 *)(this + 0x68) = uVar3;
      }
      *(float *)(this + 0x70) = param_4;
      *(undefined4 *)(this + 0x74) = 0x3f333333;
      *(undefined2 *)(this + 0x78) = 0x100;
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

