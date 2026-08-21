
/* cocos2d::PageTurn3D::create(float, cocos2d::Size const&) */

Action * cocos2d::PageTurn3D::create(float param_1,Size *param_2)

{
  Action *this;
  ulong uVar1;
  
                    /* try { // try from 00ee7bd4 to 00fe7be3 has its CatchHandler @ 00ee7c18 */
  this = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
                    /* try { // try from 00ee7be4 to 00fe7c33 has its CatchHandler @ 00ee7b78 */
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__Action_016f7408;
                    /* catch() { ... } // from try @ 00ee7bd4 with catch @ 00ee7c18 */
    *(undefined ***)(this + 0x28) = &PTR_clone_016f7470;
    Size::Size((Size *)(this + 0x58));
                    /* try { // try from 00ee7c34 to 00fe7c6f has its CatchHandler @ 00ee7c34
                       catch() { ... } // from try @ 00ee7c34 with catch @ 00ee7c34
                       catch() { ... } // from try @ 00ee7c84 with catch @ 00ee7c34 */
    *(undefined ***)this = &PTR__Action_016f9938;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f99a0;
    uVar1 = GridAction::initWithDuration((GridAction *)this,param_1,param_2);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Action *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
                    /* try { // try from 00ee7c70 to 00fe7c83 has its CatchHandler @ 00ee7cbc */
  return this;
}

