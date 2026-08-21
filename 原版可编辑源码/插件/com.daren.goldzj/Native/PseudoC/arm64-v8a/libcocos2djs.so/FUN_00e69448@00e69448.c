
/* WARNING: Type propagation algorithm not settling */

void FUN_00e69448(uint *param_1,int param_2)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  ulong *puVar7;
  int iVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong local_e0 [16];
  ulong *puVar8;
  
  puVar1 = local_e0;
  uVar2 = *param_1;
  if (uVar2 == 0) {
    return;
  }
  uVar16 = *(ulong *)(param_1 + 2);
  uVar17 = uVar16 + (ulong)uVar2 * 0x48;
  uVar15 = *(undefined8 *)(*(long *)(param_1 + 10) + (long)param_2 * 0x198 + 400);
  uVar3 = uVar17;
  if (uVar17 <= uVar16 + 0x48) {
    uVar3 = uVar16 + 0x48;
  }
  uVar14 = *(undefined8 *)(param_1 + 6);
  uVar3 = (uVar3 + ~uVar16) / 0x48 + 1;
  if (uVar3 < 2) {
    uVar4 = 0;
    uVar5 = uVar16;
  }
  else {
    uVar11 = uVar3 & 0x7fffffffffffffe;
    iVar6 = 0;
    iVar9 = 0;
    uVar5 = uVar16 + uVar11 * 0x48;
    puVar12 = (uint *)(uVar16 + 100);
    uVar13 = uVar11;
    do {
      uVar13 = uVar13 - 2;
      iVar6 = (puVar12[-0x12] >> 4 & 1) + iVar6;
      iVar9 = (*puVar12 >> 4 & 1) + iVar9;
      puVar12 = puVar12 + 0x24;
    } while (uVar13 != 0);
    uVar4 = iVar9 + iVar6;
    if (uVar3 == uVar11) goto LAB_00e69534;
  }
  do {
    puVar12 = (uint *)(uVar5 + 0x1c);
    uVar5 = uVar5 + 0x48;
    uVar4 = (*puVar12 >> 4 & 1) + uVar4;
  } while (uVar5 < uVar17);
LAB_00e69534:
  if ((uVar4 != 0) &&
     ((uVar4 < 0x11 ||
      (puVar1 = (ulong *)FUN_00e13bcc(uVar14,8,0,uVar4,0,local_e0), (int)local_e0[0] == 0)))) {
    if (uVar2 != 0) {
      uVar4 = 0;
      uVar3 = uVar16;
      do {
        if ((*(byte *)(uVar3 + 0x1c) >> 4 & 1) != 0) {
          puVar7 = puVar1 + uVar4;
          if (uVar4 != 0) {
            lVar10 = *(long *)(uVar3 + 0x30);
            do {
              puVar8 = puVar7 + -1;
              if (*(long *)(*puVar8 + 0x30) <= lVar10) break;
              *puVar7 = *puVar8;
              puVar7 = puVar8;
            } while (puVar1 < puVar8);
          }
          uVar4 = uVar4 + 1;
          *puVar7 = uVar3;
        }
        uVar3 = uVar3 + 0x48;
      } while (uVar3 < uVar17);
      if (uVar2 != 0) {
        do {
          if ((*(uint *)(uVar16 + 0x1c) >> 4 & 1) == 0) {
            uVar2 = *(uint *)(uVar16 + 0x18);
            if ((uVar2 >> 1 & 1) == 0) {
              if (uVar4 == 0) {
LAB_00e696e8:
                uVar3 = *puVar1;
LAB_00e696f4:
                lVar18 = *(long *)(uVar3 + 0x40);
                lVar10 = FT_MulFix(*(long *)(uVar16 + 0x30) - *(long *)(uVar3 + 0x30),uVar15);
LAB_00e6970c:
                lVar10 = lVar10 + lVar18;
              }
              else {
LAB_00e69634:
                uVar2 = 0;
                do {
                  if (*(long *)(uVar16 + 0x30) < *(long *)(puVar1[uVar2] + 0x30)) {
                    if (uVar2 == 0) goto LAB_00e696e8;
                    break;
                  }
                  uVar2 = uVar2 + 1;
                } while (uVar2 < uVar4);
                uVar3 = puVar1[uVar2 - 1];
                lVar10 = 0;
                do {
                  lVar18 = lVar10;
                  if ((ulong)uVar4 + lVar18 == 0) break;
                  lVar10 = lVar18 + -1;
                } while (*(long *)(uVar16 + 0x30) <=
                         *(long *)(puVar1[(uVar4 - 1) + (int)lVar18] + 0x30));
                if ((int)lVar18 == 0) {
                  uVar3 = puVar1[uVar4 - 1];
                  goto LAB_00e696f4;
                }
                lVar10 = *(long *)(uVar16 + 0x30) - *(long *)(uVar3 + 0x30);
                if (lVar10 != 0) {
                  uVar5 = puVar1[(ulong)uVar4 + lVar18 & 0xffffffff];
                  if (*(long *)(uVar16 + 0x30) == *(long *)(uVar5 + 0x30)) {
                    lVar10 = *(long *)(uVar5 + 0x40);
                    goto LAB_00e69710;
                  }
                  lVar18 = *(long *)(uVar3 + 0x40);
                  lVar10 = FT_MulDiv(lVar10,*(long *)(uVar5 + 0x40) - lVar18,
                                     *(long *)(uVar5 + 0x30) - *(long *)(uVar3 + 0x30));
                  goto LAB_00e6970c;
                }
                lVar10 = *(long *)(uVar3 + 0x40);
              }
LAB_00e69710:
              *(long *)(uVar16 + 0x40) = lVar10;
              *(uint *)(uVar16 + 0x1c) = *(uint *)(uVar16 + 0x1c) | 0x20;
            }
            else if (((*(char *)(uVar16 + 0x20) != '\x04') &&
                     (*(char *)(uVar16 + 0x20) == *(char *)(uVar16 + 0x21))) &&
                    ((uVar2 & 4) != 0 || (*(uint *)(uVar16 + 0x1c) & 0x40) != 0)) {
              *(uint *)(uVar16 + 0x18) = uVar2 & 0xfffffffd;
              if (uVar4 != 0) goto LAB_00e69634;
              goto LAB_00e696e8;
            }
          }
          uVar16 = uVar16 + 0x48;
        } while (uVar16 < uVar17);
      }
    }
    if (puVar1 != local_e0) {
      FUN_00e139fc(uVar14,puVar1);
    }
  }
  return;
}

