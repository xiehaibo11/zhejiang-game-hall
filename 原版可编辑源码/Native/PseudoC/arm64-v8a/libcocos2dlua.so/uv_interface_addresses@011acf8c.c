
int uv_interface_addresses(long *param_1,int *param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  short *psVar9;
  int iVar10;
  undefined4 *puVar11;
  long *local_58;
  
  iVar2 = FUN_01058d04(&local_58);
  if (iVar2 == 0) {
    *param_2 = 0;
    *param_1 = 0;
    if (local_58 != (long *)0x0) {
      iVar2 = 0;
      plVar8 = local_58;
      do {
        if (((((*(uint *)(plVar8 + 2) ^ 0xffffffff) & 0x41) == 0) &&
            ((short *)plVar8[3] != (short *)0x0)) && (*(short *)plVar8[3] != 0x11)) {
          iVar2 = iVar2 + 1;
          *param_2 = iVar2;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
      if (iVar2 != 0) {
        puVar5 = malloc((long)iVar2 * 0x50);
        *param_1 = (long)puVar5;
        if (puVar5 == (undefined8 *)0x0) {
          FUN_01058f58(local_58);
          return -0xc;
        }
        plVar8 = local_58;
        if (local_58 != (long *)0x0) {
          do {
            if (((((*(uint *)(plVar8 + 2) ^ 0xffffffff) & 0x41) == 0) &&
                ((short *)plVar8[3] != (short *)0x0)) && (*(short *)plVar8[3] != 0x11)) {
              uVar6 = FUN_0119f1b4(plVar8[1]);
              *puVar5 = uVar6;
              psVar9 = (short *)plVar8[3];
              if (*psVar9 == 10) {
                uVar6 = *(undefined8 *)(psVar9 + 6);
                puVar5[5] = *(undefined8 *)(psVar9 + 10);
                puVar5[4] = uVar6;
              }
              uVar6 = *(undefined8 *)psVar9;
              *(undefined8 *)((long)puVar5 + 0x1c) = *(undefined8 *)(psVar9 + 4);
              *(undefined8 *)((long)puVar5 + 0x14) = uVar6;
              psVar9 = (short *)plVar8[4];
              if (*psVar9 == 10) {
                uVar6 = *(undefined8 *)(psVar9 + 6);
                *(undefined8 *)((long)puVar5 + 0x44) = *(undefined8 *)(psVar9 + 10);
                *(undefined8 *)((long)puVar5 + 0x3c) = uVar6;
              }
              uVar6 = *(undefined8 *)psVar9;
              puVar5[7] = *(undefined8 *)(psVar9 + 4);
              puVar5[6] = uVar6;
              *(uint *)(puVar5 + 2) = *(uint *)(plVar8 + 2) >> 3 & 1;
              puVar5 = puVar5 + 10;
            }
            plVar8 = (long *)*plVar8;
            plVar1 = local_58;
          } while (plVar8 != (long *)0x0);
          for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
            if (((((*(uint *)(plVar1 + 2) ^ 0xffffffff) & 0x41) == 0) &&
                ((short *)plVar1[3] != (short *)0x0)) &&
               ((*(short *)plVar1[3] == 0x11 && (iVar2 = *param_2, 0 < iVar2)))) {
              iVar10 = 0;
              puVar11 = (undefined4 *)(*param_1 + 8);
              do {
                while (iVar3 = strcmp(*(char **)(puVar11 + -2),(char *)plVar1[1]), iVar3 != 0) {
                  iVar10 = iVar10 + 1;
                  puVar11 = puVar11 + 0x14;
                  if (iVar2 <= iVar10) goto LAB_011ad15c;
                }
                lVar7 = plVar1[3];
                *(undefined2 *)(puVar11 + 1) = *(undefined2 *)(lVar7 + 0x10);
                *puVar11 = *(undefined4 *)(lVar7 + 0xc);
                iVar2 = *param_2;
                iVar10 = iVar10 + 1;
                puVar11 = puVar11 + 0x14;
              } while (iVar10 < iVar2);
            }
LAB_011ad15c:
          }
        }
        FUN_01058f58(local_58);
      }
    }
    iVar2 = 0;
  }
  else {
    piVar4 = (int *)__errno();
    iVar2 = -*piVar4;
  }
  return iVar2;
}

