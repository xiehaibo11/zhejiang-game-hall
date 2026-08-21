
ulong uv_fs_event_start(long param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  char *pcVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  int iVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  
  if ((*(uint *)(param_1 + 0x58) >> 0xe & 1) != 0) {
    return 0xffffffea;
  }
  lVar18 = *(long *)(param_1 + 8);
  if (*(int *)(lVar18 + 0x348) != -1) {
    iVar1 = uv__inotify_add_watch(*(int *)(lVar18 + 0x348),param_3,0xfc6);
    goto joined_r0x00bf7a64;
  }
  uVar10 = uv__inotify_init1(0x80800);
  if ((int)uVar10 == -1) {
    piVar6 = (int *)__errno();
    if (*piVar6 == 0x26) {
      uVar9 = uv__inotify_init();
      uVar10 = uVar9 & 0xffffffff;
      if ((int)uVar9 != -1) {
        uVar2 = uv__cloexec_ioctl(uVar9,1);
        if ((uVar2 != 0) || (uVar2 = uv__nonblock_ioctl(uVar10,1), uVar2 != 0)) {
          uv__close(uVar10);
          uVar10 = (ulong)uVar2;
        }
        goto LAB_00bf7a18;
      }
    }
    uVar10 = (ulong)(uint)-*piVar6;
  }
LAB_00bf7a18:
  if ((int)uVar10 < 0) {
    return uVar10;
  }
  *(int *)(lVar18 + 0x348) = (int)uVar10;
  uv__io_init(lVar18 + 0x308,FUN_00bf769c,uVar10 & 0xffffffff);
  uv__io_start(lVar18,lVar18 + 0x308,1);
  iVar1 = uv__inotify_add_watch(*(undefined4 *)(*(long *)(param_1 + 8) + 0x348),param_3,0xfc6);
joined_r0x00bf7a64:
  if (iVar1 == -1) {
    piVar6 = (int *)__errno();
    uVar10 = (ulong)(uint)-*piVar6;
  }
  else {
    lVar18 = *(long *)(param_1 + 8);
    for (plVar19 = *(long **)(lVar18 + 0x340); plVar19 != (long *)0x0; plVar19 = (long *)plVar19[1])
    {
      while (iVar1 < (int)plVar19[8]) {
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)0x0) goto LAB_00bf7990;
      }
      if (iVar1 <= (int)plVar19[8]) {
        plVar12 = plVar19 + 4;
        goto LAB_00bf7ac4;
      }
    }
LAB_00bf7990:
    sVar3 = strlen(param_3);
    plVar19 = (long *)uv__malloc(sVar3 + 0x49);
    if (plVar19 != (long *)0x0) {
      *(int *)(plVar19 + 8) = iVar1;
      pcVar4 = strcpy((char *)(plVar19 + 9),param_3);
      plVar19[7] = (long)pcVar4;
      plVar12 = plVar19 + 4;
      plVar19[4] = (long)plVar12;
      plVar19[5] = (long)plVar12;
      lVar18 = *(long *)(param_1 + 8);
      *(undefined4 *)(plVar19 + 6) = 0;
      plVar5 = *(long **)(lVar18 + 0x340);
      plVar11 = plVar5;
      plVar14 = plVar19;
      if (plVar5 == (long *)0x0) {
        plVar19[2] = 0;
        plVar19[1] = 0;
        *plVar19 = 0;
        *(undefined4 *)(plVar19 + 3) = 1;
        *(long **)(lVar18 + 0x340) = plVar19;
      }
      else {
        do {
          plVar5 = plVar11;
          iVar13 = -1;
          if (iVar1 < (int)plVar5[8]) {
            plVar11 = (long *)*plVar5;
          }
          else {
            iVar13 = 1;
            if (iVar1 <= (int)plVar5[8]) goto LAB_00bf7ac4;
            plVar11 = (long *)plVar5[1];
          }
        } while (plVar11 != (long *)0x0);
        plVar19[1] = 0;
        *plVar19 = 0;
        plVar19[2] = (long)plVar5;
        *(undefined4 *)(plVar19 + 3) = 1;
        if (iVar13 == -1) {
          *plVar5 = (long)plVar19;
        }
        else {
          plVar5[1] = (long)plVar19;
        }
      }
LAB_00bf7b58:
      do {
        if ((plVar5 == (long *)0x0) || ((int)plVar5[3] != 1)) {
          *(undefined4 *)(*(long *)(lVar18 + 0x340) + 0x18) = 0;
LAB_00bf7ac4:
          uVar2 = *(uint *)(param_1 + 0x58);
          if (((uVar2 >> 0xe & 1) == 0) &&
             (*(uint *)(param_1 + 0x58) = uVar2 | 0x4000, (uVar2 >> 0xd & 1) != 0)) {
            *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
          }
          *(long **)(param_1 + 0x70) = plVar12;
          plVar12 = (long *)plVar19[5];
          *(long **)(param_1 + 0x78) = plVar12;
          *plVar12 = param_1 + 0x70;
          plVar19[5] = param_1 + 0x70;
          *(long *)(param_1 + 0x60) = plVar19[7];
          *(undefined8 *)(param_1 + 0x68) = param_2;
          *(int *)(param_1 + 0x80) = iVar1;
          return 0;
        }
        plVar11 = (long *)plVar5[2];
        plVar15 = (long *)*plVar11;
        if (plVar5 == plVar15) {
          plVar15 = (long *)plVar11[1];
          if ((plVar15 == (long *)0x0) || ((int)plVar15[3] != 1)) {
            plVar17 = (long *)plVar5[1];
            plVar15 = plVar5;
            plVar16 = plVar5;
            if (plVar17 == plVar14) {
              lVar7 = *plVar14;
              plVar5[1] = lVar7;
              plVar14 = plVar11;
              if (lVar7 != 0) {
                *(long **)(lVar7 + 0x10) = plVar5;
                plVar14 = (long *)plVar5[2];
              }
              plVar17[2] = (long)plVar14;
              if (plVar14 == (long *)0x0) {
                *(long **)(lVar18 + 0x340) = plVar17;
              }
              else {
                puVar8 = (undefined8 *)plVar5[2];
                if (plVar5 == (long *)*puVar8) {
                  *puVar8 = plVar17;
                }
                else {
                  puVar8[1] = plVar17;
                }
              }
              *plVar17 = (long)plVar5;
              plVar5[2] = (long)plVar17;
              plVar16 = (long *)*plVar11;
              plVar15 = plVar17;
              plVar14 = plVar5;
            }
            *(undefined4 *)(plVar15 + 3) = 0;
            lVar7 = plVar16[1];
            *plVar11 = lVar7;
            *(undefined4 *)(plVar11 + 3) = 1;
            if (lVar7 != 0) {
              *(long **)(lVar7 + 0x10) = plVar11;
            }
            lVar7 = plVar11[2];
            plVar16[2] = lVar7;
            if (lVar7 == 0) {
              *(long **)(lVar18 + 0x340) = plVar16;
            }
            else {
              puVar8 = (undefined8 *)plVar11[2];
              if (plVar11 == (long *)*puVar8) {
                *puVar8 = plVar16;
              }
              else {
                puVar8[1] = plVar16;
              }
            }
            plVar16[1] = (long)plVar11;
            plVar11[2] = (long)plVar16;
            plVar5 = (long *)plVar14[2];
          }
          else {
LAB_00bf7be4:
            *(undefined4 *)(plVar15 + 3) = 0;
            *(undefined4 *)(plVar5 + 3) = 0;
            *(undefined4 *)(plVar11 + 3) = 1;
            plVar5 = (long *)plVar11[2];
            plVar14 = plVar11;
          }
          goto LAB_00bf7b58;
        }
        if ((plVar15 != (long *)0x0) && ((int)plVar15[3] == 1)) goto LAB_00bf7be4;
        plVar15 = plVar5;
        if (plVar14 == (long *)*plVar5) {
          lVar7 = plVar14[1];
          *plVar5 = lVar7;
          if (lVar7 == 0) {
            plVar14[2] = (long)plVar11;
LAB_00bf7cbc:
            puVar8 = (undefined8 *)plVar5[2];
            if (plVar5 == (long *)*puVar8) {
              *puVar8 = plVar14;
            }
            else {
              puVar8[1] = plVar14;
            }
          }
          else {
            *(long **)(lVar7 + 0x10) = plVar5;
            lVar7 = plVar5[2];
            plVar14[2] = lVar7;
            if (lVar7 != 0) goto LAB_00bf7cbc;
            *(long **)(lVar18 + 0x340) = plVar14;
          }
          plVar14[1] = (long)plVar5;
          plVar5[2] = (long)plVar14;
          plVar15 = plVar14;
          plVar14 = plVar5;
        }
        plVar5 = (long *)plVar11[1];
        *(undefined4 *)(plVar15 + 3) = 0;
        *(undefined4 *)(plVar11 + 3) = 1;
        lVar7 = *plVar5;
        plVar11[1] = lVar7;
        if (lVar7 != 0) {
          *(long **)(lVar7 + 0x10) = plVar11;
        }
        lVar7 = plVar11[2];
        plVar5[2] = lVar7;
        if (lVar7 == 0) {
          *(long **)(lVar18 + 0x340) = plVar5;
        }
        else {
          puVar8 = (undefined8 *)plVar11[2];
          if (plVar11 == (long *)*puVar8) {
            *puVar8 = plVar5;
          }
          else {
            puVar8[1] = plVar5;
          }
        }
        *plVar5 = (long)plVar11;
        plVar11[2] = (long)plVar5;
        plVar5 = (long *)plVar14[2];
      } while( true );
    }
    uVar10 = 0xfffffff4;
  }
  return uVar10;
}

