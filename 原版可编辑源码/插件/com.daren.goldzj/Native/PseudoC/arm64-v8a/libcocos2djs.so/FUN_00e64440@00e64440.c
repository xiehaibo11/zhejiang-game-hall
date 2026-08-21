
void FUN_00e64440(long param_1,long param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  short *psVar10;
  short *psVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  
  lVar6 = param_1 + (ulong)param_3 * 0x9e8;
  uVar9 = *(undefined8 *)(param_2 + (ulong)param_3 * 0x38a8 + 0x50);
  psVar11 = *(short **)(lVar6 + 0x60);
  iVar1 = *(int *)(lVar6 + 0x58);
  lVar6 = FT_MulFix((ulong)*(uint *)(param_2 + 0x48) / 0x28,uVar9);
  if (0x1f < lVar6) {
    lVar6 = 0x20;
  }
  if (0 < iVar1) {
    param_2 = param_2 + (ulong)param_3 * 0x38a8;
    psVar10 = psVar11 + (long)iVar1 * 0x2c;
    uVar5 = *(uint *)(param_2 + 0x1fc);
    uVar8 = uVar5;
    do {
      if (uVar8 != 0) {
        uVar15 = 0;
        lVar12 = lVar6;
        plVar13 = (long *)0x0;
        plVar16 = (long *)(param_2 + 0x200);
        do {
          lVar4 = lVar12;
          plVar14 = plVar13;
          if (((*(uint *)(plVar16 + 6) & 1) != 0) &&
             ((uint)(*(int *)(param_1 + (ulong)param_3 * 0x9e8 + 0x68) ==
                    (int)*(char *)((long)psVar11 + 0x19)) != (*(uint *)(plVar16 + 6) & 2) >> 1)) {
            lVar7 = (long)*psVar11;
            lVar2 = lVar7 - *plVar16;
            lVar4 = -lVar2;
            if (-1 < lVar2) {
              lVar4 = lVar2;
            }
            lVar3 = lVar7 - plVar16[3];
            lVar2 = -lVar3;
            if (-1 < lVar3) {
              lVar2 = lVar3;
            }
            plVar14 = plVar16 + 3;
            if (lVar4 <= lVar2) {
              plVar14 = plVar16;
            }
            lVar7 = lVar7 - *plVar14;
            lVar4 = -lVar7;
            if (-1 < lVar7) {
              lVar4 = lVar7;
            }
            lVar4 = FT_MulFix(lVar4,uVar9);
            uVar5 = *(uint *)(param_2 + 0x1fc);
            if (lVar12 <= lVar4) {
              lVar4 = lVar12;
              plVar14 = plVar13;
            }
          }
          uVar15 = uVar15 + 1;
          plVar16 = plVar16 + 7;
          lVar12 = lVar4;
          plVar13 = plVar14;
        } while (uVar15 < uVar5);
        uVar8 = uVar5;
        if (plVar14 != (long *)0x0) {
          *(long **)(psVar11 + 0x14) = plVar14;
        }
      }
      psVar11 = psVar11 + 0x2c;
    } while (psVar11 < psVar10);
  }
  return;
}

