
void cpSpaceProcessComponents(float param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  int *piVar14;
  uint *puVar15;
  ulong uVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  fVar22 = *(float *)(param_2 + 0x14);
  puVar12 = *(uint **)(param_2 + 0x38);
  if (fVar22 != INFINITY) {
    fVar18 = *(float *)(param_2 + 0x10);
    if (fVar18 == 0.0) {
      fVar18 = param_1 * param_1 *
               (*(float *)(param_2 + 4) * *(float *)(param_2 + 4) +
               *(float *)(param_2 + 8) * *(float *)(param_2 + 8));
    }
    else {
      fVar18 = fVar18 * fVar18;
    }
    if (0 < (int)*puVar12) {
      lVar11 = 0;
      if (fVar18 == 0.0) {
        do {
          lVar10 = *(long *)(*(long *)(puVar12 + 2) + lVar11 * 8);
          iVar6 = cpBodyGetType(lVar10);
          if (iVar6 == 0) {
            fVar18 = (float)cpBodyKineticEnergy(lVar10);
            fVar19 = 0.0;
            if (fVar18 <= 0.0) {
              fVar19 = *(float *)(lVar10 + 0xb0) + param_1;
            }
            *(float *)(lVar10 + 0xb0) = fVar19;
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < (int)*puVar12);
      }
      else {
        do {
          lVar10 = *(long *)(*(long *)(puVar12 + 2) + lVar11 * 8);
          iVar6 = cpBodyGetType(lVar10);
          if (iVar6 == 0) {
            fVar19 = *(float *)(lVar10 + 0x10);
            fVar20 = (float)cpBodyKineticEnergy(lVar10);
            fVar21 = 0.0;
            if (fVar20 <= fVar19 * fVar18) {
              fVar21 = *(float *)(lVar10 + 0xb0) + param_1;
            }
            *(float *)(lVar10 + 0xb0) = fVar21;
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < (int)*puVar12);
      }
    }
  }
  puVar15 = *(uint **)(param_2 + 0x78);
  uVar13 = (ulong)*puVar15;
  if (0 < (int)*puVar15) {
    if (fVar22 == INFINITY) {
      plVar8 = *(long **)(puVar15 + 2);
      do {
        lVar17 = *plVar8;
        lVar11 = *(long *)(lVar17 + 0x28);
        lVar10 = *(long *)(lVar17 + 0x30);
        lVar7 = *(long *)(lVar11 + 0x90);
        *(long *)(lVar17 + 0x38) = lVar7;
        if (lVar7 != 0) {
          lVar9 = lVar7 + 0x38;
          if (*(long *)(lVar7 + 0x28) != lVar11) {
            lVar9 = lVar7 + 0x48;
          }
          *(long *)(lVar9 + 8) = lVar17;
        }
        *(long *)(lVar11 + 0x90) = lVar17;
        lVar7 = *(long *)(lVar10 + 0x90);
        plVar2 = (long *)(lVar17 + 0x38);
        if (lVar11 != lVar10) {
          plVar2 = (long *)(lVar17 + 0x48);
        }
        *plVar2 = lVar7;
        if (lVar7 != 0) {
          lVar11 = lVar7 + 0x38;
          if (*(long *)(lVar7 + 0x28) != lVar10) {
            lVar11 = lVar7 + 0x48;
          }
          *(long *)(lVar11 + 8) = lVar17;
        }
        uVar13 = uVar13 - 1;
        plVar8 = plVar8 + 1;
        *(long *)(lVar10 + 0x90) = lVar17;
      } while (uVar13 != 0);
    }
    else {
      uVar16 = 0;
      do {
        lVar17 = *(long *)(*(long *)(puVar15 + 2) + uVar16 * 8);
        lVar11 = *(long *)(lVar17 + 0x28);
        lVar10 = *(long *)(lVar17 + 0x30);
        iVar6 = cpBodyGetType(lVar10);
        if ((iVar6 == 1) || (cVar5 = cpBodyIsSleeping(lVar11), cVar5 != '\0')) {
          cpBodyActivate(lVar11);
        }
        iVar6 = cpBodyGetType(lVar11);
        if ((iVar6 == 1) || (cVar5 = cpBodyIsSleeping(lVar10), cVar5 != '\0')) {
          cpBodyActivate(lVar10);
        }
        lVar7 = *(long *)(lVar17 + 0x28);
        lVar9 = *(long *)(lVar11 + 0x90);
        plVar8 = (long *)(lVar17 + 0x38);
        if (lVar7 != lVar11) {
          plVar8 = (long *)(lVar17 + 0x48);
        }
        *plVar8 = lVar9;
        if (lVar9 != 0) {
          lVar1 = lVar9 + 0x38;
          if (*(long *)(lVar9 + 0x28) != lVar11) {
            lVar1 = lVar9 + 0x48;
          }
          *(long *)(lVar1 + 8) = lVar17;
        }
        *(long *)(lVar11 + 0x90) = lVar17;
        lVar11 = *(long *)(lVar10 + 0x90);
        plVar8 = (long *)(lVar17 + 0x38);
        if (lVar7 != lVar10) {
          plVar8 = (long *)(lVar17 + 0x48);
        }
        *plVar8 = lVar11;
        if (lVar11 != 0) {
          lVar7 = lVar11 + 0x38;
          if (*(long *)(lVar11 + 0x28) != lVar10) {
            lVar7 = lVar11 + 0x48;
          }
          *(long *)(lVar7 + 8) = lVar17;
        }
        uVar16 = uVar16 + 1;
        *(long *)(lVar10 + 0x90) = lVar17;
      } while (uVar13 != uVar16);
    }
  }
  if (fVar22 != INFINITY) {
    piVar14 = *(int **)(param_2 + 0x70);
    if (0 < *piVar14) {
      lVar11 = 0;
      do {
        lVar10 = *(long *)(*(long *)(piVar14 + 2) + lVar11 * 8);
        uVar3 = *(undefined8 *)(lVar10 + 0x10);
        uVar4 = *(undefined8 *)(lVar10 + 0x18);
        iVar6 = cpBodyGetType(uVar4);
        if (iVar6 == 1) {
          cpBodyActivate(uVar3);
        }
        iVar6 = cpBodyGetType(uVar3);
        if (iVar6 == 1) {
          cpBodyActivate(uVar4);
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < *piVar14);
    }
    uVar13 = (ulong)*puVar12;
    if (0 < (int)*puVar12) {
      lVar11 = 0;
      do {
        while (lVar10 = *(long *)(*(long *)(puVar12 + 2) + lVar11 * 8), lVar10 == 0) {
          FUN_0116fa24(0,0);
          cpArrayPush(*(undefined8 *)(param_2 + 0x50),0);
LAB_0116f9dc:
          uVar13 = (ulong)(int)*puVar12;
          if ((long)uVar13 <= lVar11) {
            return;
          }
        }
        if (*(long *)(lVar10 + 0xa0) == 0) {
          FUN_0116fa24(lVar10,lVar10);
          lVar17 = lVar10;
          do {
            if (*(float *)(lVar17 + 0xb0) < *(float *)(param_2 + 0x14)) {
              uVar13 = (ulong)*puVar12;
              goto LAB_0116f9f0;
            }
            lVar17 = *(long *)(lVar17 + 0xa8);
          } while (lVar17 != 0);
          cpArrayPush(*(undefined8 *)(param_2 + 0x50),lVar10);
          for (; lVar10 != 0; lVar10 = *(long *)(lVar10 + 0xa8)) {
            FUN_0116fb00(param_2,lVar10);
          }
          goto LAB_0116f9dc;
        }
LAB_0116f9f0:
        lVar11 = lVar11 + 1;
        *(long *)(lVar10 + 0xa0) = 0;
        *(undefined8 *)(lVar10 + 0xa8) = 0;
        if ((int)uVar13 <= lVar11) {
          return;
        }
      } while( true );
    }
  }
  return;
}

