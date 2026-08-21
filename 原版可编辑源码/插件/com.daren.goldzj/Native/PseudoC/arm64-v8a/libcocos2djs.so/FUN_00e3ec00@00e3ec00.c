
undefined8 FUN_00e3ec00(long param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x490);
  if (*(char *)(lVar4 + 0x28) != '\x02') {
    if (*(long *)(lVar4 + 0x1360) == 0) {
      return 0xb;
    }
    uVar1 = *(ushort *)(*(long *)(lVar4 + 0x520) + (param_2 & 0xffffffff) * 2);
    if (uVar1 != 0xffff) {
      if (uVar1 < 0x187) {
        lVar4 = (**(code **)(*(long *)(lVar4 + 0x1360) + 0x28))();
      }
      else {
        if (*(uint *)(lVar4 + 0x648) <= uVar1 - 0x187) {
          return 0;
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0x650) + (ulong)(uVar1 - 0x187) * 8);
      }
      if (lVar4 != 0) {
        FUN_00e1ec18(param_3,lVar4,param_4);
      }
    }
    return 0;
  }
  uVar2 = FT_Get_Module(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 8),&DAT_01975980);
  puVar3 = (undefined8 *)FUN_00e19608(uVar2,"glyph-dict",0);
  if (puVar3 == (undefined8 *)0x0) {
    return 0xb;
  }
  if ((code *)*puVar3 == (code *)0x0) {
    return 0xb;
  }
                    /* WARNING: Could not recover jumptable at 0x00e3ec7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*puVar3)(param_1,param_2 & 0xffffffff,param_3,param_4);
  return uVar2;
}

