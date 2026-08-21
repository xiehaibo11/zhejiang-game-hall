
void FUN_010a5544(long param_1,int param_2,long param_3,ulong param_4)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  
  lVar14 = param_1 + (param_4 & 0xffffffff) * 0x28;
  uVar13 = *(ulong *)(lVar14 + 0x50);
  iVar6 = *(int *)(lVar14 + 0x48);
  if (param_2 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = *(long *)(param_3 + (ulong)(param_2 - 1) * 0x18);
  }
  uVar3 = *(uint *)(*(long *)(param_1 + 0xa0) + 0x48);
  uVar9 = uVar3 >> 8;
  uVar8 = (ulong)uVar9;
  if (uVar9 == 0) {
    uVar8 = 1;
  }
  if (0 < iVar6) {
    iVar4 = *(int *)(param_1 + (param_4 & 0xffffffff) * 0x28 + 0x68);
    uVar15 = uVar13 + (long)iVar6 * 0x58;
    uVar16 = (ulong)uVar3 * 6000 >> 0xb;
    uVar17 = uVar13;
    do {
      if (iVar4 == *(char *)(uVar17 + 1)) {
        sVar5 = *(short *)(uVar17 + 2);
        uVar10 = uVar13;
        if (lVar14 == 0) {
          do {
            if ((sVar5 < *(short *)(uVar10 + 2)) && (iVar4 == -(int)*(char *)(uVar10 + 1))) {
              sVar1 = *(short *)(uVar10 + 4);
              if (*(short *)(uVar10 + 4) <= *(short *)(uVar17 + 4)) {
                sVar1 = *(short *)(uVar17 + 4);
              }
              sVar2 = *(short *)(uVar10 + 6);
              if (*(short *)(uVar17 + 6) <= *(short *)(uVar10 + 6)) {
                sVar2 = *(short *)(uVar17 + 6);
              }
              lVar11 = (long)sVar2 - (long)sVar1;
              if ((long)uVar8 <= lVar11) {
                lVar7 = 0;
                if (lVar11 != 0) {
                  lVar7 = (long)uVar16 / lVar11;
                }
                lVar7 = lVar7 + ((long)*(short *)(uVar10 + 2) - (long)sVar5);
                if (lVar7 < *(long *)(uVar17 + 0x38)) {
                  *(long *)(uVar17 + 0x38) = lVar7;
                  *(ulong *)(uVar17 + 0x20) = uVar10;
                }
                if (lVar7 < *(long *)(uVar10 + 0x38)) {
                  *(long *)(uVar10 + 0x38) = lVar7;
                  *(ulong *)(uVar10 + 0x20) = uVar17;
                }
              }
            }
            uVar10 = uVar10 + 0x58;
          } while (uVar10 < uVar15);
        }
        else {
          do {
            if ((sVar5 < *(short *)(uVar10 + 2)) && (iVar4 == -(int)*(char *)(uVar10 + 1))) {
              sVar1 = *(short *)(uVar10 + 4);
              if (*(short *)(uVar10 + 4) <= *(short *)(uVar17 + 4)) {
                sVar1 = *(short *)(uVar17 + 4);
              }
              sVar2 = *(short *)(uVar10 + 6);
              if (*(short *)(uVar17 + 6) <= *(short *)(uVar10 + 6)) {
                sVar2 = *(short *)(uVar17 + 6);
              }
              lVar11 = (long)sVar2 - (long)sVar1;
              if ((long)uVar8 <= lVar11) {
                lVar7 = 0;
                if (lVar14 != 0) {
                  lVar7 = (((long)*(short *)(uVar10 + 2) - (long)sVar5) * 0x400) / lVar14;
                }
                if (lVar7 < 0x2b11) {
                  if (lVar7 < 0x401) {
                    uVar12 = 0;
                  }
                  else {
                    uVar12 = (ulong)((lVar7 + -0x400) * (lVar7 + -0x400)) / 3000;
                  }
                }
                else {
                  uVar12 = 32000;
                }
                lVar7 = 0;
                if (lVar11 != 0) {
                  lVar7 = (long)uVar16 / lVar11;
                }
                lVar7 = lVar7 + uVar12;
                if (lVar7 < *(long *)(uVar17 + 0x38)) {
                  *(long *)(uVar17 + 0x38) = lVar7;
                  *(ulong *)(uVar17 + 0x20) = uVar10;
                }
                if (lVar7 < *(long *)(uVar10 + 0x38)) {
                  *(long *)(uVar10 + 0x38) = lVar7;
                  *(ulong *)(uVar10 + 0x20) = uVar17;
                }
              }
            }
            uVar10 = uVar10 + 0x58;
          } while (uVar10 < uVar15);
        }
      }
      uVar17 = uVar17 + 0x58;
    } while (uVar17 < uVar15);
    if (0 < iVar6) {
      do {
        lVar14 = *(long *)(uVar13 + 0x20);
        if ((lVar14 != 0) && (uVar13 != *(ulong *)(lVar14 + 0x20))) {
          *(undefined8 *)(uVar13 + 0x20) = 0;
          *(undefined8 *)(uVar13 + 0x28) = *(undefined8 *)(lVar14 + 0x20);
        }
        uVar13 = uVar13 + 0x58;
      } while (uVar13 < uVar15);
    }
  }
  return;
}

