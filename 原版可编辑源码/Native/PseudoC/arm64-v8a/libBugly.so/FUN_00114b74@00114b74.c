
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00114b74(undefined8 param_1,char *param_2,long param_3,ulong param_4,ulong param_5,
                 char *param_6,ulong param_7,ulong *param_8)

{
  char *pcVar1;
  uint *puVar2;
  char *__src;
  ulong uVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  char cVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  uint *puVar19;
  ulong uVar20;
  ulong local_110;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  int local_84 [5];
  ulong local_70;
  long local_68;
  int local_60 [4];
  long local_50;
  uint local_48;
  byte local_44 [2];
  short local_42;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  long local_28 [4];
  long local_8;
  
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_8 = ___stack_chk_guard;
  if (param_2[2] == '\0') {
    lVar11 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x20,&local_a8,8,0);
    if (lVar11 == 8) {
      if ((ushort)local_90 == 0) {
        lVar11 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x38,&local_90,2,0);
        if (lVar11 != 2) goto LAB_001150ec;
      }
      if ((ushort)local_90 != 0) {
        puVar19 = &local_48;
        iVar18 = 0;
        lVar11 = local_a8;
        do {
          lVar9 = _Uelf64_memory_read(param_2,lVar11 + **(long **)(param_2 + 0x18),puVar19,4,0);
          cVar15 = '\0';
          if (lVar9 != 4) goto LAB_001150f0;
          if (local_48 == 1) {
            lVar9 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 8 + lVar11,&local_40,8
                                        ,0);
            if (lVar9 != 8) goto LAB_001150f0;
            if (param_4 == local_40) {
              lVar11 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x10 + lVar11,
                                           &local_38,8,0);
              if (lVar11 != 8) goto LAB_001150f0;
              goto LAB_00114c28;
            }
          }
          iVar18 = iVar18 + 1;
          lVar11 = lVar11 + 0x38;
        } while (iVar18 < (int)(uint)(ushort)local_90);
      }
    }
  }
  else {
    lVar11 = *(long *)(param_2 + 8);
    if (*(ushort *)(lVar11 + 0x38) != 0) {
      puVar19 = (uint *)(lVar11 + *(long *)(lVar11 + 0x20));
      do {
        if ((*puVar19 == 1) && (param_4 == *(ulong *)(puVar19 + 2))) goto LAB_00114c28;
        puVar19 = puVar19 + 0xe;
      } while (puVar19 !=
               (uint *)(lVar11 + *(long *)(lVar11 + 0x20) + 0x38 +
                                 (ulong)(*(ushort *)(lVar11 + 0x38) - 1) * 0x38));
    }
  }
  goto LAB_001150ec;
LAB_00114c28:
  lVar11 = *(long *)(puVar19 + 4);
  cVar4 = *param_2;
  if (cVar4 != '\0') {
    if (param_7 < 2) {
      log2Console(3,"Bugly-libunwind",
                  "lookup_symbol called with a buffer too small to hold a name %zu\n",param_7);
    }
    else {
      cVar15 = param_2[2];
      local_110 = param_7 - 1;
      if (cVar15 == '\0') {
        if (((local_a0 == 0) &&
            (lVar9 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x28,&local_a0,8,0),
            lVar9 != 8)) ||
           ((local_90._2_2_ == 0 &&
            (lVar9 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x3a,
                                         (long)&local_90 + 2,2,0), lVar9 != 2)))) goto LAB_001150f0;
        if (local_90._4_2_ == 0) {
          lVar7 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x3c,(long)&local_90 + 4
                                      ,2,0);
          lVar9 = local_a0;
          if (lVar7 != 2) goto LAB_001150f0;
          lVar7 = **(long **)(param_2 + 0x18);
          uVar13 = (uint)local_90._2_2_;
          uVar20 = local_a0 + (int)(local_90._4_2_ * uVar13);
          if ((ulong)((*(long **)(param_2 + 0x18))[1] - lVar7) < uVar20) goto LAB_001154b0;
          if (local_90._4_2_ != 0) goto LAB_00114c98;
          lVar7 = _Uelf64_memory_read(param_2,lVar7 + 0x3c,(long)&local_90 + 4,2,0);
          if (lVar7 != 2) goto LAB_001150ec;
          if (local_90._2_2_ == 0) goto LAB_00115484;
        }
        else {
          uVar13 = (uint)local_90._2_2_;
          uVar20 = local_a0 + (int)((uint)local_90._4_2_ * (uint)local_90._2_2_);
          if ((ulong)((*(long **)(param_2 + 0x18))[1] - **(long **)(param_2 + 0x18)) < uVar20) {
LAB_001154b0:
            log2Console(3,"Bugly-libunwind","section table outside of image? (%lu > %lu)\n",uVar20);
            goto LAB_001150f0;
          }
LAB_00114c98:
          lVar9 = local_a0;
          if (uVar13 == 0) {
LAB_00115484:
            lVar7 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x3a,
                                        (long)&local_90 + 2,2,0);
            if (lVar7 != 2) goto LAB_001150ec;
          }
        }
        if (local_90._4_2_ != 0) {
          iVar18 = 0;
          do {
            lVar7 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 4 + lVar9,local_84,4,0
                                       );
            if (lVar7 != 4) goto LAB_001150f0;
            if ((local_84[0] == 2) || (local_84[0] == 0xb)) {
              lVar7 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x28 + lVar9,
                                          local_60,4,0);
              iVar6 = local_60[0];
              if (lVar7 != 4) goto LAB_001150f0;
              if ((local_a0 != 0) ||
                 (lVar7 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x28,&local_a0,8
                                              ,0), lVar7 == 8)) {
                if (local_90._2_2_ == 0) {
                  lVar7 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x3a,
                                              (long)&local_90 + 2,2,0);
                  if (lVar7 != 2) goto LAB_00114cec;
                }
                lVar7 = local_a0 + (int)(iVar6 * (uint)local_90._2_2_);
                lVar10 = **(long **)(param_2 + 0x18);
                uVar20 = (*(long **)(param_2 + 0x18))[1] - lVar10;
                if (uVar20 < lVar7 + (ulong)local_90._2_2_) {
                  log2Console(3,"Bugly-libunwind",
                              "string shdr table outside of image? (%lu > %lu)\n",
                              lVar7 + (ulong)local_90._2_2_,uVar20);
                }
                else {
                  lVar10 = _Uelf64_memory_read(param_2,lVar10 + 0x18 + lVar7,&local_30,8,0);
                  if ((lVar10 == 8) &&
                     (lVar7 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x20 + lVar7
                                                  ,local_28,8,0), lVar7 == 8)) {
                    if (local_30 + local_28[0] <= uVar20) {
                      log2Console(3,"Bugly-libunwind","strtab=0x%lx\n");
                      uVar20 = local_30;
                      lVar7 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x18 + lVar9
                                                  ,&local_70,8,0);
                      if (((lVar7 == 8) &&
                          (lVar7 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x20 +
                                                               lVar9,&local_68,8,0), lVar7 == 8)) &&
                         (lVar7 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x38 +
                                                              lVar9,&local_50,8,0), lVar7 == 8)) {
                        log2Console(3,"Bugly-libunwind","symtab=0x%lx[%d]\n",local_70,local_84[0]);
                        uVar12 = local_70 + local_68;
                        if (local_70 < uVar12) {
                          uVar17 = local_70;
                          do {
                            lVar7 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 4 +
                                                                uVar17,local_44,1,0);
                            if ((lVar7 != 1) ||
                               (lVar7 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 6
                                                                    + uVar17,&local_42,2,0),
                               lVar7 != 2)) goto LAB_001150f0;
                            if (((local_44[0] & 0xf) == 2) && (local_42 != 0)) {
                              lVar7 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 8 +
                                                                  uVar17,&local_40,8,0);
                              if (lVar7 != 8) goto LAB_001150f0;
                              uVar3 = local_40 + (param_3 - lVar11);
                              if (local_42 == -0xf) {
                                uVar3 = local_40;
                              }
                              log2Console(3,"Bugly-libunwind","0x%016lx info=0x%02x\n",uVar3,
                                          local_44[0]);
                              lVar7 = _Uelf64_memory_read(param_2,**(long **)(param_2 + 0x18) + 0x10
                                                                  + uVar17,&local_38,8,0);
                              if (lVar7 != 8) goto LAB_001150f0;
                              if ((uVar3 <= param_5) && (param_5 - uVar3 < local_38)) {
                                lVar7 = _Uelf64_memory_read(param_2,uVar17 + **(long **)(param_2 +
                                                                                        0x18),
                                                            &local_48,4,0);
                                if (lVar7 != 4) goto LAB_001150f0;
                                lVar7 = **(long **)(param_2 + 0x18);
                                uVar12 = local_48 + uVar20;
                                if (((uVar12 <= (ulong)((*(long **)(param_2 + 0x18))[1] - lVar7)) &&
                                    (uVar20 <= uVar12)) &&
                                   (lVar7 = _Uelf64_memory_read(param_2,uVar12 + lVar7,param_6,
                                                                local_110,1), lVar7 != 0)) {
                                  param_6[local_110] = '\0';
                                  cVar15 = cVar4;
                                  if (param_8 != (ulong *)0x0) {
                                    *param_8 = param_5 - uVar3;
                                  }
                                  goto LAB_001150f0;
                                }
                                break;
                              }
                            }
                            uVar17 = uVar17 + local_50;
                          } while (uVar17 < uVar12);
                        }
                        goto LAB_00114ce4;
                      }
                      goto LAB_001150f0;
                    }
                    log2Console(3,"Bugly-libunwind","string table outside of image? (%lu > %lu)\n",
                                local_30 + local_28[0],uVar20);
                  }
                }
              }
            }
            else {
LAB_00114ce4:
              lVar9 = lVar9 + (local_90 >> 0x10 & 0xffff);
            }
LAB_00114cec:
            iVar18 = iVar18 + 1;
          } while (iVar18 < (int)(uint)local_90._4_2_);
        }
      }
      else {
        lVar9 = *(long *)(param_2 + 8);
        uVar5 = *(ushort *)(lVar9 + 0x3c);
        uVar13 = (uint)uVar5;
        if (*(ulong *)(param_2 + 0x10) <
            (ulong)(*(long *)(lVar9 + 0x28) +
                   (long)(int)((uint)uVar5 * (uint)*(ushort *)(lVar9 + 0x3a)))) {
          log2Console(3,"Bugly-libunwind","section table outside of image? (%lu > %lu)\n");
          cVar15 = '\0';
          goto LAB_001150f0;
        }
        lVar7 = lVar9 + *(long *)(lVar9 + 0x28);
        if ((lVar7 != 0) && (uVar5 != 0)) {
          iVar18 = 0;
          do {
            if ((*(int *)(lVar7 + 4) == 2) || (*(int *)(lVar7 + 4) == 0xb)) {
              lVar14 = *(long *)(param_2 + 8);
              lVar8 = *(long *)(lVar7 + 0x18);
              lVar10 = *(long *)(lVar14 + 0x28) +
                       (long)(int)((uint)*(ushort *)(lVar14 + 0x3a) * *(int *)(lVar7 + 0x28));
              lVar16 = *(long *)(lVar7 + 0x20);
              if (*(ulong *)(param_2 + 0x10) < lVar10 + (ulong)*(ushort *)(lVar14 + 0x3a)) {
                log2Console(3,"Bugly-libunwind","string shdr table outside of image? (%lu > %lu)\n")
                ;
                uVar13 = (uint)*(ushort *)(lVar9 + 0x3c);
              }
              else {
                lVar10 = lVar14 + lVar10;
                uVar20 = *(long *)(lVar10 + 0x18) + *(long *)(lVar10 + 0x20);
                if (*(ulong *)(param_2 + 0x10) < uVar20) {
                  log2Console(3,"Bugly-libunwind","string table outside of image? (%lu > %lu)\n",
                              uVar20);
                  uVar13 = (uint)*(ushort *)(lVar9 + 0x3c);
                }
                else {
                  log2Console(3,"Bugly-libunwind","strtab=0x%lx\n");
                  pcVar1 = (char *)(*(long *)(param_2 + 8) + *(long *)(lVar10 + 0x18));
                  if (pcVar1 != (char *)0x0) {
                    puVar19 = (uint *)(lVar14 + lVar8);
                    puVar2 = (uint *)((long)puVar19 + lVar16);
                    log2Console(3,"Bugly-libunwind","symtab=0x%lx[%d]\n",
                                *(undefined8 *)(lVar7 + 0x18),*(undefined4 *)(lVar7 + 4));
                    for (; puVar19 < puVar2;
                        puVar19 = (uint *)((long)puVar19 + *(long *)(lVar7 + 0x38))) {
                      if (((puVar19[1] & 0xf) == 2) && (*(short *)((long)puVar19 + 6) != 0)) {
                        uVar20 = *(ulong *)(puVar19 + 2) + (param_3 - lVar11);
                        if (*(short *)((long)puVar19 + 6) == -0xf) {
                          uVar20 = *(ulong *)(puVar19 + 2);
                        }
                        log2Console(3,"Bugly-libunwind","0x%016lx info=0x%02x\n",uVar20);
                        if ((uVar20 <= param_5) && (param_5 - uVar20 < *(ulong *)(puVar19 + 4))) {
                          __src = pcVar1 + *puVar19;
                          if ((__src <= (char *)(*(long *)(param_2 + 8) + *(long *)(param_2 + 0x10))
                              ) && (pcVar1 <= __src)) {
                            uVar12 = (long)__src - *(long *)(param_2 + 8);
                            if (uVar12 < local_110) {
                              local_110 = uVar12;
                            }
                            strncpy(param_6,__src,local_110);
                            param_6[local_110] = '\0';
                            if (*param_6 != '\0') {
                              if (param_8 != (ulong *)0x0) {
                                *param_8 = param_5 - uVar20;
                              }
                              goto LAB_001150f0;
                            }
                          }
                          break;
                        }
                      }
                    }
                    uVar13 = (uint)*(ushort *)(lVar9 + 0x3c);
                    goto LAB_001152c4;
                  }
                  uVar13 = (uint)*(ushort *)(lVar9 + 0x3c);
                }
              }
            }
            else {
LAB_001152c4:
              lVar7 = lVar7 + (ulong)*(ushort *)(lVar9 + 0x3a);
            }
            iVar18 = iVar18 + 1;
          } while (iVar18 < (int)uVar13);
        }
      }
    }
  }
LAB_001150ec:
  cVar15 = '\0';
LAB_001150f0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar15);
}

