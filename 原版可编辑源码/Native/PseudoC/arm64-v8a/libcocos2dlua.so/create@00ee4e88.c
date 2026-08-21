
/* cocos2d::ActionFloat::create(float, float, float, std::__ndk1::function<void (float)>) */

Action * cocos2d::ActionFloat::create
                   (float param_1,undefined4 param_2,undefined4 param_3,long *param_4)

{
  long lVar1;
  Action *this;
  long *plVar2;
  code *pcVar3;
  float fVar4;
  long local_b0 [4];
  long *local_90;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = operator_new(0xa0,(nothrow_t *)&std::nothrow);
  if (this == (Action *)0x0) goto LAB_00ee5024;
  Action::Action(this);
                    /* try { // try from 00ee4ee0 to 00fe4fcb has its CatchHandler @ 00ee5008 */
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined ***)this = &PTR__ActionFloat_016f96c8;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f9728;
  plVar2 = (long *)param_4[4];
  if (plVar2 == (long *)0x0) {
    local_90 = (long *)0x0;
  }
  else if (param_4 == plVar2) {
    local_90 = local_b0;
    (**(code **)(*plVar2 + 0x18))(plVar2,local_b0);
  }
  else {
    local_90 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  fVar4 = 1e-06;
  if (1e-06 < ABS(param_1)) {
    fVar4 = param_1;
  }
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
  *(float *)(this + 0x4c) = fVar4;
  *(undefined4 *)(this + 0x58) = param_2;
  *(undefined4 *)(this + 0x5c) = param_3;
  if (local_90 == (long *)0x0) {
    local_60 = (long *)0x0;
  }
  else if (local_b0 == local_90) {
    local_60 = alStack_80;
    (**(code **)(*local_90 + 0x18))(local_90,alStack_80);
  }
  else {
    local_60 = (long *)(**(code **)(*local_90 + 0x10))();
  }
  FUN_00ee5dfc(alStack_80,this + 0x70);
                    /* try { // try from 00ee4fcc to 00fe5023 has its CatchHandler @ 00ee4e84 */
  if (alStack_80 == local_60) {
    pcVar3 = *(code **)(*local_60 + 0x20);
LAB_00ee4fec:
    (*pcVar3)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar3 = *(code **)(*local_60 + 0x28);
    goto LAB_00ee4fec;
  }
  if (local_b0 == local_90) {
    pcVar3 = *(code **)(*local_90 + 0x20);
LAB_00ee5018:
    (*pcVar3)();
  }
  else if (local_90 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00ee4ee0 with catch @ 00ee5008 */
    pcVar3 = *(code **)(*local_90 + 0x28);
    goto LAB_00ee5018;
  }
  Ref::autorelease((Ref *)this);
LAB_00ee5024:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

