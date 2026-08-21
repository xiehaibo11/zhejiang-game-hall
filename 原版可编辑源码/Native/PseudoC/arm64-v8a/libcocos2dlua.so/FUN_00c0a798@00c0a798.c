
void FUN_00c0a798(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  
  lVar6 = *param_1;
  *(undefined4 *)(lVar6 + 0x2c) = *(undefined4 *)(lVar6 + 0x28);
  *(byte *)(*(long *)(lVar6 + 0x18) + 0xd) = *(byte *)(*(long *)(lVar6 + 0x18) + 0xd) | 4;
  FUN_00c079c0();
  lVar2 = FUN_00c07cb4(param_1);
  lVar3 = FUN_00c07aac(param_1,lVar2);
  if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00c064c4(param_1,0,0xb00,lVar2 + 0x18);
  }
  uVar4 = FUN_00c095e8(param_1,lVar2,4,*(undefined4 *)(lVar6 + 0x28));
  uVar4 = uVar4 & 0xffffffff;
  FUN_00c07cfc(param_1,0x11d);
  iVar5 = *(int *)((long)param_1 + 0x34);
  if (iVar5 == 0x11d) {
    uVar1 = *(int *)((long)param_1 + 0xac) + 1;
    do {
      *(uint *)((long)param_1 + 0xac) = uVar1;
      if (199 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00c064c4(param_1,0,0x863);
      }
      FUN_00c0a798();
      uVar1 = *(uint *)((long)param_1 + 0xac);
      iVar5 = *(int *)((long)param_1 + 0x34);
      *(uint *)((long)param_1 + 0xac) = uVar1 - 1;
    } while (iVar5 == 0x11d);
  }
  switch(iVar5) {
  case 0x104:
  case 0x105:
  case 0x106:
  case 0x115:
  case 0x121:
    if (iVar5 != 0x115) {
      *(undefined1 *)(param_1[0x12] + uVar4 * 0x18 + 0x10) =
           *(undefined1 *)(*(long *)(lVar6 + 0x18) + 0xc);
      FUN_00c087c4(param_1,*(undefined4 *)(*(long *)(lVar6 + 0x18) + 8),uVar4);
      return;
    }
  }
  FUN_00c087c4(param_1,*(undefined4 *)(*(long *)(lVar6 + 0x18) + 8),uVar4);
  return;
}

