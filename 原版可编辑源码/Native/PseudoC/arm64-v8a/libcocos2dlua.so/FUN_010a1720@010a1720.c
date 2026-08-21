
undefined8
FUN_010a1720(long param_1,uint param_2,undefined8 *param_3,undefined8 *param_4,ulong *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = 6;
  if ((param_4 != (undefined8 *)0x0) && (param_5 != (ulong *)0x0)) {
    uVar3 = (ulong)*(ushort *)(param_1 + 0x120);
    if (param_3 != (undefined8 *)0x0) {
      if (*(ushort *)(param_1 + 0x120) <= param_2) {
        return 0x8e;
      }
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x128) + (ulong)param_2 * 0x20);
      *param_3 = *puVar1;
      *param_4 = puVar1[2];
      uVar3 = puVar1[3];
    }
    uVar2 = 0;
    *param_5 = uVar3;
  }
  return uVar2;
}

