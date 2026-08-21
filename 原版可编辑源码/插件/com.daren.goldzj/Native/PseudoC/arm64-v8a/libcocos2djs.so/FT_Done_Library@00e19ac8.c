
undefined8 FT_Done_Library(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  
  if (param_1 == (long *)0x0) {
    uVar4 = 0x21;
  }
  else {
    iVar3 = (int)param_1[0x31] + -1;
    *(int *)(param_1 + 0x31) = iVar3;
    if (iVar3 < 1) {
      lVar8 = *param_1;
      if (*(int *)((long)param_1 + 0x14) == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        do {
          puVar15 = (undefined8 *)param_1[uVar14 + 3];
          pbVar9 = (byte *)*puVar15;
          iVar3 = strcmp(*(char **)(pbVar9 + 0x10),"type42");
          if ((iVar3 == 0) && ((*pbVar9 & 1) != 0)) {
            lVar7 = puVar15[4];
joined_r0x00e19b3c:
            if (lVar7 != 0) {
              while (((lVar10 = *(long *)(lVar7 + 0x10), lVar10 != 0 &&
                      (lVar11 = *(long *)(lVar10 + 0xb0), lVar11 != 0)) &&
                     (iVar3 = *(int *)(*(long *)(lVar10 + 0xf0) + 0x78) + -1,
                     *(int *)(*(long *)(lVar10 + 0xf0) + 0x78) = iVar3, iVar3 < 1))) {
                plVar5 = *(long **)(lVar11 + 0x20);
                if (plVar5 == (long *)0x0) break;
                lVar12 = *(long *)(lVar11 + 0x10);
                while (plVar5[2] != lVar10) {
                  plVar5 = (long *)plVar5[1];
                  if (plVar5 == (long *)0x0) goto joined_r0x00e19b3c;
                }
                lVar7 = *plVar5;
                plVar5 = (long *)plVar5[1];
                puVar1 = (undefined8 *)(lVar11 + 0x20);
                if (lVar7 != 0) {
                  puVar1 = (undefined8 *)(lVar7 + 8);
                }
                *puVar1 = plVar5;
                plVar2 = (long *)(lVar11 + 0x28);
                if (plVar5 != (long *)0x0) {
                  plVar2 = plVar5;
                }
                *plVar2 = lVar7;
                (**(code **)(lVar12 + 0x10))(lVar12);
                FUN_00e166c8(lVar12,lVar10,lVar11);
                lVar7 = puVar15[4];
                if (lVar7 == 0) goto LAB_00e19be0;
              }
              goto joined_r0x00e19b3c;
            }
          }
LAB_00e19be0:
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(uint *)((long)param_1 + 0x14));
        if (*(uint *)((long)param_1 + 0x14) == 0) {
          uVar14 = 0;
        }
        else {
          uVar13 = 0;
          do {
            puVar15 = (undefined8 *)param_1[uVar13 + 3];
            if ((*(byte *)*puVar15 & 1) != 0) {
              lVar7 = puVar15[4];
joined_r0x00e19c2c:
              if (lVar7 != 0) {
                while (((lVar10 = *(long *)(lVar7 + 0x10), lVar10 != 0 &&
                        (lVar11 = *(long *)(lVar10 + 0xb0), lVar11 != 0)) &&
                       (iVar3 = *(int *)(*(long *)(lVar10 + 0xf0) + 0x78) + -1,
                       *(int *)(*(long *)(lVar10 + 0xf0) + 0x78) = iVar3, iVar3 < 1))) {
                  plVar5 = *(long **)(lVar11 + 0x20);
                  if (plVar5 == (long *)0x0) break;
                  lVar12 = *(long *)(lVar11 + 0x10);
                  while (plVar5[2] != lVar10) {
                    plVar5 = (long *)plVar5[1];
                    if (plVar5 == (long *)0x0) goto joined_r0x00e19c2c;
                  }
                  lVar7 = *plVar5;
                  plVar5 = (long *)plVar5[1];
                  puVar1 = (undefined8 *)(lVar11 + 0x20);
                  if (lVar7 != 0) {
                    puVar1 = (undefined8 *)(lVar7 + 8);
                  }
                  *puVar1 = plVar5;
                  plVar2 = (long *)(lVar11 + 0x28);
                  if (plVar5 != (long *)0x0) {
                    plVar2 = plVar5;
                  }
                  *plVar2 = lVar7;
                  (**(code **)(lVar12 + 0x10))(lVar12);
                  FUN_00e166c8(lVar12,lVar10,lVar11);
                  lVar7 = puVar15[4];
                  if (lVar7 == 0) goto LAB_00e19cd0;
                }
                goto joined_r0x00e19c2c;
              }
            }
LAB_00e19cd0:
            uVar14 = (ulong)*(uint *)((long)param_1 + 0x14);
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar14);
        }
      }
      uVar6 = (uint)uVar14;
      while (uVar6 != 0) {
        FT_Remove_Module(param_1,param_1[(ulong)((int)uVar14 - 1) + 3]);
        uVar6 = *(uint *)((long)param_1 + 0x14);
        uVar14 = (ulong)uVar6;
      }
      (**(code **)(lVar8 + 0x10))(lVar8,param_1);
    }
    uVar4 = 0;
  }
  return uVar4;
}

