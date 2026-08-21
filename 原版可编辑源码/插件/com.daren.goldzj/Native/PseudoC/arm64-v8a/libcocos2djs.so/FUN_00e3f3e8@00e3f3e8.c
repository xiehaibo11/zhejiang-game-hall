
int FUN_00e3f3e8(undefined1 *param_1,uint param_2,uint param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  long lVar7;
  void *__dest;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  int local_64;
  
  local_64 = 0;
  lVar14 = *(long *)(param_1 + 8);
  uVar15 = *(undefined8 *)(lVar14 + 0x10);
  if ((((param_3 == 0) || (param_4 != (long *)0x0)) &&
      ((*param_1 = 0, param_3 == 0 || (*(ushort *)(lVar14 + 0x13a8) == param_3)))) &&
     (param_2 < *(uint *)(lVar14 + 0x1398))) {
    lVar12 = *(long *)(lVar14 + 0x13a0);
    uVar1 = *(int *)(lVar12 + (ulong)param_2 * 0x10) + 1;
    uVar17 = (ulong)uVar1;
    puVar6 = (undefined4 *)
             FUN_00e13bcc(uVar15,1,(ulong)*(uint *)(param_1 + 0x20) << 2,uVar17 << 2,
                          *(undefined8 *)(param_1 + 0x28),&local_64);
    *(undefined4 **)(param_1 + 0x28) = puVar6;
    if (local_64 == 0) {
      *(uint *)(param_1 + 0x20) = uVar1;
      if (uVar1 != 0) {
        plVar2 = (long *)(lVar12 + (ulong)param_2 * 0x10 + 8);
        if (param_3 == 0) {
          uVar18 = 0;
          do {
            while (uVar18 != 0) {
              if (*(uint *)(lVar14 + 0x13ac) <= *(uint *)(*plVar2 + (ulong)((int)uVar18 - 1) * 4))
              goto LAB_00e3f680;
              puVar6[uVar18] = 0;
              uVar18 = uVar18 + 1;
              if (uVar17 <= uVar18) goto LAB_00e3f620;
            }
            *puVar6 = 0x10000;
            uVar18 = 1;
          } while (1 < uVar17);
        }
        else {
          uVar18 = 0;
          do {
            while (uVar18 != 0) {
              uVar1 = *(uint *)(*plVar2 + (ulong)((int)uVar18 - 1) * 4);
              if (*(uint *)(lVar14 + 0x13ac) <= uVar1) goto LAB_00e3f680;
              lVar16 = *(long *)(lVar14 + 0x13b0);
              lVar12 = 0;
              puVar6[uVar18] = 0x10000;
              plVar13 = param_4;
              do {
                plVar3 = (long *)(*(long *)(lVar16 + (ulong)uVar1 * 8) + lVar12);
                lVar8 = *plVar3;
                lVar4 = plVar3[1];
                if (lVar4 < lVar8) {
LAB_00e3f574:
                  uVar9 = 0x10000;
                }
                else {
                  lVar10 = plVar3[2];
                  if (lVar10 < lVar4) goto LAB_00e3f574;
                  if (lVar4 == 0) goto LAB_00e3f574;
                  uVar9 = 0x10000;
                  if (-1 < lVar8 || lVar10 < 1) {
                    lVar11 = *plVar13;
                    uVar9 = 0;
                    if ((lVar8 <= lVar11) && (lVar11 <= lVar10)) {
                      if (lVar11 == lVar4) goto LAB_00e3f574;
                      lVar7 = lVar11 - lVar8;
                      lVar8 = lVar4 - lVar8;
                      if (lVar4 <= lVar11) {
                        lVar7 = lVar10 - lVar11;
                        lVar8 = lVar10 - lVar4;
                      }
                      uVar9 = FT_DivFix(lVar7,lVar8);
                    }
                  }
                }
                uVar5 = FT_MulFix((long)*(int *)(*(long *)(param_1 + 0x28) + uVar18 * 4),uVar9);
                puVar6 = *(undefined4 **)(param_1 + 0x28);
                lVar12 = lVar12 + 0x18;
                plVar13 = plVar13 + 1;
                puVar6[uVar18] = uVar5;
              } while ((ulong)param_3 * 0x18 - lVar12 != 0);
              uVar18 = uVar18 + 1;
              if (uVar17 <= uVar18) goto LAB_00e3f620;
            }
            *puVar6 = 0x10000;
            uVar18 = 1;
          } while (1 < uVar17);
        }
      }
LAB_00e3f620:
      *(uint *)(param_1 + 0x10) = param_2;
      if (param_3 != 0) {
        __dest = (void *)FUN_00e13bcc(uVar15,1,(ulong)*(uint *)(param_1 + 0x14) << 3,
                                      (ulong)param_3 << 3,*(undefined8 *)(param_1 + 0x18),&local_64)
        ;
        *(void **)(param_1 + 0x18) = __dest;
        if (local_64 != 0) {
          return local_64;
        }
        memcpy(__dest,param_4,(ulong)param_3 << 3);
      }
      *(uint *)(param_1 + 0x14) = param_3;
      *param_1 = 1;
    }
  }
  else {
LAB_00e3f680:
    local_64 = 3;
  }
  return local_64;
}

