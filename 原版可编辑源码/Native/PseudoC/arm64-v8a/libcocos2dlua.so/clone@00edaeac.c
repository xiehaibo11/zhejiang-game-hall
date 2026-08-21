
/* cocos2d::CallFuncN::clone() const */

Action * __thiscall cocos2d::CallFuncN::clone(CallFuncN *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  Action *this_00;
  CallFuncN *pCVar4;
  code *pcVar5;
  Ref *this_01;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00edaed8 to 00fdaee7 has its CatchHandler @ 00edb230 */
  this_00 = operator_new(0xd0,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00edaee8 to 00fdaef3 has its CatchHandler @ 00edb22c */
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
    *(undefined8 *)(this_00 + 0x90) = 0;
    *(undefined8 *)(this_00 + 0x60) = 0;
    *(undefined8 *)(this_00 + 0x68) = 0;
    *(undefined8 *)(this_00 + 0x58) = 0;
                    /* try { // try from 00edaf0c to 00fdaf1b has its CatchHandler @ 00edb210 */
    *(undefined8 *)(this_00 + 0xc0) = 0;
    *(undefined ***)this_00 = &PTR__CallFuncN_016f83b8;
                    /* try { // try from 00edaf1c to 00fdaf37 has its CatchHandler @ 00edb274 */
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f8420;
  }
  this_01 = *(Ref **)(this + 0x58);
  if (this_01 == (Ref *)0x0) {
    pCVar4 = *(CallFuncN **)(this + 0xc0);
    if (pCVar4 != (CallFuncN *)0x0) {
      if (this + 0xa0 == pCVar4) {
        local_60 = alStack_80;
        (**(code **)(*(long *)pCVar4 + 0x18))(pCVar4,alStack_80);
      }
      else {
        local_60 = (long *)(**(code **)(*(long *)pCVar4 + 0x10))();
      }
                    /* try { // try from 00edaf90 to 00fdaf9f has its CatchHandler @ 00edb228 */
      FUN_00edbd1c(alStack_80,this_00 + 0xa0);
                    /* try { // try from 00edafa0 to 00fdafab has its CatchHandler @ 00edb224 */
      if (alStack_80 == local_60) {
        pcVar5 = *(code **)(*local_60 + 0x20);
      }
      else {
        if (local_60 == (long *)0x0) goto LAB_00edafc4;
        pcVar5 = *(code **)(*local_60 + 0x28);
      }
      (*pcVar5)();
    }
  }
  else {
    uVar1 = *(undefined8 *)(this + 0x60);
    uVar2 = *(undefined8 *)(this + 0x68);
    Ref::retain(this_01);
    if (*(Ref **)(this_00 + 0x58) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this_00 + 0x58));
    }
    *(Ref **)(this_00 + 0x58) = this_01;
    *(undefined8 *)(this_00 + 0x60) = uVar1;
    *(undefined8 *)(this_00 + 0x68) = uVar2;
  }
LAB_00edafc4:
                    /* try { // try from 00edafc4 to 00fdafd3 has its CatchHandler @ 00edb20c */
  Ref::autorelease((Ref *)this_00);
                    /* try { // try from 00edafd4 to 00fdafeb has its CatchHandler @ 00edb248 */
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

