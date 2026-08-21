
void FUN_0010877c(long param_1)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  long lVar6;
  int *piVar7;
  ulong local_128;
  undefined1 local_11c;
  undefined1 local_11b;
  undefined1 auStack_118 [128];
  undefined1 auStack_98 [64];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0xd8) == 0) {
    uVar3 = 0xffffffc0;
  }
  else if (*(int *)(param_1 + 0xd8) < 1) {
    uVar3 = 0xffffffc3;
  }
  else {
    lVar6 = 0;
    bVar2 = false;
    piVar7 = (int *)(param_1 + 0x100);
    do {
      local_128 = 0;
      if (*piVar7 == 1) {
        bVar2 = true;
      }
      uVar3 = (**(code **)(piVar7 + -8))(*(undefined8 *)(piVar7 + -6),auStack_118,0x80,&local_128);
      if ((int)uVar3 != 0) goto LAB_00108888;
      if (local_128 != 0) {
        if (local_128 < 0x41) {
          puVar5 = auStack_118;
          uVar3 = local_128;
        }
        else {
          puVar5 = auStack_98;
          thunk_EXT_FUN_00002bb0(auStack_118,local_128,auStack_98,0);
          uVar3 = 0x40;
        }
        local_11c = (undefined1)lVar6;
        local_11b = (undefined1)uVar3;
        thunk_EXT_FUN_00002bb0(param_1,&local_11c,2);
        thunk_EXT_FUN_00002bb0(param_1,puVar5,uVar3);
        *(ulong *)(piVar7 + -4) = *(long *)(piVar7 + -4) + local_128;
      }
      lVar6 = lVar6 + 1;
      piVar7 = piVar7 + 10;
    } while (lVar6 < *(int *)(param_1 + 0xd8));
    uVar4 = 0xffffffc3;
    if (bVar2) {
      uVar4 = 0;
    }
    uVar3 = (ulong)uVar4;
  }
LAB_00108888:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
  thunk_EXT_FUN_00002bb0(uVar3);
  return;
}

