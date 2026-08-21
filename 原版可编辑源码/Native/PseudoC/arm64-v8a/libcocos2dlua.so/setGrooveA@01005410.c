
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* cocos2d::PhysicsJointGroove::setGrooveA(cocos2d::Vec2 const&) */

void __thiscall cocos2d::PhysicsJointGroove::setGrooveA(PhysicsJointGroove *this,Vec2 *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined **local_70;
  PhysicsJointGroove *pPStack_68;
  undefined8 local_60;
  long *local_50;
  long local_38;
  
                    /* try { // try from 01005424 to 0110542f has its CatchHandler @ 01005534 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (this[100] == (PhysicsJointGroove)0x0) {
    cpGrooveJointSetGrooveA
              (*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),**(undefined8 **)(this + 8));
  }
  else {
    puVar3 = *(undefined1 **)(this + 0x50);
    uVar5 = *(undefined8 *)param_1;
    *puVar3 = 1;
    *(undefined8 *)(puVar3 + 4) = uVar5;
    local_60 = *(undefined8 *)param_1;
    local_70 = &PTR_FUN_01725918;
                    /* try { // try from 010054a0 to 011054a7 has its CatchHandler @ 01005518 */
    lVar1 = *(long *)(this + 0x28);
    pPStack_68 = this;
                    /* try { // try from 010054a8 to 011054b3 has its CatchHandler @ 010054f8 */
    if (lVar1 == *(long *)(this + 0x30)) {
                    /* try { // try from 010054d0 to 011054d7 has its CatchHandler @ 010054f4 */
      local_50 = (long *)&local_70;
                    /* try { // try from 010054d8 to 0110554f has its CatchHandler @ 010053b8 */
      std::__ndk1::
      vector<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>::
      __push_back_slow_path<std::__ndk1::function<void()>const&>
                ((vector<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
                  *)(this + 0x20),(function *)&local_70);
    }
    else {
      *(long *)(lVar1 + 0x20) = lVar1;
      local_50 = (long *)&local_70;
      FUN_01007d54(FUN_01007d54,&local_70,lVar1);
      *(long *)(this + 0x28) = lVar1 + 0x30;
    }
    if (&local_70 == (undefined ***)local_50) {
      pcVar4 = *(code **)(*local_50 + 0x20);
    }
    else {
      if (local_50 == (long *)0x0) goto LAB_0100544c;
                    /* catch() { ... } // from try @ 010054d0 with catch @ 010054f4 */
      pcVar4 = *(code **)(*local_50 + 0x28);
                    /* catch() { ... } // from try @ 010054a8 with catch @ 010054f8 */
    }
    (*pcVar4)();
  }
LAB_0100544c:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

