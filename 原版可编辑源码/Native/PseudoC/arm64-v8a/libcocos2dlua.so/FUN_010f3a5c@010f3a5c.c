
undefined8 FUN_010f3a5c(long param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  long lVar13;
  undefined2 *puVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  int iVar21;
  int *local_98;
  int local_74;
  
  lVar20 = *(long *)(param_1 + 0x208);
  local_74 = *(int *)(lVar20 + 0x18);
  iVar10 = *(int *)(lVar20 + 0x1c);
  lVar15 = lVar20;
  if (local_74 < iVar10) {
    iVar5 = *(int *)(param_1 + 0x170);
    uVar18 = *(uint *)(lVar20 + 0x14);
    uVar8 = *(int *)(param_1 + 0x198) - 1;
    do {
      local_98 = (int *)(param_1 + 0x174);
      if (uVar18 <= uVar8) {
        do {
          iVar10 = *(int *)(param_1 + 0x174);
          if (0 < iVar10) {
            lVar15 = 0;
            iVar21 = 0;
            do {
              lVar17 = *(long *)(param_1 + lVar15 * 8 + 0x178);
              piVar1 = (int *)(lVar17 + 0x38);
              piVar3 = piVar1;
              if (uVar8 <= uVar18) {
                piVar3 = (int *)(lVar17 + 0x48);
              }
              if (0 < *(int *)(lVar17 + 0x3c)) {
                iVar6 = *(int *)(lVar17 + 0x44);
                pcVar16 = *(code **)(*(long *)(param_1 + 0x228) + (long)*(int *)(lVar17 + 4) * 8 + 8
                                    );
                iVar7 = *piVar3;
                iVar10 = 0;
                iVar19 = *(int *)(lVar17 + 0x28) * local_74;
                do {
                  if ((*(uint *)(lVar20 + 0x10) < iVar5 - 1U) ||
                     (iVar10 + local_74 < *(int *)(lVar17 + 0x4c))) {
                    (*pcVar16)(param_1,lVar17,
                               *(undefined8 *)(param_2 + (long)*(int *)(lVar17 + 4) * 8),
                               *(undefined8 *)(lVar20 + (long)iVar21 * 8 + 0x20),iVar19,
                               iVar6 * uVar18,iVar7);
                    iVar11 = *(int *)(lVar17 + 0x38);
                    if (iVar7 < iVar11) {
                      memset(*(void **)(lVar20 + (long)(iVar21 + iVar7) * 8 + 0x20),0,
                             -(ulong)((uint)(iVar11 - iVar7) >> 0x1f) & 0xffffff8000000000 |
                             (ulong)(uint)(iVar11 - iVar7) << 7);
                      iVar11 = *piVar1;
                      if (iVar7 < iVar11) {
                        lVar13 = (long)iVar7;
                        do {
                          lVar2 = lVar20 + (long)iVar21 * 8 + lVar13 * 8;
                          lVar13 = lVar13 + 1;
                          **(undefined2 **)(lVar2 + 0x20) = **(undefined2 **)(lVar2 + 0x18);
                        } while (lVar13 < iVar11);
                      }
                    }
                  }
                  else {
                    memset(*(void **)(lVar20 + (long)iVar21 * 8 + 0x20),0,(long)*piVar1 << 7);
                    iVar11 = *piVar1;
                    if (0 < iVar11) {
                      puVar14 = *(undefined2 **)(lVar20 + (long)iVar21 * 8 + 0x18);
                      lVar13 = 0;
                      do {
                        lVar2 = lVar13 * 8;
                        lVar13 = lVar13 + 1;
                        **(undefined2 **)(lVar20 + 0x20 + (long)iVar21 * 8 + lVar2) = *puVar14;
                      } while (lVar13 < iVar11);
                    }
                  }
                  iVar10 = iVar10 + 1;
                  iVar21 = iVar11 + iVar21;
                  iVar19 = *(int *)(lVar17 + 0x28) + iVar19;
                } while (iVar10 < *(int *)(lVar17 + 0x3c));
                iVar10 = *local_98;
              }
              lVar15 = lVar15 + 1;
            } while (lVar15 < iVar10);
          }
          uVar9 = (**(code **)(*(long *)(param_1 + 0x230) + 8))(param_1,lVar20 + 0x20);
          if ((int)uVar9 == 0) {
            *(uint *)(lVar20 + 0x14) = uVar18;
            *(int *)(lVar20 + 0x18) = local_74;
            return uVar9;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 <= uVar8);
        iVar10 = *(int *)(lVar20 + 0x1c);
      }
      uVar18 = 0;
      local_74 = local_74 + 1;
      *(undefined4 *)(lVar20 + 0x14) = 0;
    } while (local_74 < iVar10);
    lVar15 = *(long *)(param_1 + 0x208);
  }
  *(int *)(lVar20 + 0x10) = *(int *)(lVar20 + 0x10) + 1;
  if (*(int *)(param_1 + 0x174) < 2) {
    puVar4 = (undefined4 *)(*(long *)(param_1 + 0x178) + 0xc);
    if (*(int *)(param_1 + 0x170) - 1U <= *(uint *)(lVar15 + 0x10)) {
      puVar4 = (undefined4 *)(*(long *)(param_1 + 0x178) + 0x4c);
    }
    uVar12 = *puVar4;
  }
  else {
    uVar12 = 1;
  }
  *(undefined4 *)(lVar15 + 0x1c) = uVar12;
  *(undefined8 *)(lVar15 + 0x14) = 0;
  return 1;
}

