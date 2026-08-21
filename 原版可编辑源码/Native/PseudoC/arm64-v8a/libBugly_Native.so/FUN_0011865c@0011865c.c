
void FUN_0011865c(undefined8 param_1,char *param_2,long param_3,ulong param_4,ulong param_5,
                 char *param_6,long param_7,ulong *param_8)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  size_t __n;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong *puVar16;
  uint uVar17;
  uint *puVar18;
  ulong uVar19;
  ulong local_150;
  undefined1 auStack_130 [4];
  int local_12c;
  ulong local_118;
  long lStack_110;
  int local_108 [4];
  long local_f8;
  uint local_f0;
  byte local_ec;
  short local_ea;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  long alStack_d0 [4];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long local_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  lStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (param_2[2] == '\0') {
    lVar15 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x20,&local_90,8,0);
    uVar8 = 0;
    if (lVar15 != 8) goto LAB_001186fc;
    if ((ushort)local_78 == 0) {
      lVar15 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x38,&local_78,2,0);
      uVar8 = 0;
      if ((lVar15 != 2) || ((ushort)local_78 == 0)) goto LAB_001186fc;
    }
    uVar17 = 0;
    lVar15 = local_90;
    do {
      lVar10 = _Uelf64_memory_read(param_2,lVar15 + **(long **)(param_2 + 0x18),&local_f0,4,0);
      if (lVar10 != 4) break;
      if (local_f0 == 1) {
        lVar10 = _Uelf64_memory_read(param_2,lVar15 + **(long **)(param_2 + 0x18) + 8,&local_e8,8,0)
        ;
        if (lVar10 != 8) break;
        if (local_e8 == param_4) {
          lVar15 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + lVar15 + 0x10,&local_e0
                                       ,8,0);
          if (lVar15 == 8) {
            cVar6 = *param_2;
            uVar13 = local_e0;
            goto joined_r0x00118af4;
          }
          break;
        }
      }
      uVar17 = uVar17 + 1;
      lVar15 = lVar15 + 0x38;
    } while (uVar17 < (ushort)local_78);
  }
  else {
    lVar15 = *(long *)(param_2 + 8);
    if ((ulong)*(ushort *)(lVar15 + 0x38) != 0) {
      uVar13 = 0;
      puVar16 = (ulong *)(lVar15 + *(long *)(lVar15 + 0x20) + 0x10);
LAB_001186d0:
      if (((int)puVar16[-2] != 1) || (puVar16[-1] != param_4)) goto LAB_001186e8;
      uVar13 = *puVar16;
      cVar6 = *param_2;
joined_r0x00118af4:
      if (cVar6 != '\0') {
        local_150 = param_7 - 1;
        if (param_7 == 0 || local_150 == 0) {
          log2Console(3,"Bugly-libunwind",
                      "lookup_symbol called with a buffer too small to hold a name %zu\n",param_7);
        }
        else {
          if (param_2[2] == '\0') {
            if (lStack_88 == 0) {
              lVar15 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x28,&lStack_88,8,0
                                          );
              uVar8 = 0;
              if (lVar15 != 8) goto LAB_001186fc;
            }
            lVar15 = (long)&local_78 + 2;
            if (local_78._2_2_ == 0) {
              lVar10 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x3a,lVar15,2,0);
              uVar8 = 0;
              if (lVar10 != 2) goto LAB_001186fc;
            }
            if (local_78._4_2_ == 0) {
              lVar10 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x3c,
                                           (long)&local_78 + 4,2,0);
              uVar8 = 0;
              if (lVar10 != 2) goto LAB_001186fc;
            }
            lVar10 = lStack_88;
            lVar12 = **(long **)(param_2 + 0x18);
            uVar14 = local_78 >> 0x10 & 0xffff;
            if (lStack_88 + uVar14 * local_78._4_2_ <=
                (ulong)((*(long **)(param_2 + 0x18))[1] - lVar12)) {
              if (local_78._4_2_ == 0) {
                lVar12 = _Uelf64_memory_read(param_2,lVar12 + 0x3c,(long)&local_78 + 4,2,0);
                uVar8 = 0;
                if (lVar12 != 2) goto LAB_001186fc;
                uVar14 = local_78 >> 0x10 & 0xffff;
              }
              if ((int)uVar14 == 0) {
                lVar12 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x3a,lVar15,2,0);
                uVar8 = 0;
                if (lVar12 != 2) goto LAB_001186fc;
              }
              if (local_78._4_2_ != 0) {
                uVar17 = 0;
                while (lVar12 = _Uelf64_memory_read(param_2,lVar10 + **(long **)(param_2 + 0x18) + 4
                                                    ,(ulong)auStack_130 | 4,4,0), lVar12 == 4) {
                  if ((local_12c == 0xb) || (local_12c == 2)) {
                    lVar12 = _Uelf64_memory_read(param_2,lVar10 + **(long **)(param_2 + 0x18) + 0x28
                                                 ,local_108,4,0);
                    if (lVar12 != 4) break;
                    lVar12 = (long)local_108[0];
                    if ((lStack_88 != 0) ||
                       (lVar11 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x28,
                                                     &lStack_88,8,0), lVar11 == 8)) {
                      if (local_78._2_2_ == 0) {
                        lVar11 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x3a,
                                                     lVar15,2,0);
                        if (lVar11 != 2) goto LAB_00119054;
                      }
                      lVar11 = **(long **)(param_2 + 0x18);
                      lVar12 = lStack_88 + lVar12 * (ulong)local_78._2_2_;
                      uVar14 = lVar12 + (ulong)local_78._2_2_;
                      uVar19 = (*(long **)(param_2 + 0x18))[1] - lVar11;
                      if (uVar19 < uVar14) {
                        pcVar9 = "string shdr table outside of image? (%lu > %lu)\n";
                      }
                      else {
                        lVar11 = _Uelf64_memory_read(param_2,lVar12 + lVar11 + 0x18,&local_d8,8,0);
                        if ((lVar11 != 8) ||
                           (lVar12 = _Uelf64_memory_read(param_2,lVar12 + **(long **)(param_2 + 0x18
                                                                                     ) + 0x20,
                                                         alStack_d0,8,0), lVar12 != 8))
                        goto LAB_00119054;
                        uVar14 = alStack_d0[0] + local_d8;
                        if (uVar14 <= uVar19) {
                          log2Console(3,"Bugly-libunwind","strtab=0x%lx\n");
                          uVar14 = local_d8;
                          lVar12 = _Uelf64_memory_read(param_2,lVar10 + **(long **)(param_2 + 0x18)
                                                               + 0x18,&local_118,8,0);
                          if (((lVar12 == 8) &&
                              (lVar12 = _Uelf64_memory_read(param_2,lVar10 + **(long **)(param_2 +
                                                                                        0x18) + 0x20
                                                            ,&lStack_110,8,0), lVar12 == 8)) &&
                             (lVar12 = _Uelf64_memory_read(param_2,lVar10 + **(long **)(param_2 +
                                                                                       0x18) + 0x38,
                                                           &local_f8,8,0), lVar12 == 8)) {
                            log2Console(3,"Bugly-libunwind","symtab=0x%lx[%d]\n",local_118,local_12c
                                       );
                            uVar19 = lStack_110 + local_118;
                            for (uVar3 = local_118; uVar3 < uVar19; uVar3 = local_f8 + uVar3) {
                              lVar12 = _Uelf64_memory_read(param_2,uVar3 + **(long **)(param_2 +
                                                                                      0x18) + 4,
                                                           (ulong)&local_f0 | 4,1,0);
                              if ((lVar12 != 1) ||
                                 (lVar12 = _Uelf64_memory_read(param_2,uVar3 + **(long **)(param_2 +
                                                                                          0x18) + 6,
                                                               (ulong)&local_f0 | 6,2,0),
                                 lVar12 != 2)) goto LAB_001186f8;
                              if (((local_ec & 0xf) == 2) && (local_ea != 0)) {
                                lVar12 = _Uelf64_memory_read(param_2,uVar3 + **(long **)(param_2 +
                                                                                        0x18) + 8,
                                                             &local_e8,8,0);
                                if (lVar12 != 8) goto LAB_001186f8;
                                lVar12 = 0;
                                if (local_ea != -0xf) {
                                  lVar12 = param_3 - uVar13;
                                }
                                uVar2 = lVar12 + local_e8;
                                log2Console(3,"Bugly-libunwind","0x%016lx info=0x%02x\n",uVar2,
                                            local_ec);
                                lVar12 = _Uelf64_memory_read(param_2,uVar3 + **(long **)(param_2 +
                                                                                        0x18) + 0x10
                                                             ,&local_e0,8,0);
                                if (lVar12 != 8) goto LAB_001186f8;
                                if ((uVar2 <= param_5) && (param_5 - uVar2 < local_e0)) {
                                  lVar12 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) +
                                                                       uVar3,&local_f0,4,0);
                                  if (lVar12 != 4) goto LAB_001186f8;
                                  lVar12 = **(long **)(param_2 + 0x18);
                                  uVar19 = uVar14 + local_f0;
                                  if (((uVar19 <= (ulong)((*(long **)(param_2 + 0x18))[1] - lVar12))
                                      && (!CARRY8(uVar14,(ulong)local_f0))) &&
                                     (lVar12 = _Uelf64_memory_read(param_2,uVar19 + lVar12,param_6,
                                                                   local_150,1), lVar12 != 0)) {
                                    param_6[local_150] = '\0';
                                    if (param_8 != (ulong *)0x0) {
                                      *param_8 = param_5 - uVar2;
                                    }
                                    goto LAB_001190ec;
                                  }
                                  break;
                                }
                              }
                            }
                            goto LAB_0011904c;
                          }
                          break;
                        }
                        pcVar9 = "string table outside of image? (%lu > %lu)\n";
                      }
                      log2Console(3,"Bugly-libunwind",pcVar9,uVar14,uVar19);
                    }
                  }
                  else {
LAB_0011904c:
                    lVar10 = lVar10 + (local_78 >> 0x10 & 0xffff);
                  }
LAB_00119054:
                  uVar17 = uVar17 + 1;
                  uVar8 = 0;
                  if (local_78._4_2_ <= uVar17) goto LAB_001186fc;
                }
              }
              goto LAB_001186f8;
            }
          }
          else {
            lVar15 = *(long *)(param_2 + 8);
            if (*(long *)(lVar15 + 0x28) +
                (ulong)*(ushort *)(lVar15 + 0x3a) * (ulong)*(ushort *)(lVar15 + 0x3c) <=
                *(ulong *)(param_2 + 0x10)) {
              lVar10 = lVar15 + *(long *)(lVar15 + 0x28);
              uVar8 = 0;
              if ((lVar10 == 0) || (*(ushort *)(lVar15 + 0x3c) == 0)) goto LAB_001186fc;
              uVar17 = 0;
              do {
                if ((*(int *)(lVar10 + 4) == 0xb) || (*(int *)(lVar10 + 4) == 2)) {
                  lVar11 = *(long *)(param_2 + 8);
                  lVar12 = *(long *)(lVar11 + 0x28) +
                           (long)*(int *)(lVar10 + 0x28) * (ulong)*(ushort *)(lVar11 + 0x3a);
                  if (*(ulong *)(param_2 + 0x10) < lVar12 + (ulong)*(ushort *)(lVar11 + 0x3a)) {
                    log2Console(3,"Bugly-libunwind",
                                "string shdr table outside of image? (%lu > %lu)\n");
                  }
                  else {
                    lVar12 = lVar11 + lVar12;
                    uVar14 = *(long *)(lVar12 + 0x20) + *(long *)(lVar12 + 0x18);
                    if (*(ulong *)(param_2 + 0x10) < uVar14) {
                      log2Console(3,"Bugly-libunwind","string table outside of image? (%lu > %lu)\n"
                                  ,uVar14);
                    }
                    else {
                      lVar4 = *(long *)(lVar10 + 0x18);
                      lVar5 = *(long *)(lVar10 + 0x20);
                      log2Console(3,"Bugly-libunwind","strtab=0x%lx\n");
                      lVar12 = *(long *)(lVar12 + 0x18) + *(long *)(param_2 + 8);
                      if (lVar12 != 0) {
                        log2Console(3,"Bugly-libunwind","symtab=0x%lx[%d]\n",
                                    *(undefined8 *)(lVar10 + 0x18),*(undefined4 *)(lVar10 + 4));
                        if (0 < lVar5) {
                          puVar18 = (uint *)(lVar11 + lVar4);
                          puVar1 = (uint *)((long)puVar18 + lVar5);
                          do {
                            if (((puVar18[1] & 0xf) == 2) && (*(short *)((long)puVar18 + 6) != 0)) {
                              lVar11 = 0;
                              if (*(short *)((long)puVar18 + 6) != -0xf) {
                                lVar11 = param_3 - uVar13;
                              }
                              uVar14 = *(long *)(puVar18 + 2) + lVar11;
                              log2Console(3,"Bugly-libunwind","0x%016lx info=0x%02x\n",uVar14);
                              if ((uVar14 <= param_5) &&
                                 (param_5 - uVar14 < *(ulong *)(puVar18 + 4))) {
                                pcVar9 = (char *)(lVar12 + (ulong)*puVar18);
                                if (pcVar9 <= (char *)(*(long *)(param_2 + 8) +
                                                      *(long *)(param_2 + 0x10))) {
                                  __n = (long)pcVar9 - *(long *)(param_2 + 8);
                                  if (local_150 <= __n) {
                                    __n = local_150;
                                  }
                                  pcVar9 = strncpy(param_6,pcVar9,__n);
                                  pcVar9[__n] = '\0';
                                  local_150 = __n;
                                  if (*pcVar9 != '\0') {
                                    if (param_8 == (ulong *)0x0) {
LAB_001190ec:
                                      uVar8 = 1;
                                    }
                                    else {
                                      uVar8 = 1;
                                      *param_8 = param_5 - uVar14;
                                    }
                                    goto LAB_001186fc;
                                  }
                                }
                                break;
                              }
                            }
                            puVar18 = (uint *)((long)puVar18 + *(long *)(lVar10 + 0x38));
                          } while (puVar18 < puVar1);
                        }
                        goto LAB_00118a1c;
                      }
                    }
                  }
                }
                else {
LAB_00118a1c:
                  lVar10 = lVar10 + (ulong)*(ushort *)(lVar15 + 0x3a);
                }
                uVar17 = uVar17 + 1;
                uVar8 = 0;
              } while (uVar17 < *(ushort *)(lVar15 + 0x3c));
              goto LAB_001186fc;
            }
          }
          log2Console(3,"Bugly-libunwind","section table outside of image? (%lu > %lu)\n");
        }
      }
    }
  }
LAB_001186f8:
  uVar8 = 0;
LAB_001186fc:
  if (*(long *)(lVar7 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
LAB_001186e8:
  uVar13 = uVar13 + 1;
  puVar16 = puVar16 + 7;
  if (*(ushort *)(lVar15 + 0x38) <= uVar13) goto LAB_001186f8;
  goto LAB_001186d0;
}

