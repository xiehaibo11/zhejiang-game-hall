
int FUN_00e675d0(long param_1,ulong param_2,ushort param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  
  iVar10 = 0x40000;
  if (3 < param_3) {
    iVar10 = (uint)param_3 << 0x10;
  }
  lVar11 = FT_DivFix(0x3e80000,(param_2 & 0xffff) << 0x10);
  if (lVar11 < 0x28f) {
    return 0;
  }
  iVar8 = *(int *)(param_1 + 0x24);
  iVar9 = *(int *)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x2c);
  iVar4 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x34);
  iVar5 = *(int *)(param_1 + 0x38);
  iVar3 = *(int *)(param_1 + 0x3c);
  iVar6 = *(int *)(param_1 + 0x40);
  if ((long)param_4 < 1) {
    pcVar12 = "rnal27Runtime_SerializeWasmModuleEiPmPNS0_7IsolateE";
  }
  else {
    pcVar12 = (char *)FT_MulFix((param_4 & 0xffff) << 0x10,lVar11);
  }
  iVar17 = (int)pcVar12;
  if ((0x3e - (int)LZCOUNT(iVar10)) - (int)LZCOUNT(iVar17) < 0x2e) {
    uVar13 = FT_MulFix(pcVar12,iVar10);
    uVar16 = (ulong)(uint)(iVar8 << 0x10);
    if ((long)uVar16 <= (long)uVar13) goto LAB_00e67694;
  }
  else {
    uVar13 = (ulong)(uint)(iVar3 << 0x10);
    uVar16 = (ulong)(uint)(iVar8 << 0x10);
    if (uVar16 <= uVar13) {
LAB_00e67694:
      if ((long)uVar13 < (long)(ulong)(uint)(iVar1 << 0x10)) {
        iVar7 = FT_DivFix(uVar16,iVar10);
        if (iVar1 - iVar8 == 0) {
LAB_00e67710:
          iVar8 = FT_DivFix((ulong)(uint)(iVar1 << 0x10),iVar10);
          if (iVar2 - iVar1 == 0) {
            uVar16 = (ulong)(uint)(iVar2 << 0x10);
            goto LAB_00e67760;
          }
          lVar14 = FT_MulDiv((long)(iVar17 - iVar8),(long)(iVar5 - iVar4),(long)(iVar2 - iVar1));
          iVar9 = iVar4 << 0x10;
        }
        else {
          lVar14 = FT_MulDiv((long)(iVar17 - iVar7),(long)(iVar4 - iVar9),(long)(iVar1 - iVar8));
          iVar9 = iVar9 << 0x10;
        }
      }
      else {
        uVar16 = (ulong)(uint)(iVar2 << 0x10);
        if ((long)uVar13 < (long)uVar16) goto LAB_00e67710;
        iVar9 = iVar6;
        if ((long)(ulong)(uint)(iVar3 << 0x10) <= (long)uVar13) goto LAB_00e676f8;
LAB_00e67760:
        iVar8 = FT_DivFix(uVar16,iVar10);
        iVar9 = iVar6;
        if (iVar3 - iVar2 == 0) goto LAB_00e676f8;
        lVar14 = FT_MulDiv((long)(iVar17 - iVar8),(long)(iVar6 - iVar5),(long)(iVar3 - iVar2));
        iVar9 = iVar5 << 0x10;
      }
      lVar15 = FT_DivFix(iVar9,iVar10);
      lVar15 = lVar15 + lVar14;
      goto LAB_00e677a4;
    }
  }
LAB_00e676f8:
  lVar15 = FT_DivFix(iVar9 << 0x10,iVar10);
LAB_00e677a4:
  iVar10 = FT_DivFix(lVar15,lVar11);
  return iVar10 + 0x8000 >> 0x10;
}

