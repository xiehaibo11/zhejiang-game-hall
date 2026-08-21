
int FUN_00e388d8(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char *__s1;
  int iVar4;
  undefined8 uVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  uint *puVar15;
  long lVar16;
  uint *puVar17;
  ulong uVar18;
  ulong uVar19;
  long local_f0 [4];
  int local_cc;
  uint local_c8;
  uint uStack_c4;
  undefined8 local_b8;
  long local_b0 [10];
  
  puVar17 = *(uint **)(param_1 + 0x350);
  if (puVar17 == (uint *)0x0) {
    local_cc = 6;
  }
  else {
    uVar2 = *puVar17;
    uVar3 = puVar17[1];
    uVar18 = (ulong)uVar3;
    uVar5 = *(undefined8 *)(param_1 + 0xb8);
    if (uVar3 == 0) {
      uVar18 = 0;
    }
    else {
      puVar6 = puVar17 + 0x2c;
      puVar11 = &local_b8;
      uVar19 = uVar18;
      puVar15 = puVar17;
      do {
        puVar15 = puVar15 + 2;
        uVar19 = uVar19 - 1;
        puVar11[-1] = *(undefined8 *)puVar15;
        puVar14 = *(undefined8 **)puVar6;
        *puVar11 = *puVar14;
        puVar1 = puVar6 + -2;
        puVar6 = puVar6 + 6;
        puVar11[1] = puVar14[(ulong)(byte)*puVar1 - 1];
        puVar11 = puVar11 + 3;
      } while (uVar19 != 0);
    }
    local_cc = 0;
    local_c8 = uVar3;
    uStack_c4 = uVar2;
    puVar6 = (uint *)FUN_00e1388c(uVar5,uVar18 * 0x30 + 0x20,&local_cc);
    if (local_cc == 0) {
      *puVar6 = uVar3;
      puVar6[1] = uVar2;
      puVar6[2] = 0;
      *(uint **)(puVar6 + 4) = puVar6 + 8;
      puVar6[6] = 0;
      puVar6[7] = 0;
      if (uVar3 == 0) {
        FUN_00e392a4(*(undefined8 *)(puVar17 + 0x44),local_f0,puVar17[1]);
      }
      else {
        uVar19 = 0;
        puVar15 = puVar6 + 0x12;
        plVar10 = local_b0;
        do {
          __s1 = (char *)plVar10[-2];
          lVar7 = plVar10[-1];
          *(char **)(puVar15 + -10) = __s1;
          *(long *)(puVar15 + -8) = lVar7 * 0x10000;
          lVar8 = *plVar10;
          *puVar15 = 0xffffffff;
          puVar15[-2] = 0xffffffff;
          puVar15[-1] = 0;
          uVar12 = lVar8 * 0x10000 + lVar7 * 0x10000;
          uVar13 = uVar12 | 1;
          if (-1 < (long)uVar12) {
            uVar13 = uVar12;
          }
          *(long *)(puVar15 + -6) = (long)uVar13 >> 1;
          *(long *)(puVar15 + -4) = lVar8 * 0x10000;
          if (__s1 != (char *)0x0) {
            iVar4 = strcmp(__s1,"Weight");
            if (iVar4 == 0) {
              uVar5 = 0x77676874;
            }
            else {
              iVar4 = strcmp(__s1,"Width");
              if (iVar4 == 0) {
                uVar5 = 0x77647468;
              }
              else {
                iVar4 = strcmp(__s1,"OpticalSize");
                if (iVar4 != 0) goto LAB_00e38a60;
                uVar5 = 0x6f70737a;
              }
            }
            *(undefined8 *)(puVar15 + -2) = uVar5;
          }
LAB_00e38a60:
          uVar19 = uVar19 + 1;
          puVar15 = puVar15 + 0xc;
          plVar10 = plVar10 + 3;
        } while (uVar18 != uVar19);
        FUN_00e392a4(*(undefined8 *)(puVar17 + 0x44),local_f0,puVar17[1]);
        if (uVar3 != 0) {
          uVar19 = 0;
          do {
            plVar10 = *(long **)(puVar17 + uVar19 * 6 + 0x2e);
            lVar7 = local_f0[uVar19];
            if (*plVar10 < lVar7) {
              uVar12 = (ulong)(byte)puVar17[uVar19 * 6 + 0x2a];
              if (1 < uVar12) {
                lVar8 = 0;
                uVar13 = 1;
                do {
                  if (lVar7 <= plVar10[uVar13]) {
                    lVar9 = *(long *)((long)plVar10 + (lVar8 >> 0x1d));
                    lVar16 = *(long *)(*(long *)(puVar17 + uVar19 * 6 + 0x2c) + (lVar8 >> 0x1d));
                    lVar8 = *(long *)(*(long *)(puVar17 + uVar19 * 6 + 0x2c) + uVar13 * 8);
                    lVar7 = FT_DivFix(lVar7 - lVar9,plVar10[uVar13] - lVar9);
                    lVar7 = lVar7 * (lVar8 - lVar16) + lVar16 * 0x10000;
                    goto LAB_00e38b44;
                  }
                  uVar13 = uVar13 + 1;
                  lVar8 = lVar8 + 0x100000000;
                } while (uVar13 < uVar12);
              }
              lVar7 = *(long *)(*(long *)(puVar17 + uVar19 * 6 + 0x2c) + uVar12 * 8 + -8);
            }
            else {
              lVar7 = **(long **)(puVar17 + uVar19 * 6 + 0x2c);
            }
            lVar7 = lVar7 << 0x10;
LAB_00e38b44:
            lVar8 = uVar19 * 0x30;
            uVar19 = uVar19 + 1;
            *(long *)(*(long *)(puVar6 + 4) + lVar8 + 0x10) = lVar7;
          } while (uVar19 != uVar18);
        }
      }
      *param_2 = puVar6;
    }
  }
  return local_cc;
}

