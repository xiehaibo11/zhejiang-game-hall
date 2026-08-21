
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv_interface_addresses(long *param_1,uint *param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int *piVar6;
  short *psVar7;
  long *plVar8;
  long lVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  long *plVar13;
  long *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = uv_getifaddrs(&local_10);
  if ((int)uVar3 == 0) {
    *param_2 = 0;
    *param_1 = 0;
    plVar8 = local_10;
    if (local_10 == (long *)0x0) {
      uVar3 = 0;
    }
    else {
      do {
        while ((((*(uint *)(plVar8 + 2) & 0x41) != 0x41 || ((short *)plVar8[3] == (short *)0x0)) ||
               (*(short *)plVar8[3] == 0x11))) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_00bf6f74;
        }
        plVar8 = (long *)*plVar8;
        uVar12 = (int)uVar3 + 1;
        uVar3 = (ulong)uVar12;
        *param_2 = uVar12;
      } while (plVar8 != (long *)0x0);
LAB_00bf6f74:
      if ((int)uVar3 != 0) {
        puVar4 = (undefined8 *)uv__malloc((long)(int)uVar3 * 0x50);
        *param_1 = (long)puVar4;
        if (puVar4 == (undefined8 *)0x0) {
          uv_freeifaddrs(local_10);
          uVar3 = 0xfffffff4;
        }
        else {
          plVar8 = local_10;
          if (local_10 != (long *)0x0) {
            do {
              while ((((*(uint *)(plVar8 + 2) & 0x41) != 0x41 ||
                      ((short *)plVar8[3] == (short *)0x0)) || (*(short *)plVar8[3] == 0x11))) {
                plVar8 = (long *)*plVar8;
                plVar1 = local_10;
                if (plVar8 == (long *)0x0) goto joined_r0x00bf705c;
              }
              uVar5 = uv__strdup(plVar8[1]);
              psVar7 = (short *)plVar8[3];
              *puVar4 = uVar5;
              if (*psVar7 == 10) {
                uVar5 = *(undefined8 *)(psVar7 + 4);
                *(undefined8 *)((long)puVar4 + 0x14) = *(undefined8 *)psVar7;
                *(undefined8 *)((long)puVar4 + 0x1c) = uVar5;
                *(undefined8 *)((long)puVar4 + 0x24) = *(undefined8 *)(psVar7 + 8);
                *(undefined4 *)((long)puVar4 + 0x2c) = *(undefined4 *)(psVar7 + 0xc);
                psVar7 = (short *)plVar8[4];
                if (*psVar7 != 10) goto LAB_00bf7038;
LAB_00bf713c:
                uVar5 = *(undefined8 *)(psVar7 + 4);
                puVar4[6] = *(undefined8 *)psVar7;
                puVar4[7] = uVar5;
                puVar4[8] = *(undefined8 *)(psVar7 + 8);
                *(undefined4 *)(puVar4 + 9) = *(undefined4 *)(psVar7 + 0xc);
              }
              else {
                uVar5 = *(undefined8 *)(psVar7 + 4);
                *(undefined8 *)((long)puVar4 + 0x14) = *(undefined8 *)psVar7;
                *(undefined8 *)((long)puVar4 + 0x1c) = uVar5;
                psVar7 = (short *)plVar8[4];
                if (*psVar7 == 10) goto LAB_00bf713c;
LAB_00bf7038:
                uVar5 = *(undefined8 *)(psVar7 + 4);
                puVar4[6] = *(undefined8 *)psVar7;
                puVar4[7] = uVar5;
              }
              plVar13 = (long *)*plVar8;
              *(uint *)(puVar4 + 2) = *(uint *)(plVar8 + 2) >> 3 & 1;
              puVar4 = puVar4 + 10;
              plVar8 = plVar13;
              plVar1 = local_10;
            } while (plVar13 != (long *)0x0);
joined_r0x00bf705c:
            for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
              if ((((*(uint *)(plVar1 + 2) & 0x41) == 0x41) && ((short *)plVar1[3] != (short *)0x0))
                 && (*(short *)plVar1[3] != 0x11)) {
                uVar12 = *param_2;
                if (0 < (int)uVar12) {
                  puVar10 = (undefined4 *)(*param_1 + 8);
                  iVar11 = 0;
                  do {
                    iVar2 = strcmp(*(char **)(puVar10 + -2),(char *)plVar1[1]);
                    if (iVar2 == 0) {
                      lVar9 = plVar1[3];
                      *puVar10 = *(undefined4 *)(lVar9 + 0xc);
                      *(undefined2 *)(puVar10 + 1) = *(undefined2 *)(lVar9 + 0x10);
                      uVar12 = *param_2;
                    }
                    iVar11 = iVar11 + 1;
                    puVar10 = puVar10 + 0x14;
                  } while (iVar11 < (int)uVar12);
                }
              }
            }
          }
          uv_freeifaddrs(local_10);
          uVar3 = 0;
        }
      }
    }
  }
  else {
    piVar6 = (int *)__errno();
    uVar3 = (ulong)(uint)-*piVar6;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

