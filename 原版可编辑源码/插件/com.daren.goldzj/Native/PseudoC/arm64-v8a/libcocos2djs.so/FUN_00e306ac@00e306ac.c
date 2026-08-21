
int FUN_00e306ac(long param_1,long param_2,long param_3,uint *param_4)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint *puVar14;
  undefined8 uVar15;
  long *plVar16;
  uint uVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  uint *puVar21;
  ulong *puVar22;
  ulong local_70;
  int local_64;
  
  uVar15 = *(undefined8 *)(param_1 + 0x38);
  local_64 = FUN_00e1bb5c(param_1,param_3);
  if ((local_64 == 0) && (sVar2 = FUN_00e1bcf8(param_1,&local_64), local_64 == 0)) {
    if (sVar2 != 1) {
LAB_00e30be8:
      plVar16 = (long *)0x0;
LAB_00e30bec:
      local_64 = 8;
      goto LAB_00e30708;
    }
    lVar7 = FUN_00e1c3a4(param_1,&local_64);
    if (local_64 == 0) {
      uVar3 = FUN_00e1bcf8(param_1,&local_64);
      *param_4 = (uint)uVar3;
      if (local_64 == 0) {
        if (uVar3 == 0) goto LAB_00e30be8;
        plVar16 = (long *)FUN_00e13bcc(uVar15,8,0,uVar3,0,&local_64);
        if (local_64 != 0) goto LAB_00e30708;
        if (*param_4 != 0) {
          uVar18 = 0;
          do {
            lVar8 = FUN_00e1c3a4(param_1,&local_64);
            plVar16[uVar18] = lVar8;
            if (local_64 != 0) goto LAB_00e30708;
            uVar18 = uVar18 + 1;
          } while (uVar18 < *param_4);
        }
        local_64 = FUN_00e1bb5c(param_1,lVar7 + param_3);
        if (local_64 != 0) goto LAB_00e30708;
        uVar4 = FUN_00e1bcf8(param_1,&local_64);
        *(undefined2 *)(param_4 + 4) = uVar4;
        if (local_64 != 0) goto LAB_00e30708;
        uVar3 = FUN_00e1bcf8(param_1,&local_64);
        param_4[5] = (uint)uVar3;
        if (local_64 != 0) goto LAB_00e30708;
        if ((uint)(ushort)param_4[4] == **(uint **)(param_2 + 0x18)) {
          uVar9 = FUN_00e13bcc(uVar15,8,0,uVar3,0,&local_64);
          *(undefined8 *)(param_4 + 6) = uVar9;
          if (local_64 == 0) {
            if (param_4[5] != 0) {
              uVar13 = (ulong)(ushort)param_4[4];
              uVar18 = 0;
              do {
                lVar7 = FUN_00e13bcc(uVar15,0x18,0,uVar13,0,&local_64);
                *(long *)(*(long *)(param_4 + 6) + uVar18 * 8) = lVar7;
                if (local_64 != 0) goto LAB_00e30708;
                uVar13 = (ulong)(ushort)param_4[4];
                if ((ushort)param_4[4] != 0) {
                  uVar20 = 0;
                  puVar22 = (ulong *)(lVar7 + 8);
                  do {
                    uVar13 = FUN_00e1bcf8(param_1,&local_64);
                    if (local_64 != 0) goto LAB_00e30708;
                    uVar10 = FUN_00e1bcf8(param_1,&local_64);
                    if (local_64 != 0) goto LAB_00e30708;
                    uVar11 = FUN_00e1bcf8(param_1,&local_64);
                    if (local_64 != 0) goto LAB_00e30708;
                    puVar22[-1] = -((uVar13 & 0xffffffff) >> 0xf & 1) & 0xfffffffffffc0000 |
                                  (uVar13 & 0xffff) << 2;
                    *puVar22 = -((uVar10 & 0xffffffff) >> 0xf & 1) & 0xfffffffffffc0000 |
                               (uVar10 & 0xffff) << 2;
                    puVar22[1] = -(uVar11 >> 0xf & 1) & 0xfffffffffffc0000 | (uVar11 & 0xffff) << 2;
                    uVar13 = (ulong)(ushort)param_4[4];
                    uVar20 = uVar20 + 1;
                    puVar22 = puVar22 + 3;
                  } while (uVar20 < uVar13);
                }
                uVar18 = uVar18 + 1;
              } while (uVar18 < param_4[5]);
            }
            lVar7 = FUN_00e13bcc(uVar15,0x18,0,*param_4,0,&local_64);
            *(long *)(param_4 + 2) = lVar7;
            if (((local_64 == 0) && (*param_4 != 0)) &&
               (local_64 = FUN_00e1bb5c(param_1,*plVar16 + param_3), local_64 == 0)) {
              local_70 = 0;
              while( true ) {
                uVar5 = FUN_00e1bcf8(param_1,&local_64);
                puVar14 = (uint *)(lVar7 + local_70 * 0x18);
                *puVar14 = uVar5 & 0xffff;
                if ((local_64 != 0) || (uVar5 = FUN_00e1bcf8(param_1,&local_64), local_64 != 0))
                break;
                uVar6 = FUN_00e1bcf8(param_1,&local_64);
                uVar6 = uVar6 & 0xffff;
                puVar21 = (uint *)(lVar7 + local_70 * 0x18 + 4);
                *puVar21 = uVar6;
                if (local_64 != 0) break;
                uVar5 = uVar5 & 0xffff;
                if ((uVar6 < uVar5) || (param_4[5] < uVar6)) goto LAB_00e30bec;
                lVar8 = FUN_00e13bcc(uVar15,4,0,uVar6,0,&local_64);
                plVar19 = (long *)(lVar7 + local_70 * 0x18 + 8);
                *plVar19 = lVar8;
                if (local_64 != 0) break;
                uVar6 = 0;
                if (*puVar21 != 0) {
                  uVar18 = 0;
                  do {
                    uVar6 = FUN_00e1bcf8(param_1,&local_64);
                    *(uint *)(*plVar19 + uVar18 * 4) = uVar6 & 0xffff;
                    if (local_64 != 0) goto LAB_00e30708;
                    if (param_4[5] <= (uVar6 & 0xffff)) goto LAB_00e30bec;
                    uVar6 = *puVar21;
                    uVar18 = uVar18 + 1;
                  } while (uVar18 < uVar6);
                }
                lVar8 = FUN_00e13bcc(uVar15,2,0,*puVar14 * uVar6,0,&local_64);
                plVar19 = (long *)(lVar7 + local_70 * 0x18 + 0x10);
                *plVar19 = lVar8;
                if (local_64 != 0) break;
                uVar6 = *puVar14;
                uVar17 = *puVar21;
                if (uVar17 * uVar6 != 0) {
                  if (uVar5 == 0) {
                    do {
                      if (uVar17 != 0) {
                        uVar6 = 0;
                        do {
                          cVar1 = FUN_00e1dabc(param_1,&local_64);
                          if (local_64 != 0) goto LAB_00e30708;
                          uVar17 = uVar5 + uVar6;
                          uVar6 = uVar6 + 1;
                          *(short *)(*plVar19 + (ulong)uVar17 * 2) = (short)cVar1;
                          uVar17 = *puVar21;
                        } while (uVar6 < uVar17);
                        uVar5 = uVar5 + uVar6;
                        uVar6 = *puVar14;
                      }
                    } while (uVar5 < uVar17 * uVar6);
                  }
                  else {
                    uVar17 = 0;
                    uVar6 = 0;
                    do {
                      do {
                        uVar4 = FUN_00e1bcf8(param_1,&local_64);
                        if (local_64 != 0) goto LAB_00e30708;
                        uVar6 = uVar6 + 1;
                        *(undefined2 *)(*plVar19 + (ulong)uVar17 * 2) = uVar4;
                        uVar17 = uVar17 + 1;
                      } while (uVar6 < uVar5);
                      uVar12 = *puVar21;
                      if (uVar6 < uVar12) {
                        do {
                          cVar1 = FUN_00e1dabc(param_1,&local_64);
                          if (local_64 != 0) goto LAB_00e30708;
                          uVar6 = uVar6 + 1;
                          *(short *)(*plVar19 + (ulong)uVar17 * 2) = (short)cVar1;
                          uVar12 = *puVar21;
                          uVar17 = uVar17 + 1;
                        } while (uVar6 < uVar12);
                      }
                      uVar6 = 0;
                    } while (uVar17 < uVar12 * *puVar14);
                  }
                }
                local_70 = local_70 + 1;
                if (*param_4 <= local_70) break;
                lVar7 = *(long *)(param_4 + 2);
                local_64 = FUN_00e1bb5c(param_1,plVar16[local_70] + param_3);
                if (local_64 != 0) break;
              }
            }
          }
          goto LAB_00e30708;
        }
        goto LAB_00e30bec;
      }
    }
  }
  plVar16 = (long *)0x0;
LAB_00e30708:
  FUN_00e139fc(uVar15,plVar16);
  return local_64;
}

