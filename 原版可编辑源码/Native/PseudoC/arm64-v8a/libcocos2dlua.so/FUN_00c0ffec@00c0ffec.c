
ulong FUN_00c0ffec(long *param_1,long param_2)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  code *pcVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  
  lVar14 = param_1[3];
  uVar20 = param_1[2];
  if (*(long *)(lVar14 + 0x160) != 0) {
    puVar7 = *(ulong **)(uVar20 + 0x28);
    *(ulong **)(uVar20 + 0x28) = puVar7 + 1;
    uVar16 = FUN_00bfab64(uVar20,0xe0f);
    *puVar7 = uVar16 | 0xfffd800000000000;
    pcVar9 = *(code **)(lVar14 + 0x148);
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(uVar20);
    }
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  uVar10 = *(undefined8 *)(uVar20 + 0x50);
  *(undefined4 *)(param_2 + 200) = 0;
  *(undefined4 *)(param_2 + 0xc4) = 0xffffffff;
  *(undefined8 *)(param_2 + 0xa0) = uVar10;
  uVar21 = *(uint *)(param_1 + 0x19);
  uVar18 = *(uint *)(param_1 + 0x1a);
  *(ulong *)(param_2 + 0xb0) = uVar20;
  *(long *)(uVar20 + 0x50) = param_2;
  lVar14 = param_1[0x16];
  puVar15 = *(undefined8 **)(uVar20 + 0x28);
  if ((uVar18 < uVar21) && (uVar2 = *(ushort *)(param_1[0x18] + (ulong)uVar18 * 2), uVar2 != 0)) {
    lVar6 = param_1[5];
    lVar1 = (ulong)uVar2 * 0x18;
    lVar17 = *param_1 + lVar1;
    uVar16 = (ulong)*(ushort *)(*param_1 + lVar1);
    if (uVar18 < *(uint *)(lVar6 + 0x30)) {
      puVar7 = (ulong *)(*(long *)(lVar6 + 0x10) + (long)(int)uVar18 * 8);
    }
    else {
      puVar7 = (ulong *)FUN_00c1bbc0(lVar6,uVar18);
    }
    uVar8 = 0xfffb800000000000;
    uVar11 = *puVar7 & 0x7fffffffffff;
  }
  else {
    uVar8 = 0xfffc800000000000;
    lVar17 = 0;
    uVar16 = 0;
    uVar11 = uVar20;
  }
  puVar15[1] = uVar16;
  puVar15[2] = uVar11 | uVar8;
  *puVar15 = 1;
  puVar13 = puVar15 + 4;
  puVar15[3] = (long)puVar13 + (2 - *(long *)(uVar20 + 0x20));
  *(undefined8 **)(uVar20 + 0x20) = puVar13;
  *(undefined8 **)(uVar20 + 0x28) = puVar13;
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfb3a0(param_1[2],0xe0f);
  }
  if (*(char *)(uVar11 + 10) == '\0') {
    *(long *)(*(long *)(uVar20 + 0x50) + 0xa8) = *(long *)(uVar11 + 0x20) + 4;
  }
  if (*(long *)(uVar20 + 0x30) - (long)puVar13 < 0xa1) {
    FUN_00bfe0e0(uVar20,0x14);
    puVar13 = *(undefined8 **)(uVar20 + 0x20);
  }
  uVar2 = *(ushort *)(lVar17 + 8);
  iVar19 = 0;
  if (uVar2 != 0) {
    uVar16 = 0;
    uVar21 = 0;
    uVar18 = 0;
    puVar15 = puVar13;
    do {
      lVar17 = *param_1;
      uVar4 = *(uint *)(lVar17 + (ulong)uVar2 * 0x18);
      puVar13 = puVar15;
      if (uVar4 >> 0x1c != 8) {
        do {
          lVar6 = (ulong)(ushort)uVar4 * 0x18;
          lVar1 = lVar17 + lVar6;
          uVar4 = *(uint *)(lVar17 + lVar6);
        } while (uVar4 >> 0x1c == 8);
        uVar3 = *(int *)(lVar1 + 4) + 7U >> 3;
        if ((uVar4 & 0xf4000000) == 0x4000000) {
          uVar4 = uVar18 + uVar3;
          if (8 < uVar4) {
            uVar18 = 8;
            goto LAB_00c10200;
          }
          plVar12 = param_1 + (ulong)uVar18 + 6;
        }
        else {
          uVar4 = uVar21;
          if (1 < uVar3) {
            uVar4 = uVar21 + 1 & 0xfffffffe;
          }
          uVar21 = uVar4 + uVar3;
          if (uVar21 < 9) {
            plVar12 = param_1 + (ulong)uVar4 + 0xe;
            uVar4 = uVar18;
          }
          else {
            uVar21 = 8;
LAB_00c10200:
            plVar12 = (long *)(lVar14 + uVar16 * 8);
            uVar16 = (ulong)((int)uVar16 + uVar3);
            uVar4 = uVar18;
          }
        }
        puVar13 = puVar15 + 1;
        iVar5 = FUN_00c21fa4(param_1,lVar1,0,puVar15,plVar12);
        iVar19 = iVar19 + iVar5;
        uVar18 = uVar4;
      }
      uVar2 = *(ushort *)(lVar17 + (ulong)uVar2 * 0x18 + 8);
      puVar15 = puVar13;
    } while (uVar2 != 0);
  }
  *(undefined8 **)(uVar20 + 0x28) = puVar13;
  for (; 0 < iVar19; iVar19 = iVar19 + -1) {
    if (*(ulong *)(*(long *)(uVar20 + 0x10) + 0x28) <= *(ulong *)(*(long *)(uVar20 + 0x10) + 0x20))
    {
      FUN_00c19f80(uVar20);
    }
  }
  return uVar20;
}

