
void FUN_00c14b10(long param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  uint uVar9;
  long *plVar10;
  
  puVar6 = *(ulong **)(param_1 + 0x20);
  puVar8 = *(ulong **)(param_1 + 0x28);
  plVar10 = *(long **)(*(long *)(param_1 + 0x10) + 0x168);
  plVar10[2] = param_1;
  if (puVar6 < puVar8) {
    uVar7 = *puVar6;
    if ((int)((long)uVar7 >> 0x2f) == -0xb) {
      uVar7 = uVar7 & 0x7fffffffffff;
      uVar3 = *(ushort *)(uVar7 + 10);
      uVar9 = (uint)uVar3;
      if (uVar3 == 0x15) {
        uVar9 = *(uint *)(uVar7 + 0x10);
        iVar4 = 0x13;
      }
      else {
        iVar4 = FUN_00c231d0();
        if (-1 < iVar4) {
          return;
        }
        iVar4 = 9;
      }
      uVar7 = (ulong)uVar9;
      while( true ) {
        uVar2 = *(uint *)(*plVar10 + uVar7 * 0x18);
        if (uVar2 >> 0x1c != 8) break;
        uVar7 = (ulong)(ushort)uVar2;
      }
      uVar1 = uVar2 & 0xffff;
      if (uVar2 >> 0x1c != 2) {
        uVar1 = uVar9;
      }
      lVar5 = FUN_00c0ed6c(plVar10,uVar1,iVar4);
      if (lVar5 != 0) {
        FUN_00c1cda4(param_1);
        return;
      }
      if (iVar4 != 9) {
        FUN_00c13cec(param_1,0);
        return;
      }
      lVar5 = FUN_00c0ee70(param_1,uVar1,0);
                    /* WARNING: Subroutine does not return */
      FUN_00bfb308(param_1,0xd12,lVar5 + 0x18);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb554(param_1,1,10);
}

