
void FUN_00d9188c(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  iVar5 = *(int *)(param_1 + 0x70);
  lVar14 = *(long *)(param_1 + 0x290);
  *(uint *)(lVar14 + 0x38) = (uint)(iVar5 == 1);
  uVar6 = 0x2fe;
  if (iVar5 != 1) {
    uVar6 = 0x100;
  }
  lVar4 = (**(code **)(*(long *)(param_1 + 8) + 0x10))
                    (param_1,1,uVar6,*(undefined4 *)(param_1 + 0x90));
  *(long *)(lVar14 + 0x30) = lVar4;
  if (0 < *(int *)(param_1 + 0x90)) {
    if (iVar5 == 1) {
      lVar7 = 0;
      iVar5 = *(int *)(lVar14 + 0x28);
      while( true ) {
        lVar8 = lVar7 * 8;
        iVar10 = *(int *)(lVar14 + lVar7 * 4 + 0x3c);
        lVar11 = 0;
        *(long *)(lVar4 + lVar8) = *(long *)(lVar4 + lVar8) + 0xff;
        lVar4 = (long)iVar10 + -1;
        iVar2 = 0;
        if (iVar10 != 0) {
          iVar2 = iVar5 / iVar10;
        }
        iVar5 = 0;
        puVar9 = *(undefined1 **)(*(long *)(lVar14 + 0x30) + lVar8);
        lVar12 = (long)((int)lVar4 << 1);
        lVar8 = 0;
        if (lVar12 != 0) {
          lVar8 = ((long)iVar10 + 0xfe) / lVar12;
        }
        do {
          if ((int)lVar8 < lVar11) {
            uVar1 = iVar5 * 2 + 3;
            do {
              lVar8 = 0;
              if (lVar12 != 0) {
                lVar8 = (long)(((-(ulong)(uVar1 >> 0x1f) & 0xffffff0000000000 | (ulong)uVar1 << 8) -
                               (long)(int)uVar1) + lVar4) / lVar12;
              }
              iVar5 = iVar5 + 1;
              uVar1 = uVar1 + 2;
            } while ((int)lVar8 < lVar11);
          }
          puVar9[lVar11] = (char)iVar5 * (char)iVar2;
          lVar11 = lVar11 + 1;
        } while (lVar11 != 0x100);
        lVar11 = -1;
        lVar4 = 0x100;
        do {
          puVar9[lVar11] = *puVar9;
          lVar11 = lVar11 + -1;
          puVar9[lVar4] = puVar9[0xff];
          lVar4 = lVar4 + 1;
        } while (lVar11 != -0x100);
        lVar7 = lVar7 + 1;
        if (*(int *)(param_1 + 0x90) <= lVar7) break;
        lVar4 = *(long *)(lVar14 + 0x30);
        iVar5 = iVar2;
      }
    }
    else {
      lVar7 = 0;
      iVar5 = *(int *)(lVar14 + 0x28);
      while( true ) {
        iVar2 = *(int *)(lVar14 + lVar7 * 4 + 0x3c);
        lVar11 = *(long *)(lVar4 + lVar7 * 8);
        lVar4 = 0;
        iVar10 = 0;
        lVar8 = (long)iVar2 + -1;
        iVar3 = 0;
        if (iVar2 != 0) {
          iVar3 = iVar5 / iVar2;
        }
        lVar13 = (long)((int)lVar8 << 1);
        lVar12 = 0;
        if (lVar13 != 0) {
          lVar12 = ((long)iVar2 + 0xfe) / lVar13;
        }
        do {
          if ((int)lVar12 < lVar4) {
            uVar1 = iVar10 * 2 + 3;
            do {
              lVar12 = 0;
              if (lVar13 != 0) {
                lVar12 = (long)(((-(ulong)(uVar1 >> 0x1f) & 0xffffff0000000000 | (ulong)uVar1 << 8)
                                - (long)(int)uVar1) + lVar8) / lVar13;
              }
              iVar10 = iVar10 + 1;
              uVar1 = uVar1 + 2;
            } while ((int)lVar12 < lVar4);
          }
          *(char *)(lVar11 + lVar4) = (char)iVar10 * (char)iVar3;
          lVar4 = lVar4 + 1;
        } while (lVar4 != 0x100);
        lVar7 = lVar7 + 1;
        if (*(int *)(param_1 + 0x90) <= lVar7) break;
        lVar4 = *(long *)(lVar14 + 0x30);
        iVar5 = iVar3;
      }
    }
  }
  return;
}

