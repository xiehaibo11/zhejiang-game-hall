
undefined8 FUN_00e3e6a4(long param_1,ulong param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x490);
  uVar1 = *(ushort *)(*(long *)(lVar3 + 0x520) + (param_2 & 0xffffffff) * 2);
  if (uVar1 == 0xffff) {
    return 0;
  }
  if (0x186 < uVar1) {
    if (uVar1 - 0x187 < *(uint *)(lVar3 + 0x648)) {
      return *(undefined8 *)(*(long *)(lVar3 + 0x650) + (ulong)(uVar1 - 0x187) * 8);
    }
    return 0;
  }
  if (*(long *)(lVar3 + 0x1360) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00e3e6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(long *)(lVar3 + 0x1360) + 0x28))();
    return uVar2;
  }
  return 0;
}

