
int uv_fs_event_start(long param_1,undefined8 param_2,char *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  size_t sVar7;
  char *pcVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  
  if ((*(byte *)(param_1 + 0x58) >> 2 & 1) == 0) {
    lVar18 = *(long *)(param_1 + 8);
    iVar4 = *(int *)(lVar18 + 0x348);
    if (iVar4 == -1) {
      iVar4 = FUN_011ae250(0x80800);
      if (iVar4 == -1) {
        piVar6 = (int *)__errno();
        if (*piVar6 == 0x26) {
          iVar4 = FUN_011ae22c();
          if (iVar4 == -1) {
            iVar4 = -*piVar6;
          }
          else {
            iVar5 = FUN_011a2cfc(iVar4,1);
            if ((iVar5 != 0) || (iVar5 = FUN_011a2ca0(iVar4,1), iVar5 != 0)) {
              FUN_011a2d5c(iVar4);
              iVar4 = iVar5;
            }
          }
        }
        else {
          iVar4 = -*piVar6;
        }
      }
      if (iVar4 < 0) {
        return iVar4;
      }
      *(int *)(lVar18 + 0x348) = iVar4;
      FUN_011a366c(lVar18 + 0x308,FUN_011adebc,iVar4);
      FUN_011a3688(lVar18,lVar18 + 0x308,1);
      iVar4 = *(int *)(*(long *)(param_1 + 8) + 0x348);
    }
    iVar4 = FUN_011ae270(iVar4,param_3,0xfc6);
    if (iVar4 == -1) {
      piVar6 = (int *)__errno();
      iVar4 = -*piVar6;
    }
    else {
      for (plVar19 = *(long **)(*(long *)(param_1 + 8) + 0x340); plVar19 != (long *)0x0;
          plVar19 = (long *)*plVar19) {
        if ((int)plVar19[8] <= iVar4) {
          if (iVar4 <= (int)plVar19[8]) goto LAB_011add98;
          plVar19 = plVar19 + 1;
        }
      }
      sVar7 = strlen(param_3);
      plVar19 = malloc(sVar7 + 0x49);
      if (plVar19 != (long *)0x0) {
        *(int *)(plVar19 + 8) = iVar4;
        pcVar8 = strcpy((char *)(plVar19 + 9),param_3);
        plVar19[7] = (long)pcVar8;
        plVar19[4] = (long)(plVar19 + 4);
        plVar19[5] = (long)(plVar19 + 4);
        *(undefined4 *)(plVar19 + 6) = 0;
        plVar13 = *(long **)(*(long *)(param_1 + 8) + 0x340);
        if (plVar13 == (long *)0x0) {
          plVar10 = (long *)0x0;
          bVar1 = false;
        }
        else {
          iVar5 = (int)plVar19[8];
          do {
            while( true ) {
              plVar10 = plVar13;
              iVar2 = (int)plVar10[8];
              bVar1 = iVar5 < iVar2;
              if (iVar2 <= iVar5) break;
              plVar13 = (long *)*plVar10;
              if ((long *)*plVar10 == (long *)0x0) goto LAB_011adb58;
            }
            if (iVar5 <= iVar2) goto LAB_011add98;
            plVar13 = (long *)plVar10[1];
          } while ((long *)plVar10[1] != (long *)0x0);
        }
LAB_011adb58:
        plVar13 = (long *)(*(long *)(param_1 + 8) + 0x340);
        plVar11 = plVar10;
        if (!bVar1) {
          plVar11 = plVar10 + 1;
        }
        plVar19[1] = 0;
        plVar19[2] = (long)plVar10;
        plVar14 = plVar13;
        if (plVar10 != (long *)0x0) {
          plVar14 = plVar11;
        }
        *plVar19 = 0;
        *(undefined4 *)(plVar19 + 3) = 1;
        *plVar14 = (long)plVar19;
        plVar10 = (long *)plVar19[2];
        plVar11 = plVar19;
joined_r0x011adb88:
        if (plVar10 != (long *)0x0) {
          do {
            plVar14 = plVar10 + 3;
            if ((int)*plVar14 != 1) break;
            plVar12 = (long *)plVar10[2];
            plVar15 = (long *)*plVar12;
            if (plVar10 == plVar15) {
              plVar15 = (long *)plVar12[1];
              if ((plVar15 == (long *)0x0) || ((int)plVar15[3] != 1)) goto LAB_011adc08;
LAB_011adbe8:
              *(undefined4 *)(plVar15 + 3) = 0;
              *(int *)plVar14 = 0;
              *(undefined4 *)(plVar12 + 3) = 1;
              plVar10 = (long *)plVar12[2];
              plVar11 = plVar12;
            }
            else {
              if ((plVar15 != (long *)0x0) && ((int)plVar15[3] == 1)) goto LAB_011adbe8;
              if ((long *)*plVar10 == plVar11) {
                lVar18 = plVar11[1];
                *plVar10 = lVar18;
                plVar14 = plVar12;
                if (lVar18 != 0) {
                  *(long **)(lVar18 + 0x10) = plVar10;
                  plVar14 = (long *)plVar10[2];
                }
                plVar11[2] = (long)plVar14;
                plVar15 = plVar13;
                if (plVar14 != (long *)0x0) {
                  plVar15 = (long *)plVar10[2];
                  if (plVar10 != (long *)*plVar15) {
                    plVar15 = plVar15 + 1;
                  }
                }
                *plVar15 = (long)plVar11;
                plVar14 = plVar11 + 3;
                plVar11[1] = (long)plVar10;
                plVar10[2] = (long)plVar11;
                plVar11 = plVar10;
              }
              *(int *)plVar14 = 0;
              plVar10 = (long *)plVar12[1];
              *(undefined4 *)(plVar12 + 3) = 1;
              lVar18 = *plVar10;
              plVar12[1] = lVar18;
              if (lVar18 != 0) {
                *(long **)(lVar18 + 0x10) = plVar12;
              }
              lVar18 = plVar12[2];
              plVar10[2] = lVar18;
              plVar14 = plVar13;
              if (lVar18 != 0) {
                plVar14 = (long *)plVar12[2];
                if (plVar12 != (long *)*plVar14) {
                  plVar14 = plVar14 + 1;
                }
              }
              *plVar14 = (long)plVar10;
              *plVar10 = (long)plVar12;
              plVar12[2] = (long)plVar10;
              plVar10 = (long *)plVar11[2];
            }
            if (plVar10 == (long *)0x0) break;
          } while( true );
        }
        *(undefined4 *)(*plVar13 + 0x18) = 0;
LAB_011add98:
        uVar3 = *(uint *)(param_1 + 0x58);
        if (((uVar3 >> 2 & 1) == 0) &&
           (*(uint *)(param_1 + 0x58) = uVar3 | 4, (uVar3 >> 3 & 1) != 0)) {
          *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + 1;
        }
        puVar17 = (undefined8 *)(param_1 + 0x70);
        *puVar17 = plVar19 + 4;
        puVar9 = (undefined8 *)plVar19[5];
        *(undefined8 **)(param_1 + 0x78) = puVar9;
        *puVar9 = puVar17;
        lVar18 = plVar19[7];
        plVar19[5] = (long)puVar17;
        *(int *)(param_1 + 0x80) = iVar4;
        *(long *)(param_1 + 0x60) = lVar18;
        *(undefined8 *)(param_1 + 0x68) = param_2;
        return 0;
      }
      iVar4 = -0xc;
    }
  }
  else {
    iVar4 = -0x16;
  }
  return iVar4;
LAB_011adc08:
  plVar15 = plVar10 + 1;
  plVar16 = (long *)*plVar15;
  if (plVar16 != plVar11) {
    *(int *)plVar14 = 0;
    *(undefined4 *)(plVar12 + 3) = 1;
    *plVar12 = (long)plVar16;
    plVar14 = plVar10;
    goto joined_r0x011add88;
  }
  lVar18 = *plVar11;
  *plVar15 = lVar18;
  if (lVar18 == 0) {
    plVar11[2] = (long)plVar12;
LAB_011add4c:
    plVar14 = (long *)plVar10[2];
    if (plVar10 != (long *)*plVar14) {
      plVar14 = plVar14 + 1;
    }
  }
  else {
    *(long **)(lVar18 + 0x10) = plVar10;
    lVar18 = plVar10[2];
    plVar11[2] = lVar18;
    plVar14 = plVar13;
    if (lVar18 != 0) goto LAB_011add4c;
  }
  *plVar14 = (long)plVar11;
  *plVar11 = (long)plVar10;
  plVar10[2] = (long)plVar11;
  plVar14 = (long *)*plVar12;
  plVar15 = plVar14 + 1;
  plVar16 = (long *)*plVar15;
  *(undefined4 *)(plVar11 + 3) = 0;
  *(undefined4 *)(plVar12 + 3) = 1;
  *plVar12 = (long)plVar16;
  plVar11 = plVar10;
joined_r0x011add88:
  if (plVar16 != (long *)0x0) {
    plVar16[2] = (long)plVar12;
  }
  lVar18 = plVar12[2];
  plVar14[2] = lVar18;
  plVar10 = plVar13;
  if (lVar18 != 0) {
    plVar10 = (long *)plVar12[2];
    if (plVar12 != (long *)*plVar10) {
      plVar10 = plVar10 + 1;
    }
  }
  *plVar10 = (long)plVar14;
  *plVar15 = (long)plVar12;
  plVar12[2] = (long)plVar14;
  plVar10 = (long *)plVar11[2];
  goto joined_r0x011adb88;
}

