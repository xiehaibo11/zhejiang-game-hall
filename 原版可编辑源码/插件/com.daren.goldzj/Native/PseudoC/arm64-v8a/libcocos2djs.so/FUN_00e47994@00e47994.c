
undefined8
FUN_00e47994(long param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0xa0);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x1a8);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x1ac);
  }
  if (lVar3 == 0) {
    uVar2 = 0x10000;
    uVar1 = 0x10000;
  }
  else {
    uVar1 = FT_DivFix((ulong)*(ushort *)(lVar3 + 0x18) << 6,*(undefined4 *)(param_1 + 0x1ac));
    uVar2 = FT_DivFix((ulong)*(ushort *)(lVar3 + 0x1a) << 6,*(undefined4 *)(param_1 + 0x1ac));
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = uVar1;
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = uVar2;
  }
  return 0;
}

