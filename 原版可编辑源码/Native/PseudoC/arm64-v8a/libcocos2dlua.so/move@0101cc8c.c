
/* cocos2d::NavMeshAgent::move(cocos2d::Vec3 const&, std::__ndk1::function<void
   (cocos2d::NavMeshAgent*, float)> const&) */

void __thiscall cocos2d::NavMeshAgent::move(NavMeshAgent *this,Vec3 *param_1,function *param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  local_50 = alStack_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar4 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0xb0) = uVar4;
  plVar2 = *(long **)(param_2 + 0x20);
  if (plVar2 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if ((long *)param_2 == plVar2) {
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  FUN_0101d4a8(alStack_70,this + 0x50);
  if (alStack_70 == local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
  }
  else {
                    /* catch() { ... } // from try @ 0101cdc0 with catch @ 0101cd20 */
    if (local_50 == (long *)0x0) goto LAB_0101cd3c;
    pcVar3 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar3)();
LAB_0101cd3c:
  *(undefined2 *)(this + 0xd0) = 0x101;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

