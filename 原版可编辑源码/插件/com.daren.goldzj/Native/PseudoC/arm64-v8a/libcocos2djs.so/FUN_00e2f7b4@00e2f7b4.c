
int FUN_00e2f7b4(long param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  short *psVar14;
  long lVar15;
  long lVar16;
  void *__dest;
  long lVar17;
  long lVar18;
  ushort *puVar19;
  long lVar20;
  uint *puVar21;
  long lVar22;
  undefined8 *puVar23;
  ulong uVar24;
  ushort *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  uint local_bc;
  ushort *local_b8;
  uint local_78;
  uint local_74;
  ulong local_70;
  int local_64;
  
  puVar21 = *(uint **)(param_1 + 0x4c0);
  lVar16 = param_2[7];
  local_78 = 0;
  if ((((puVar21 == (uint *)0x0) || (*(long *)(param_1 + 0x480) == 0)) ||
      (local_64 = (**(code **)(param_1 + 0x340))(param_1,0x63766172,param_2,&local_70),
      local_64 != 0)) || (local_64 = FUN_00e1d718(param_2,local_70), local_64 != 0)) {
    __dest = (void *)0x0;
    lVar20 = 0;
    puVar19 = (ushort *)0x0;
    lVar17 = 0;
    lVar18 = 0;
    local_64 = 0;
  }
  else {
    lVar20 = param_2[8];
    lVar22 = *param_2;
    lVar17 = FUN_00e1da20(param_2);
    if (lVar17 == 0x10000) {
      __dest = (void *)FUN_00e13bcc(lVar16,8,0,*puVar21,0,&local_64);
      if (local_64 == 0) {
        lVar17 = FUN_00e13bcc(lVar16,8,0,*puVar21,0,&local_64);
        if (local_64 == 0) {
          lVar18 = FUN_00e13bcc(lVar16,8,0,*puVar21,0,&local_64);
          if (local_64 == 0) {
            uVar2 = FUN_00e1d970(param_2);
            uVar5 = FUN_00e1d970(param_2);
            uVar12 = uVar2 & 0xfff;
            if ((ulong)(uVar12 << 2) + (uVar5 & 0xffff) <= local_70) {
              uVar5 = (lVar20 - lVar22) + (uVar5 & 0xffff);
              if ((uVar2 & 0xffff) >> 0xf == 0) {
                puVar19 = (ushort *)0x0;
              }
              else {
                lVar8 = *param_2;
                lVar22 = param_2[8];
                lVar20 = lVar8 + uVar5;
                if ((ulong)(param_2[9] - lVar8) <= uVar5) {
                  lVar20 = param_2[9];
                }
                param_2[8] = lVar20;
                puVar19 = (ushort *)FUN_00e2fe8c(param_2,local_70,&local_78);
                lVar15 = *param_2;
                uVar5 = param_2[8] - lVar15;
                lVar20 = lVar15 + (lVar22 - lVar8);
                if ((ulong)(param_2[9] - lVar15) <= (ulong)(lVar22 - lVar8)) {
                  lVar20 = param_2[9];
                }
                param_2[8] = lVar20;
              }
              lVar20 = FUN_00e13bcc(lVar16,8,0,*(undefined8 *)(param_1 + 0x478),0,&local_64);
              uVar2 = local_78;
              if (local_64 == 0) {
                if (uVar12 != 0) {
                  local_bc = 0;
                  local_b8 = (ushort *)0x0;
                  do {
                    uVar6 = FUN_00e1d970(param_2);
                    uVar3 = FUN_00e1d970(param_2);
                    if ((uVar3 >> 0xf & 1) == 0) {
                      if ((puVar21[0x1a] <= (uVar3 & 0xfff)) || (*(long *)(puVar21 + 0x1c) == 0)) {
                        local_64 = 8;
                        FUN_00e1d90c(param_2);
                        goto joined_r0x00e2fdac;
                      }
                      memcpy(__dest,(void *)(*(long *)(puVar21 + 0x1c) +
                                            (ulong)(*puVar21 * (uVar3 & 0xfff)) * 8),
                             (ulong)*puVar21 << 3);
                    }
                    else if (*puVar21 != 0) {
                      uVar9 = 0;
                      do {
                        uVar4 = FUN_00e1d970(param_2);
                        *(long *)((long)__dest + uVar9 * 8) =
                             (long)(int)(-(uVar4 >> 0xf & 1) & 0xfffc0000 | (uVar4 & 0xffff) << 2);
                        uVar9 = uVar9 + 1;
                      } while (uVar9 < *puVar21);
                    }
                    if ((((uVar3 & 0xffff) >> 0xe & 1) != 0) && (*puVar21 != 0)) {
                      uVar9 = 0;
                      do {
                        uVar4 = FUN_00e1d970(param_2);
                        *(long *)(lVar17 + uVar9 * 8) =
                             (long)(int)(-(uVar4 >> 0xf & 1) & 0xfffc0000 | (uVar4 & 0xffff) << 2);
                        uVar9 = uVar9 + 1;
                      } while (uVar9 < *puVar21);
                      if (*puVar21 != 0) {
                        uVar9 = 0;
                        do {
                          uVar4 = FUN_00e1d970(param_2);
                          *(long *)(lVar18 + uVar9 * 8) =
                               (long)(int)(-(uVar4 >> 0xf & 1) & 0xfffc0000 | (uVar4 & 0xffff) << 2)
                          ;
                          uVar9 = uVar9 + 1;
                        } while (uVar9 < *puVar21);
                      }
                    }
                    lVar22 = FUN_00e3002c(puVar21,uVar3 & 0xffff,__dest,lVar17,lVar18);
                    if (lVar22 != 0) {
                      lVar13 = *param_2;
                      lVar15 = param_2[8];
                      lVar8 = lVar13 + uVar5;
                      if ((ulong)(param_2[9] - lVar13) <= uVar5) {
                        lVar8 = param_2[9];
                      }
                      param_2[8] = lVar8;
                      if (((uVar3 & 0xffff) >> 0xd & 1) == 0) {
                        local_74 = uVar2;
                        puVar25 = puVar19;
                        if (uVar2 == 0) goto LAB_00e2fc0c;
LAB_00e2fc04:
                        uVar9 = (ulong)local_74;
                      }
                      else {
                        puVar25 = (ushort *)FUN_00e2fe8c(param_2,local_70,&local_74);
                        local_b8 = puVar25;
                        if (local_74 != 0) goto LAB_00e2fc04;
LAB_00e2fc0c:
                        uVar9 = *(ulong *)(param_1 + 0x478);
                      }
                      uVar3 = local_74;
                      puVar7 = (undefined8 *)FUN_00e3013c(param_2,local_70,uVar9);
                      if ((puVar25 == (ushort *)0x0) || (puVar7 == (undefined8 *)0x0)) {
LAB_00e2fd04:
                        if (local_b8 == (ushort *)0xffffffffffffffff) {
                          puVar25 = (ushort *)0xffffffffffffffff;
                        }
                        else {
LAB_00e2fd10:
                          FUN_00e139fc(lVar16);
                          puVar25 = (ushort *)0x0;
                        }
                      }
                      else {
                        if (local_b8 != (ushort *)0xffffffffffffffff) {
                          if (uVar3 != 0) {
                            uVar9 = (ulong)uVar3;
                            puVar23 = puVar7;
                            do {
                              if ((ulong)*puVar25 < *(ulong *)(param_1 + 0x478)) {
                                lVar10 = (ulong)*puVar25 * 8;
                                lVar11 = *(long *)(lVar20 + lVar10);
                                lVar8 = FT_MulFix(*puVar23,lVar22);
                                *(long *)(lVar20 + lVar10) = lVar8 + lVar11;
                              }
                              puVar25 = puVar25 + 1;
                              uVar9 = uVar9 - 1;
                              puVar23 = puVar23 + 1;
                            } while (uVar9 != 0);
                            goto LAB_00e2fd04;
                          }
                          goto LAB_00e2fd10;
                        }
                        puVar25 = (ushort *)0xffffffffffffffff;
                        if ((*(ulong *)(param_1 + 0x478) == (ulong)uVar3) && (uVar3 != 0)) {
                          uVar9 = 0;
                          uVar24 = 1;
                          do {
                            lVar10 = *(long *)(lVar20 + uVar9 * 8);
                            lVar8 = FT_MulFix(puVar7[uVar9],lVar22);
                            *(long *)(lVar20 + uVar9 * 8) = lVar8 + lVar10;
                            bVar1 = uVar24 < *(ulong *)(param_1 + 0x478);
                            uVar9 = uVar24;
                            uVar24 = (ulong)((int)uVar24 + 1);
                          } while (bVar1);
                          goto LAB_00e2fd04;
                        }
                      }
                      FUN_00e139fc(lVar16,puVar7);
                      lVar22 = *param_2 + (lVar15 - lVar13);
                      if ((ulong)(param_2[9] - *param_2) <= (ulong)(lVar15 - lVar13)) {
                        lVar22 = param_2[9];
                      }
                      param_2[8] = lVar22;
                      local_b8 = puVar25;
                    }
                    local_bc = local_bc + 1;
                    uVar5 = uVar5 + (uVar6 & 0xffff);
                  } while (local_bc < uVar12);
                }
                uVar5 = *(ulong *)(param_1 + 0x478);
                if (uVar5 != 0) {
                  lVar22 = *(long *)(param_1 + 0x480);
                  if (uVar5 < 4) {
                    uVar6 = 0;
                    uVar12 = 0;
                  }
                  else {
                    uVar12 = 0;
                    uVar6 = 0;
                    if (((int)(uVar5 - 1) != -1) && (uVar5 - 1 >> 0x20 == 0)) {
                      uVar6 = uVar5 & 0xfffffffffffffffc;
                      puVar7 = (undefined8 *)(lVar20 + 0x10);
                      psVar14 = (short *)(lVar22 + 4);
                      uVar12 = (uint)uVar6;
                      uVar9 = uVar6;
                      do {
                        uVar26 = puVar7[-1];
                        uVar28 = puVar7[1];
                        uVar27 = *puVar7;
                        psVar14[-2] = psVar14[-2] +
                                      (short)((uint)((int)puVar7[-2] + 0x8000) >> 0x10);
                        *psVar14 = *psVar14 + (short)((uint)((int)uVar27 + 0x8000) >> 0x10);
                        psVar14[-1] = psVar14[-1] + (short)((uint)((int)uVar26 + 0x8000) >> 0x10);
                        puVar7 = puVar7 + 4;
                        uVar9 = uVar9 - 4;
                        psVar14[1] = psVar14[1] + (short)((uint)((int)uVar28 + 0x8000) >> 0x10);
                        psVar14 = psVar14 + 4;
                      } while (uVar9 != 0);
                      if (uVar5 == uVar6) goto LAB_00e2fa3c;
                    }
                  }
                  do {
                    uVar12 = uVar12 + 1;
                    lVar8 = uVar6 * 8;
                    lVar15 = uVar6 * 2;
                    uVar6 = (ulong)uVar12;
                    *(short *)(lVar22 + lVar15) =
                         *(short *)(lVar22 + lVar15) +
                         (short)((uint)((int)*(undefined8 *)(lVar20 + lVar8) + 0x8000) >> 0x10);
                  } while (uVar6 < uVar5);
                }
              }
LAB_00e2fa3c:
              FUN_00e1d90c(param_2);
joined_r0x00e2fdac:
              if (puVar19 == (ushort *)0xffffffffffffffff) goto LAB_00e2f850;
              goto LAB_00e2f844;
            }
            local_64 = 8;
          }
        }
        else {
          lVar18 = 0;
        }
      }
      else {
        lVar18 = 0;
        lVar17 = 0;
      }
    }
    else {
      lVar18 = 0;
      lVar17 = 0;
      __dest = (void *)0x0;
      local_64 = 0;
    }
    FUN_00e1d90c(param_2);
    lVar20 = 0;
    puVar19 = (ushort *)0x0;
  }
LAB_00e2f844:
  FUN_00e139fc(lVar16,puVar19);
LAB_00e2f850:
  FUN_00e139fc(lVar16,__dest);
  FUN_00e139fc(lVar16,lVar17);
  FUN_00e139fc(lVar16,lVar18);
  FUN_00e139fc(lVar16,lVar20);
  return local_64;
}

