
long * FUN_00bffab4(long *param_1,ulong param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  undefined1 *__dest;
  undefined1 *__dest_00;
  
  uVar4 = (uint)(param_2 >> 0x10) & 0xff;
  uVar2 = ((uint)(param_2 >> 0x18) & 0xff) - 1;
  __dest_00 = (undefined1 *)*param_1;
  if (*(uint *)(param_3 + 0x10) < uVar2) {
    uVar2 = *(uint *)(param_3 + 0x10);
  }
  uVar1 = uVar2;
  if (uVar2 < uVar4) {
    uVar1 = uVar4;
  }
  if ((uint)((int)param_1[1] - (int)__dest_00) < uVar1) {
    __dest_00 = (undefined1 *)FUN_00c1a4a8();
  }
  if (((uint)param_2 >> 8 & 1) == 0) {
    __dest = __dest_00;
    if (uVar4 <= uVar2) goto LAB_00bffb58;
  }
  else {
    pvVar3 = memcpy(__dest_00,(void *)(param_3 + 0x18),(ulong)uVar2);
    __dest_00 = (undefined1 *)((long)pvVar3 + (ulong)uVar2);
    if (uVar4 <= uVar2) goto LAB_00bffb38;
  }
  do {
    uVar4 = uVar4 - 1;
    __dest = __dest_00 + 1;
    *__dest_00 = 0x20;
    __dest_00 = __dest;
  } while (uVar2 < uVar4);
  if ((param_2 & 0x100) == 0) {
LAB_00bffb58:
    pvVar3 = memcpy(__dest,(void *)(param_3 + 0x18),(ulong)uVar2);
    *param_1 = (long)pvVar3 + (ulong)uVar2;
    return param_1;
  }
LAB_00bffb38:
  *param_1 = (long)__dest_00;
  return param_1;
}

