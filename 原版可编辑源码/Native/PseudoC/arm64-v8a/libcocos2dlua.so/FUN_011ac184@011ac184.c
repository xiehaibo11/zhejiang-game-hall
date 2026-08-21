
void FUN_011ac184(long param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  int iVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  ulong *puVar17;
  int local_40a8;
  sigset_t asStack_4088 [128];
  timespec local_70;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    return;
  }
  plVar14 = (long *)(param_1 + 0x58);
  plVar15 = (long *)*plVar14;
  if (plVar14 != plVar15) {
    do {
      *(long *)plVar15[1] = *plVar15;
      *(long *)(*plVar15 + 8) = plVar15[1];
      asStack_4088[0].__val[1]._0_4_ = (undefined4)plVar15[2];
      *plVar15 = (long)plVar15;
      plVar15[1] = (long)plVar15;
      asStack_4088[0].__val[2] = (ulong)(int)plVar15[3];
      uVar1 = 3;
      if (*(int *)((long)plVar15 + 0x14) == 0) {
        uVar1 = 1;
      }
      iVar5 = FUN_011ae184(*(undefined4 *)(param_1 + 0x40),uVar1,asStack_4088[0].__val[2],
                           asStack_4088[0].__val + 1);
      if ((iVar5 != 0) &&
         ((piVar8 = (int *)__errno(), *piVar8 != 0x11 ||
          (iVar5 = FUN_011ae184(*(undefined4 *)(param_1 + 0x40),3,(int)plVar15[3],
                                asStack_4088[0].__val + 1), iVar5 != 0)))) {
LAB_011ac760:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(int *)((long)plVar15 + 0x14) = (int)plVar15[2];
      plVar15 = (long *)*plVar14;
    } while (plVar14 != plVar15);
  }
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    lVar16 = 0;
  }
  else {
    sigemptyset(asStack_4088);
    sigaddset(asStack_4088,0x1b);
    lVar16 = 0x4000000;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x220);
  local_40a8 = 0x30;
  iVar5 = param_2;
LAB_011ac298:
  iVar13 = iVar5;
  if (lVar16 == 0) {
    do {
      if ((DAT_0179365c & 1) == 0) {
        uVar6 = FUN_011ae1bc(*(undefined4 *)(param_1 + 0x40),asStack_4088[0].__val + 3,0x400,iVar13)
        ;
        if (uVar6 == 0xffffffff) {
          piVar8 = (int *)__errno();
          if (*piVar8 == 0x26) {
            DAT_0179365c = 1;
          }
          goto LAB_011ac4bc;
        }
      }
      else {
        uVar6 = FUN_011ae1e0();
        if (uVar6 == 0xffffffff) {
          piVar8 = (int *)__errno();
          if (*piVar8 == 0x26) {
            DAT_01793658 = '\x01';
          }
LAB_011ac4bc:
          uVar6 = 0xffffffff;
        }
      }
      piVar8 = (int *)__errno();
      iVar5 = *piVar8;
      if (DAT_01781880 == -1) {
        iVar7 = clock_getres(6,&local_70);
        if (iVar7 == 0) {
          DAT_01781880 = 6;
          if (1000000 < local_70.tv_nsec) {
            DAT_01781880 = 1;
          }
        }
        else {
          DAT_01781880 = 1;
        }
        iVar7 = clock_gettime((clockid_t)DAT_01781880,&local_70);
        if (iVar7 == 0) goto LAB_011ac558;
LAB_011ac4e8:
        uVar12 = 0;
        *(undefined8 *)(param_1 + 0x220) = 0;
        *piVar8 = iVar5;
      }
      else {
        iVar7 = clock_gettime((clockid_t)DAT_01781880,&local_70);
        if (iVar7 != 0) goto LAB_011ac4e8;
LAB_011ac558:
        uVar12 = (ulong)(local_70.tv_nsec + local_70.tv_sec * 1000000000) / 1000000;
        *(ulong *)(param_1 + 0x220) = uVar12;
        *piVar8 = iVar5;
      }
      iVar7 = (int)uVar12;
      if (uVar6 != 0xffffffff) goto LAB_011ac584;
      if (iVar5 == 4) goto LAB_011ac68c;
      if (iVar5 != 0x26) goto LAB_011ac760;
    } while( true );
  }
  do {
    if (DAT_01793658 == '\x01') {
      iVar5 = FUN_011ae428(0,asStack_4088,0);
      if (iVar5 != 0) goto LAB_011ac760;
      if (((DAT_0179365c & 1) != 0) || (DAT_01793658 == '\0')) goto LAB_011ac30c;
      uVar6 = FUN_011ae1bc(*(undefined4 *)(param_1 + 0x40),asStack_4088[0].__val + 3,0x400,iVar13);
      if (uVar6 != 0xffffffff) goto LAB_011ac330;
      piVar8 = (int *)__errno();
      if (*piVar8 == 0x26) {
        DAT_0179365c = 1;
      }
LAB_011ac360:
      uVar6 = 0xffffffff;
      uVar2 = 0xffffffff;
      if (DAT_01793658 == '\x01') goto LAB_011ac370;
    }
    else {
LAB_011ac30c:
      uVar6 = FUN_011ae1e0(*(undefined4 *)(param_1 + 0x40),asStack_4088[0].__val + 3,0x400,iVar13,
                           lVar16);
      if (uVar6 == 0xffffffff) {
        piVar8 = (int *)__errno();
        if (*piVar8 != 0x26) goto LAB_011ac360;
        DAT_01793658 = '\x01';
        uVar2 = 0xffffffff;
      }
      else {
LAB_011ac330:
        uVar2 = uVar6;
        if (DAT_01793658 != '\x01') goto LAB_011ac384;
      }
LAB_011ac370:
      uVar6 = uVar2;
      iVar5 = FUN_011ae428(1,asStack_4088,0);
      if (iVar5 != 0) goto LAB_011ac760;
    }
LAB_011ac384:
    piVar8 = (int *)__errno();
    iVar5 = *piVar8;
    if (DAT_01781880 == -1) {
      iVar7 = clock_getres(6,&local_70);
      if (iVar7 == 0) {
        DAT_01781880 = 6;
        if (1000000 < local_70.tv_nsec) {
          DAT_01781880 = 1;
        }
      }
      else {
        DAT_01781880 = 1;
      }
      iVar7 = clock_gettime((clockid_t)DAT_01781880,&local_70);
      if (iVar7 == 0) goto LAB_011ac41c;
LAB_011ac3ac:
      uVar12 = 0;
      *(undefined8 *)(param_1 + 0x220) = 0;
      *piVar8 = iVar5;
    }
    else {
      iVar7 = clock_gettime((clockid_t)DAT_01781880,&local_70);
      if (iVar7 != 0) goto LAB_011ac3ac;
LAB_011ac41c:
      uVar12 = (ulong)(local_70.tv_nsec + local_70.tv_sec * 1000000000) / 1000000;
      *(ulong *)(param_1 + 0x220) = uVar12;
      *piVar8 = iVar5;
    }
    iVar7 = (int)uVar12;
    if (uVar6 != 0xffffffff) break;
    if (iVar5 == 4) goto LAB_011ac68c;
    if (iVar5 != 0x26) goto LAB_011ac760;
  } while( true );
LAB_011ac584:
  if (uVar6 != 0) {
    uVar2 = *(uint *)(param_1 + 0x70);
    *(ulong **)(*(long *)(param_1 + 0x68) + (ulong)uVar2 * 8) = asStack_4088[0].__val + 3;
    *(long *)(*(long *)(param_1 + 0x68) + (ulong)(uVar2 + 1) * 8) = (long)(int)uVar6;
    if ((int)uVar6 < 1) {
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
      uVar12 = (ulong)uVar6;
      puVar17 = asStack_4088[0].__val + 3;
      bVar4 = false;
LAB_011ac5c4:
      do {
        uVar10 = puVar17[1];
        if ((int)uVar10 != -1) {
          puVar9 = *(undefined8 **)
                    (*(long *)(param_1 + 0x68) +
                    (-(uVar10 >> 0x1f & 1) & 0xfffffff800000000 | (uVar10 & 0xffffffff) << 3));
          if (puVar9 == (undefined8 *)0x0) {
            FUN_011ae184(*(undefined4 *)(param_1 + 0x40),2,uVar10,puVar17);
          }
          else {
            uVar3 = *(uint *)(puVar9 + 5);
            uVar2 = (uint)*puVar17 & (uVar3 | 0x18);
            *(uint *)puVar17 = uVar2;
            if ((uVar2 == 0x10) || (uVar2 == 8)) {
              uVar2 = uVar2 | uVar3 & 0x2007;
              *(uint *)puVar17 = uVar2;
            }
            if (uVar2 != 0) {
              if (puVar9 != (undefined8 *)(param_1 + 0x230)) {
                (*(code *)*puVar9)(param_1);
                iVar5 = iVar5 + 1;
                uVar12 = uVar12 - 1;
                puVar17 = puVar17 + 2;
                if (uVar12 == 0) break;
                goto LAB_011ac5c4;
              }
              bVar4 = true;
              iVar5 = iVar5 + 1;
            }
          }
        }
        puVar17 = puVar17 + 2;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      if (bVar4) {
        (**(code **)(param_1 + 0x230))(param_1,(undefined8 *)(param_1 + 0x230),1);
        uVar6 = *(uint *)(param_1 + 0x70);
        *(undefined8 *)(*(long *)(param_1 + 0x68) + (ulong)uVar6 * 8) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x68) + (ulong)(uVar6 + 1) * 8) = 0;
        return;
      }
    }
    uVar2 = *(uint *)(param_1 + 0x70);
    *(undefined8 *)(*(long *)(param_1 + 0x68) + (ulong)uVar2 * 8) = 0;
    *(undefined8 *)(*(long *)(param_1 + 0x68) + (ulong)(uVar2 + 1) * 8) = 0;
    if (iVar5 != 0) {
      if (uVar6 != 0x400) {
        return;
      }
      local_40a8 = local_40a8 + -1;
      iVar5 = 0;
      if (local_40a8 == 0) {
        return;
      }
      goto LAB_011ac298;
    }
    iVar5 = -1;
    if (iVar13 == -1) goto LAB_011ac298;
    if (iVar13 == 0) {
      return;
    }
    iVar7 = (int)*(undefined8 *)(param_1 + 0x220);
    goto LAB_011ac69c;
  }
  goto LAB_011ac698;
LAB_011ac68c:
  iVar5 = -1;
  if (iVar13 == -1) goto LAB_011ac298;
LAB_011ac698:
  if (iVar13 == 0) {
    return;
  }
LAB_011ac69c:
  param_2 = ((int)uVar11 + param_2) - iVar7;
  iVar5 = param_2;
  if (param_2 < 1) {
    return;
  }
  goto LAB_011ac298;
}

