
undefined8 FUN_00c32efc(long param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  
  if (*(ulong **)(param_1 + 0x20) < *(ulong **)(param_1 + 0x28)) {
    uVar2 = **(ulong **)(param_1 + 0x20);
    uVar6 = uVar2 & 0x7fffffffffff;
    iVar3 = (int)((long)uVar2 >> 0x2f);
    if (iVar3 != -8) {
      if ((iVar3 != -9) || (*(char *)((uVar2 & 0x7fffffffffff) + 10) != '\0')) goto LAB_00c32f44;
      uVar6 = *(long *)((uVar2 & 0x7fffffffffff) + 0x20) - 0x68;
    }
    uVar1 = FUN_00c29cf0(param_1,2);
    if (uVar1 < *(uint *)(uVar6 + 0xc)) {
      puVar4 = *(uint **)(param_1 + 0x28);
      uVar1 = *(uint *)(uVar6 + (ulong)uVar1 * 4 + 0x68);
      *puVar4 = uVar1;
      puVar4[1] = 0xfff90000;
      lVar5 = *(long *)(param_1 + 0x28);
      *(uint *)(lVar5 + 8) = (uint)*(ushort *)(&DAT_01411070 + (ulong)(uVar1 & 0xff) * 2);
      *(undefined4 *)(lVar5 + 0xc) = 0xfff90000;
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 0x10;
      return 2;
    }
    return 0;
  }
LAB_00c32f44:
                    /* WARNING: Subroutine does not return */
  FUN_00bfb554(param_1,1,6);
}

