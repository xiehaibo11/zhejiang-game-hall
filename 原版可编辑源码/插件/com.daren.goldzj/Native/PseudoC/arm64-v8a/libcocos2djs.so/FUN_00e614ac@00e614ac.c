
undefined8 FUN_00e614ac(uint param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  short *psVar11;
  ushort *puVar12;
  ushort *puVar13;
  undefined8 *puVar14;
  ushort *puVar15;
  undefined1 *puVar16;
  ushort *puVar17;
  undefined1 uVar18;
  long *plVar19;
  short *psVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  long local_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [120];
  
  uVar7 = FUN_00e6266c(param_2,param_3);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uVar10 = *(uint *)(param_2 + 0x1418);
  if ((uVar10 & 1) == 0) {
    uVar7 = FUN_00e66010(param_2,*(undefined4 *)(param_4 + 0x60),param_4 + 0x68,0);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    uVar10 = *(uint *)(param_2 + 0x1418);
  }
  if ((uVar10 >> 1 & 1) == 0) {
    uVar7 = FUN_00e66010(param_2,*(undefined4 *)(param_4 + 0x48b8),param_4 + 0x48c0,1);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    if (((*(ushort *)(*(long *)(*(long *)(param_4 + 0x40) + 0x10) + (ulong)param_1 * 2) >> 0xe & 1)
         == 0) && (0 < *(int *)(param_2 + 0xa40))) {
      uVar7 = *(undefined8 *)(param_4 + 0x48a8);
      psVar20 = *(short **)(param_2 + 0xa48);
      psVar11 = psVar20 + (long)*(int *)(param_2 + 0xa40) * 0x2c;
      do {
        lVar8 = FT_MulFix((ulong)*(uint *)(param_4 + 0x48) / 0x28,uVar7);
        if (*(uint *)(param_4 + 0x4a54) != 0) {
          uVar22 = 0;
          plVar23 = (long *)0x0;
          uVar10 = 0;
          plVar19 = (long *)(param_4 + 0x4a58);
          if (0x1f < lVar8) {
            lVar8 = 0x20;
          }
          do {
            uVar3 = *(uint *)(plVar19 + 8);
            if ((uVar3 & 1) != 0) {
              if (((uVar3 >> 3 & 1) != 0) ||
                 (((uVar3 & 6) != 0) ==
                  (*(int *)(param_2 + 0xa50) != (int)*(char *)((long)psVar20 + 0x19)))) {
                uVar5 = uVar3 >> 3 & 1;
                lVar9 = (long)*psVar20 - *plVar19;
                lVar1 = -lVar9;
                if (-1 < lVar9) {
                  lVar1 = lVar9;
                }
                lVar9 = FT_MulFix(lVar1,uVar7);
                plVar2 = plVar19;
                uVar6 = uVar5;
                lVar1 = lVar9;
                if (lVar8 <= lVar9) {
                  plVar2 = plVar23;
                  uVar6 = uVar10;
                  lVar1 = lVar8;
                }
                lVar8 = lVar1;
                plVar23 = plVar2;
                uVar10 = uVar6;
                if ((((uVar5 == 0) && (lVar9 != 0)) && ((*(byte *)(psVar20 + 0xc) & 1) != 0)) &&
                   (((uVar3 & 6) != 0) != (long)*psVar20 < *plVar19)) {
                  lVar9 = (long)*psVar20 - plVar19[3];
                  lVar8 = -lVar9;
                  if (-1 < lVar9) {
                    lVar8 = lVar9;
                  }
                  lVar9 = FT_MulFix(lVar8,uVar7);
                  lVar8 = lVar9;
                  if (lVar1 <= lVar9) {
                    lVar8 = lVar1;
                  }
                  plVar23 = plVar19 + 3;
                  uVar10 = 0;
                  if (lVar1 <= lVar9) {
                    plVar23 = plVar2;
                    uVar10 = uVar6;
                  }
                }
              }
            }
            uVar22 = uVar22 + 1;
            plVar19 = plVar19 + 9;
          } while (uVar22 < *(uint *)(param_4 + 0x4a54));
          if ((plVar23 != (long *)0x0) && (*(long **)(psVar20 + 0x14) = plVar23, uVar10 != 0)) {
            *(byte *)(psVar20 + 0xc) = *(byte *)(psVar20 + 0xc) | 8;
          }
        }
        psVar20 = psVar20 + 0x2c;
      } while (psVar20 < psVar11);
    }
  }
  if (*(int *)(param_4 + 0x30) == 0 && (*(uint *)(param_2 + 0x1418) & 8) == 0) {
    FUN_00e645bc(auStack_d8,param_2,&uStack_e0,&local_e8);
    if (0 < *(int *)(param_2 + 0x2c)) {
      uVar22 = *(ulong *)(param_2 + 0x30);
      uVar21 = uVar22 + (long)*(int *)(param_2 + 0x2c) * 0x50;
      do {
        lVar8 = FT_MulFix((long)*(short *)(uVar22 + 0x18),uStack_e0);
        *(long *)(uVar22 + 0x20) = lVar8 + local_e8;
        uVar22 = uVar22 + 0x50;
      } while (uVar22 < uVar21);
    }
  }
  else if ((*(uint *)(param_2 + 0x1418) & 1) == 0) {
    FUN_00e66494(param_2,0);
    if (0 < *(int *)(param_2 + 0x48)) {
      puVar12 = *(ushort **)(param_2 + 0x50);
      puVar13 = puVar12 + (long)*(int *)(param_2 + 0x48) * 0x28;
      do {
        if (*(long *)(puVar12 + 8) != 0) {
          puVar15 = *(ushort **)(puVar12 + 0x24);
          uVar7 = *(undefined8 *)(*(long *)(puVar12 + 8) + 0x10);
          puVar17 = puVar12;
          do {
            puVar17 = *(ushort **)(puVar17 + 0x20);
            *(undefined8 *)(puVar17 + 0x10) = uVar7;
            *puVar17 = *puVar17 | 4;
          } while (puVar17 != puVar15);
        }
        puVar12 = puVar12 + 0x28;
      } while (puVar12 < puVar13);
    }
    FUN_00e64b98(param_2,0);
    FUN_00e64f40(param_2,0);
    bVar4 = *(byte *)(param_2 + 0x1418);
    goto joined_r0x00e617ac;
  }
  bVar4 = *(byte *)(param_2 + 0x1418);
joined_r0x00e617ac:
  if ((bVar4 >> 1 & 1) == 0) {
    FUN_00e66494(param_2,1);
    if (0 < *(int *)(param_2 + 0xa30)) {
      puVar12 = *(ushort **)(param_2 + 0xa38);
      puVar13 = puVar12 + (long)*(int *)(param_2 + 0xa30) * 0x28;
      do {
        if (*(long *)(puVar12 + 8) != 0) {
          puVar15 = *(ushort **)(puVar12 + 0x24);
          uVar7 = *(undefined8 *)(*(long *)(puVar12 + 8) + 0x10);
          puVar17 = puVar12;
          do {
            puVar17 = *(ushort **)(puVar17 + 0x20);
            *(undefined8 *)(puVar17 + 0x14) = uVar7;
            *puVar17 = *puVar17 | 8;
          } while (puVar17 != puVar15);
        }
        puVar12 = puVar12 + 0x28;
      } while (puVar12 < puVar13);
    }
    FUN_00e64b98(param_2,1);
    FUN_00e64f40(param_2,1);
  }
  if (0 < *(int *)(param_2 + 0x2c)) {
    puVar12 = *(ushort **)(param_2 + 0x30);
    puVar14 = *(undefined8 **)(param_3 + 8);
    puVar13 = puVar12 + (long)*(int *)(param_2 + 0x2c) * 0x28;
    puVar16 = *(undefined1 **)(param_3 + 0x10);
    do {
      uVar7 = *(undefined8 *)(puVar12 + 0x10);
      puVar14[1] = *(undefined8 *)(puVar12 + 0x14);
      *puVar14 = uVar7;
      if ((*puVar12 & 1) == 0) {
        uVar18 = 1;
        if ((*puVar12 & 2) != 0) {
          uVar18 = 2;
        }
      }
      else {
        uVar18 = 0;
      }
      puVar12 = puVar12 + 0x28;
      *puVar16 = uVar18;
      puVar14 = puVar14 + 2;
      puVar16 = puVar16 + 1;
    } while (puVar12 < puVar13);
  }
  return 0;
}

