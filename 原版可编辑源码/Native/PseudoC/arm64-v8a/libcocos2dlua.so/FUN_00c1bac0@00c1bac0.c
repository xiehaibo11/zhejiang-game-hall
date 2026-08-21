
void FUN_00c1bac0(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (*(int *)(param_2 + 0x34) != 0) {
    uVar5 = (ulong)(*(int *)(param_2 + 0x34) + 1);
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    *(ulong *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + uVar5 * -0x18;
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),uVar4,uVar5 * 0x18,0);
  }
  uVar2 = *(uint *)(param_2 + 0x30);
  if (uVar2 != 0) {
    cVar3 = *(char *)(param_2 + 0xb);
    if ('\0' < cVar3) goto LAB_00c1baf0;
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    *(ulong *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + (ulong)uVar2 * -8;
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),uVar4,(ulong)uVar2 * 8,0);
  }
  cVar3 = *(char *)(param_2 + 0xb);
  if (cVar3 == '\0') {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x40;
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),param_2,0x40,0);
    return;
  }
LAB_00c1baf0:
  lVar1 = ((long)cVar3 & 0x7fU) + 8;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + lVar1 * -8;
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),param_2,lVar1 * 8,0);
  return;
}

