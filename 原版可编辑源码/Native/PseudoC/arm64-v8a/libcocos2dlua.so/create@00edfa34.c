
/* cocos2d::MoveTo::create(float, cocos2d::Vec3 const&) */

Action * cocos2d::MoveTo::create(float param_1,Vec3 *param_2)

{
  Action *this;
  undefined8 uVar1;
  float fVar2;
  
  this = operator_new(0x88,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    this[0x56] = (Action)0x0;
    *(undefined ***)this = &PTR__Action_016f8b70;
                    /* try { // try from 00edfa90 to 00fdfaff has its CatchHandler @ 00edfa90
                       catch() { ... } // from try @ 00edfa90 with catch @ 00edfa90
                       catch() { ... } // from try @ 00edfb14 with catch @ 00edfa90 */
    *(undefined ***)(this + 0x28) = &PTR_clone_016f8bd0;
    Vec3::Vec3((Vec3 *)(this + 0x58));
    Vec3::Vec3((Vec3 *)(this + 100));
    Vec3::Vec3((Vec3 *)(this + 0x70));
    *(undefined ***)this = &PTR__Action_016f8c10;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f8c70;
    Vec3::Vec3((Vec3 *)(this + 0x7c));
    fVar2 = 1e-06;
    if (1e-06 < ABS(param_1)) {
      fVar2 = param_1;
    }
    *(undefined4 *)(this + 0x50) = 0;
    *(undefined2 *)(this + 0x54) = 1;
    *(float *)(this + 0x4c) = fVar2;
    uVar1 = *(undefined8 *)param_2;
                    /* try { // try from 00edfb00 to 00fdfb13 has its CatchHandler @ 00edfb4c */
    *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_2 + 8);
    *(undefined8 *)(this + 0x7c) = uVar1;
    Ref::autorelease((Ref *)this);
  }
                    /* try { // try from 00edfb14 to 00fdfb67 has its CatchHandler @ 00edfa90 */
  return this;
}

