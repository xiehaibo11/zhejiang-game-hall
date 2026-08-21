
/* cocos2d::Ripple3D::create(float, cocos2d::Size const&, cocos2d::Vec2 const&, float, unsigned int,
   float) */

Action * cocos2d::Ripple3D::create
                   (float param_1,Size *param_2,Vec2 *param_3,float param_4,uint param_5,
                   float param_6)

{
  Action *this;
  ulong uVar1;
  undefined8 uVar2;
  
                    /* try { // try from 00ed6e68 to 00fd6ee7 has its CatchHandler @ 00ed6e68
                       catch(type#1 @ 00000000) { ... } // from try @ 00ed6e68 with catch @ 00ed6e68
                       catch(type#1 @ 00000000) { ... } // from try @ 00ed6eec with catch @ 00ed6e68
                       catch(type#1 @ 00000000) { ... } // from try @ 00ed70dc with catch @ 00ed6e68
                       catch(type#1 @ 00000000) { ... } // from try @ 00ed7220 with catch @ 00ed6e68
                        */
  this = operator_new(0x80,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__Action_016f7408;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f7470;
    Size::Size((Size *)(this + 0x58));
                    /* try { // try from 00ed6ee8 to 00fd6eeb has its CatchHandler @ 00ed7508 */
                    /* try { // try from 00ed6eec to 00fd70bb has its CatchHandler @ 00ed6e68 */
    *(undefined ***)this = &PTR__Action_016f7a38;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f7aa0;
    *(undefined8 *)(this + 0x68) = 0;
    uVar1 = GridAction::initWithDuration((GridAction *)this,param_1,param_2);
    if ((uVar1 & 1) == 0) {
      Ref::release((Ref *)this);
      this = (Action *)0x0;
    }
    else {
      uVar2 = *(undefined8 *)param_3;
      *(float *)(this + 0x70) = param_4;
      *(uint *)(this + 0x74) = param_5;
      *(float *)(this + 0x78) = param_6;
      *(undefined8 *)(this + 0x68) = uVar2;
      *(undefined4 *)(this + 0x7c) = 0x3f800000;
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

