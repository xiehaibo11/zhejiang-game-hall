
void FUN_010eca5c(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long in_x4;
  uint *in_x5;
  int in_w6;
  uint uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 600);
  uVar5 = *(uint *)(lVar6 + 0x28);
  if (uVar5 == 0) {
    lVar4 = (**(code **)(*(long *)(param_1 + 8) + 0x38))
                      (param_1,*(undefined8 *)(lVar6 + 0x10),*(undefined4 *)(lVar6 + 0x24),
                       *(undefined4 *)(lVar6 + 0x20),0);
    uVar5 = *(uint *)(lVar6 + 0x28);
    *(long *)(lVar6 + 0x18) = lVar4;
  }
  else {
    lVar4 = *(long *)(lVar6 + 0x18);
  }
  uVar1 = *(int *)(lVar6 + 0x20) - uVar5;
  uVar2 = in_w6 - *in_x5;
  uVar3 = *(int *)(param_1 + 0x8c) - *(int *)(lVar6 + 0x24);
  if (uVar1 <= uVar2) {
    uVar2 = uVar1;
  }
  if (uVar2 <= uVar3) {
    uVar3 = uVar2;
  }
  (**(code **)(*(long *)(param_1 + 0x290) + 8))
            (param_1,lVar4 + (ulong)uVar5 * 8,in_x4 + (ulong)*in_x5 * 8,uVar3);
  *in_x5 = *in_x5 + uVar3;
  uVar3 = *(int *)(lVar6 + 0x28) + uVar3;
  *(uint *)(lVar6 + 0x28) = uVar3;
  if (*(uint *)(lVar6 + 0x20) <= uVar3) {
    *(uint *)(lVar6 + 0x24) = *(int *)(lVar6 + 0x24) + *(uint *)(lVar6 + 0x20);
    *(undefined4 *)(lVar6 + 0x28) = 0;
  }
  return;
}

