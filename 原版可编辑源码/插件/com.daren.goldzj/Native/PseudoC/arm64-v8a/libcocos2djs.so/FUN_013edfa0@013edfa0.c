
ulong FUN_013edfa0(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  long unaff_x26;
  
  uVar4 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_1 + -1) + 7);
  uVar11 = (uint)uVar4;
  lVar7 = param_1;
  if ((uVar4 & 7) == 0) {
    lVar8 = 0;
    bVar5 = false;
LAB_013ee0a8:
    if (bVar5) {
      if ((uVar11 >> 4 & 1) != 0) goto LAB_013ee164;
      lVar7 = *(long *)(lVar7 + 0x13);
    }
    else {
      lVar7 = lVar7 + 0xb;
    }
    if ((uVar11 >> 3 & 1) == 0) {
      uVar9 = (ulong)*(ushort *)(lVar7 + (param_2 + lVar8) * 2);
    }
    else {
      uVar9 = (ulong)*(byte *)(lVar7 + param_2 + lVar8);
    }
    if ((uint)uVar9 < 0x100) {
      lVar7 = uVar9 * 4 + 7;
      uVar12 = unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x26 + 0xf18) + lVar7);
      if ((int)uVar12 != (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
        return uVar12;
      }
      uVar10 = **(ulong **)(unaff_x26 + 0x1428);
      uVar1 = uVar10 + 0x10;
      if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
        uVar10 = uVar10 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar1;
      }
      else {
        uVar10 = FUN_01348560(uVar12,0x10);
      }
      *(int *)(uVar10 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x100);
      *(undefined4 *)(uVar10 + 7) = 1;
      *(undefined4 *)(uVar10 + 3) = 7;
      *(char *)(uVar10 + 0xb) = (char)uVar9;
      uVar12 = *(ulong *)(unaff_x26 + 0xf18);
      if ((ulong)((long)((ulong)*(uint *)(uVar12 + 3) << 0x20) >> 0x21) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(0,0x13ee300);
        (*pcVar6)();
      }
      *(int *)(uVar12 + lVar7) = (int)uVar10;
      if (((((uint)*(undefined8 *)((uVar12 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
          ((uVar10 & 1) != 0)) &&
         (uVar10 = unaff_x26 + (uVar10 & 0xffffffff),
         ((uint)*(undefined8 *)((uVar10 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
        FUN_0133eb00(uVar12,uVar12 + lVar7,0,2);
      }
    }
    else {
      uVar10 = **(ulong **)(unaff_x26 + 0x1428);
      uVar12 = uVar10 + 0x10;
      if (uVar12 < **(ulong **)(unaff_x26 + 0x1430)) {
        uVar10 = uVar10 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar12;
      }
      else {
        uVar10 = FUN_01348560(param_1,0x10);
      }
      *(int *)(uVar10 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x2e0);
      *(undefined4 *)(uVar10 + 7) = 1;
      *(undefined4 *)(uVar10 + 3) = 7;
      *(short *)(uVar10 + 0xb) = (short)uVar9;
    }
    return uVar10;
  }
  lVar8 = 0;
  uVar11 = (uint)uVar4;
  while( true ) {
    while( true ) {
      while( true ) {
        uVar3 = uVar11 & 7;
        if (1 < uVar3) break;
        if ((uVar11 & 7) == 0) {
          bVar5 = false;
          goto LAB_013ee0a8;
        }
        if ((uVar3 != 1) || (*(int *)(lVar7 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)))
        goto LAB_013ee164;
        lVar7 = unaff_x26 + (ulong)*(uint *)(lVar7 + 0xb);
        uVar11 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(lVar7 + -1) + 7);
      }
      if (uVar3 == 2) {
        bVar5 = true;
        goto LAB_013ee0a8;
      }
      if (uVar3 != 3) break;
      lVar2 = unaff_x26 + (ulong)*(uint *)(lVar7 + 0xb);
      lVar8 = lVar8 + ((long)((ulong)*(uint *)(lVar7 + 0xf) << 0x20) >> 0x21);
      uVar11 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(lVar2 + -1) + 7);
      lVar7 = lVar2;
    }
    if (uVar3 != 5) break;
    lVar7 = unaff_x26 + (ulong)*(uint *)(lVar7 + 0xb);
    uVar11 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(lVar7 + -1) + 7);
  }
LAB_013ee164:
  if (0x3fffffff < param_2) {
    uVar10 = **(ulong **)(unaff_x26 + 0x1428);
    uVar9 = uVar10 + 0xc;
    if (uVar9 < **(ulong **)(unaff_x26 + 0x1430)) {
      lVar7 = uVar10 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar9;
    }
    else {
      lVar7 = FUN_01348560(param_1,0xc,param_2);
    }
    *(int *)(lVar7 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
    *(double *)(lVar7 + 3) = (double)param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2580));
}

