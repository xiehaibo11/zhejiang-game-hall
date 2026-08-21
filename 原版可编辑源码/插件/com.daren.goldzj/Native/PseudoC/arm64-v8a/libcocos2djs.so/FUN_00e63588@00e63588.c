
void FUN_00e63588(long param_1,int param_2,long param_3,ulong param_4)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  lVar12 = param_1 + (param_4 & 0xffffffff) * 0x9e8;
  uVar11 = *(ulong *)(lVar12 + 0x50);
  iVar6 = *(int *)(lVar12 + 0x48);
  if (param_2 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(param_3 + (ulong)(param_2 - 1) * 0x18);
  }
  uVar3 = *(uint *)(*(long *)(param_1 + 0x1420) + 0x48);
  uVar13 = (ulong)(uVar3 >> 8);
  if (uVar13 == 0) {
    uVar13 = 1;
  }
  if (0 < iVar6) {
    iVar4 = *(int *)(param_1 + (param_4 & 0xffffffff) * 0x9e8 + 0x68);
    uVar14 = uVar11 + (long)iVar6 * 0x50;
    uVar15 = (ulong)uVar3 * 6000 >> 0xb;
    uVar16 = uVar11;
    do {
      if (iVar4 == *(char *)(uVar16 + 1)) {
        sVar5 = *(short *)(uVar16 + 2);
        uVar7 = uVar11;
        if (lVar12 == 0) {
          do {
            if ((sVar5 < *(short *)(uVar7 + 2)) && (iVar4 == -(int)*(char *)(uVar7 + 1))) {
              sVar1 = *(short *)(uVar7 + 6);
              if (*(short *)(uVar7 + 6) <= *(short *)(uVar16 + 6)) {
                sVar1 = *(short *)(uVar16 + 6);
              }
              sVar2 = *(short *)(uVar7 + 8);
              if (*(short *)(uVar16 + 8) <= *(short *)(uVar7 + 8)) {
                sVar2 = *(short *)(uVar16 + 8);
              }
              lVar8 = (long)sVar2 - (long)sVar1;
              if ((long)uVar13 <= lVar8) {
                lVar9 = 0;
                if (lVar8 != 0) {
                  lVar9 = (long)uVar15 / lVar8;
                }
                lVar9 = lVar9 + ((long)*(short *)(uVar7 + 2) - (long)sVar5);
                if (lVar9 < *(long *)(uVar16 + 0x30)) {
                  *(long *)(uVar16 + 0x30) = lVar9;
                  *(ulong *)(uVar16 + 0x20) = uVar7;
                }
                if (lVar9 < *(long *)(uVar7 + 0x30)) {
                  *(long *)(uVar7 + 0x30) = lVar9;
                  *(ulong *)(uVar7 + 0x20) = uVar16;
                }
              }
            }
            uVar7 = uVar7 + 0x50;
          } while (uVar7 < uVar14);
        }
        else {
          do {
            if ((sVar5 < *(short *)(uVar7 + 2)) && (iVar4 == -(int)*(char *)(uVar7 + 1))) {
              sVar1 = *(short *)(uVar7 + 6);
              if (*(short *)(uVar7 + 6) <= *(short *)(uVar16 + 6)) {
                sVar1 = *(short *)(uVar16 + 6);
              }
              sVar2 = *(short *)(uVar7 + 8);
              if (*(short *)(uVar16 + 8) <= *(short *)(uVar7 + 8)) {
                sVar2 = *(short *)(uVar16 + 8);
              }
              lVar8 = (long)sVar2 - (long)sVar1;
              if ((long)uVar13 <= lVar8) {
                lVar9 = 0;
                if (lVar12 != 0) {
                  lVar9 = (((long)*(short *)(uVar7 + 2) - (long)sVar5) * 0x400) / lVar12;
                }
                lVar9 = lVar9 + -0x400;
                if (lVar9 < 0x2711) {
                  if (lVar9 < 1) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = (ulong)(lVar9 * lVar9) / 3000;
                  }
                }
                else {
                  uVar10 = 32000;
                }
                lVar9 = 0;
                if (lVar8 != 0) {
                  lVar9 = (long)uVar15 / lVar8;
                }
                lVar9 = lVar9 + uVar10;
                if (lVar9 < *(long *)(uVar16 + 0x30)) {
                  *(long *)(uVar16 + 0x30) = lVar9;
                  *(ulong *)(uVar16 + 0x20) = uVar7;
                }
                if (lVar9 < *(long *)(uVar7 + 0x30)) {
                  *(long *)(uVar7 + 0x30) = lVar9;
                  *(ulong *)(uVar7 + 0x20) = uVar16;
                }
              }
            }
            uVar7 = uVar7 + 0x50;
          } while (uVar7 < uVar14);
        }
      }
      uVar16 = uVar16 + 0x50;
    } while (uVar16 < uVar14);
    if (0 < iVar6) {
      do {
        lVar12 = *(long *)(uVar11 + 0x20);
        if ((lVar12 != 0) && (uVar11 != *(ulong *)(lVar12 + 0x20))) {
          *(undefined8 *)(uVar11 + 0x20) = 0;
          *(undefined8 *)(uVar11 + 0x28) = *(undefined8 *)(lVar12 + 0x20);
        }
        uVar11 = uVar11 + 0x50;
      } while (uVar11 < uVar14);
    }
  }
  return;
}

