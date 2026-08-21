
undefined8 FUN_00c2c710(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  
  iVar4 = 1;
  uVar7 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 3;
  iVar1 = (int)uVar7;
  puVar3 = (undefined1 *)FUN_00c1a5a8(param_1,uVar7 & 0xffffffff);
  puVar6 = puVar3;
  if (0 < iVar1) {
    do {
      uVar2 = FUN_00c29cf0(param_1,iVar4);
      if (uVar2 != (uVar2 & 0xff)) {
                    /* WARNING: Subroutine does not return */
        FUN_00bfb458(param_1,iVar4,0x219);
      }
      iVar4 = iVar4 + 1;
      *puVar6 = (char)uVar2;
      puVar6 = puVar6 + 1;
    } while (iVar4 <= iVar1);
  }
  lVar5 = *(long *)(param_1 + 0x20);
  uVar7 = FUN_00bfba1c(param_1,puVar3,(long)iVar1);
  *(ulong *)(lVar5 + -0x10) = uVar7 | 0xfffd800000000000;
  return 2;
}

