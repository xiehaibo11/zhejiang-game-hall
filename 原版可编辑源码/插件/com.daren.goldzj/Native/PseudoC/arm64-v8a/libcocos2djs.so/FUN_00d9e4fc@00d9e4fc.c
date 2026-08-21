
undefined8 FUN_00d9e4fc(long *param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  undefined2 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  int *piVar19;
  
  lVar16 = param_1[0x4e];
  if (*(int *)((long)param_1 + 0x174) != 0) {
    iVar3 = *(int *)(lVar16 + 0x4c);
    if (iVar3 == 0) {
      FUN_00d9e87c(param_1);
      iVar3 = *(int *)(lVar16 + 0x4c);
    }
    *(int *)(lVar16 + 0x4c) = iVar3 + -1;
  }
  if ((*(int *)(lVar16 + 0x28) != -1) && (0 < (int)param_1[0x3e])) {
    lVar9 = param_1[0x46];
    lVar17 = 0;
    do {
      lVar13 = (long)*(int *)((long)param_1 + lVar17 * 4 + 500);
      lVar14 = param_1[lVar13 + 0x39];
      puVar10 = *(undefined2 **)(param_2 + lVar17 * 8);
      lVar11 = lVar16 + lVar13 * 4;
      lVar12 = (long)*(int *)(lVar14 + 0x14);
      plVar18 = (long *)(lVar16 + lVar12 * 8 + 0x50);
      piVar19 = (int *)(lVar11 + 0x3c);
      lVar15 = *plVar18 + (long)*piVar19;
      iVar3 = FUN_00d9e97c(param_1,lVar15);
      if (iVar3 == 0) {
        *piVar19 = 0;
        iVar3 = *(int *)(lVar11 + 0x2c);
      }
      else {
        iVar3 = FUN_00d9e97c(param_1,lVar15 + 1);
        lVar11 = lVar15 + iVar3 + 2;
        uVar4 = FUN_00d9e97c(param_1,lVar11);
        if (uVar4 != 0) {
          lVar11 = *plVar18 + 0x14;
          while (iVar5 = FUN_00d9e97c(param_1,lVar11), iVar5 != 0) {
            uVar4 = uVar4 << 1;
            if (uVar4 == 0x8000) {
LAB_00d9e834:
              lVar17 = *param_1;
              *(undefined4 *)(lVar17 + 0x28) = 0x75;
              (**(code **)(lVar17 + 8))(param_1,0xffffffff);
              *(undefined4 *)(lVar16 + 0x28) = 0xffffffff;
              return 1;
            }
            lVar11 = lVar11 + 1;
          }
        }
        if ((int)uVar4 <
            (int)((ulong)(1L << ((ulong)*(byte *)((long)param_1 + lVar12 + 0x144) & 0x3f)) >> 1)) {
          iVar5 = 0;
        }
        else if ((int)((ulong)(1L << ((ulong)*(byte *)((long)param_1 + lVar12 + 0x154) & 0x3f)) >> 1
                      ) < (int)uVar4) {
          iVar5 = iVar3 * 4 + 0xc;
        }
        else {
          iVar5 = iVar3 * 4 + 4;
        }
        uVar7 = (int)uVar4 >> 1;
        *piVar19 = iVar5;
        if (uVar7 != 0) {
          do {
            iVar5 = FUN_00d9e97c(param_1,lVar11 + 0xe);
            uVar1 = 0;
            if (iVar5 != 0) {
              uVar1 = uVar7;
            }
            uVar7 = (int)uVar7 >> 1;
            uVar4 = uVar1 | uVar4;
          } while (uVar7 != 0);
        }
        lVar11 = lVar16 + lVar13 * 4;
        uVar7 = ~uVar4;
        if (iVar3 == 0) {
          uVar7 = uVar4 + 1;
        }
        iVar3 = *(int *)(lVar11 + 0x2c) + uVar7;
        *(int *)(lVar11 + 0x2c) = iVar3;
      }
      *puVar10 = (short)iVar3;
      if ((int)param_1[0x47] != 0) {
        lVar11 = (long)*(int *)(lVar14 + 0x18);
        iVar3 = 0;
        plVar18 = (long *)(lVar16 + lVar11 * 8 + 0xd0);
        do {
          lVar15 = *plVar18 + (long)(iVar3 * 3);
          iVar5 = FUN_00d9e97c(param_1,lVar15);
          if (iVar5 != 0) break;
          lVar15 = lVar15 + 2;
          iVar5 = iVar3;
          while( true ) {
            iVar3 = iVar5 + 1;
            iVar6 = FUN_00d9e97c(param_1,lVar15 + -1);
            if (iVar6 != 0) break;
            lVar15 = lVar15 + 3;
            iVar5 = iVar3;
            if ((int)param_1[0x47] <= iVar3) goto LAB_00d9e834;
          }
          iVar6 = FUN_00d9e97c(param_1,lVar16 + 0x150);
          uVar7 = FUN_00d9e97c(param_1,lVar15);
          uVar4 = 0;
          if (uVar7 != 0) {
            iVar8 = FUN_00d9e97c(param_1,lVar15);
            uVar4 = uVar7;
            if (iVar8 != 0) {
              uVar4 = uVar7 << 1;
              lVar15 = 0xbd;
              if ((int)(uint)*(byte *)((long)param_1 + lVar11 + 0x164) <= iVar5) {
                lVar15 = 0xd9;
              }
              lVar15 = *plVar18 + lVar15;
              while (iVar5 = FUN_00d9e97c(param_1,lVar15), iVar5 != 0) {
                uVar4 = uVar4 << 1;
                if (uVar4 == 0x8000) goto LAB_00d9e834;
                lVar15 = lVar15 + 1;
              }
            }
            uVar7 = (int)uVar4 >> 1;
            if (uVar7 != 0) {
              do {
                iVar5 = FUN_00d9e97c(param_1,lVar15 + 0xe);
                uVar1 = 0;
                if (iVar5 != 0) {
                  uVar1 = uVar7;
                }
                uVar7 = (int)uVar7 >> 1;
                uVar4 = uVar1 | uVar4;
              } while (uVar7 != 0);
            }
          }
          uVar2 = ~(ushort)uVar4;
          if (iVar6 == 0) {
            uVar2 = (ushort)uVar4 + 1;
          }
          puVar10[*(int *)(lVar9 + (long)iVar3 * 4)] = uVar2;
        } while (iVar3 < (int)param_1[0x47]);
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)param_1[0x3e]);
  }
  return 1;
}

