
/* cocos2d::NavMeshAgent::syncToAgent() */

void __thiscall cocos2d::NavMeshAgent::syncToAgent(NavMeshAgent *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined5 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int7 local_88;
  Mat4 aMStack_78 [48];
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(dtCrowd **)(this + 0xe0) != (dtCrowd *)0x0) {
    lVar4 = dtCrowd::getEditableAgent(*(dtCrowd **)(this + 0xe0),*(int *)(this + 0xcc));
    (**(code **)(**(long **)(this + 0x28) + 0x430))(aMStack_78,*(long **)(this + 0x28));
    *(undefined8 *)(lVar4 + 0x1a0) = local_48;
    *(undefined4 *)(lVar4 + 0x1a8) = local_40;
    if (this[0xd0] != (NavMeshAgent)0x0) {
      uVar2 = *(undefined8 *)(this + 0x90);
      local_88 = (uint7)*(ushort *)(this + 0x9d) << 0x28;
      uVar6 = *(undefined8 *)(this + 0x88);
      uVar5 = *(undefined8 *)(this + 0x80);
      uVar3 = *(undefined5 *)(this + 0x98);
      *(undefined8 *)(lVar4 + 0x200) = 0;
      *(undefined8 *)(lVar4 + 0x1e8) = uVar6;
      *(undefined8 *)(lVar4 + 0x1e0) = uVar5;
      *(ulong *)(lVar4 + 0x1f8) = CONCAT35((uint3)((uint7)local_88 >> 0x28),uVar3);
      *(undefined8 *)(lVar4 + 0x1f0) = uVar2;
      *(NavMeshAgent *)(lVar4 + 1) = this[200];
      this[0xd0] = (NavMeshAgent)0x0;
    }
    Mat4::~Mat4(aMStack_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

