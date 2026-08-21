
/* WARNING: Removing unreachable block (ram,0x00e4b5e8) */
/* WARNING: Removing unreachable block (ram,0x00e4b690) */
/* WARNING: Removing unreachable block (ram,0x00e4bba8) */

uint FUN_00e4b09c(long param_1,ulong *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  short sVar6;
  size_t __n;
  long lVar7;
  uint uVar8;
  short sVar9;
  ushort uVar10;
  undefined8 *puVar11;
  short *psVar12;
  long lVar13;
  undefined8 uVar14;
  void *__dest;
  size_t sVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  char *pcVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  long local_158;
  long local_150;
  undefined1 auStack_138 [8];
  long local_130;
  undefined1 auStack_128 [8];
  ulong local_120;
  long local_118;
  ulong local_110;
  undefined1 auStack_108 [20];
  ushort local_f4;
  ushort local_f2;
  undefined1 auStack_f0 [20];
  ushort local_dc;
  ushort local_da;
  undefined1 auStack_d8 [20];
  ushort local_c4;
  ushort local_c2;
  ulong *local_c0;
  undefined8 local_b8;
  long local_b0;
  short local_a0;
  ushort local_9e;
  ushort local_9c;
  short local_98;
  ushort local_96;
  uint local_94;
  uint local_90 [2];
  long local_88;
  long local_78;
  long local_70;
  
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
  uVar20 = param_2[0x17];
  uVar19 = param_2[0x18];
  uVar5 = -param_3;
  if (-1 < (int)param_3) {
    uVar5 = param_3;
  }
  param_2[0x1f] = 0;
  uVar24 = (ulong)(uVar5 & 0xffff);
  local_94 = FUN_00e1bb5c(uVar19,0);
  local_90[0] = local_94;
  if ((local_94 == 0) &&
     (local_94 = FUN_00e1dd74(uVar19,&DAT_019774ba,&local_98), local_90[0] = local_94, local_94 == 0
     )) {
    local_94 = 2;
    if (local_98 == 0x5a4d) {
      local_94 = FUN_00e1bb5c(uVar19,local_96);
      local_90[0] = local_94;
      if ((local_94 == 0) &&
         (local_94 = FUN_00e1dd74(uVar19,&DAT_019774ce,&local_a0), local_90[0] = local_94,
         local_94 == 0)) {
        local_94 = 2;
        if (local_a0 == 0x4550) {
          local_94 = FUN_00e1bb5c(uVar19,local_96);
          if ((local_94 == 0) &&
             (local_94 = FUN_00e1dd74(uVar19,&DAT_019774e6,&local_c0), local_94 == 0)) {
            if ((((local_c0 != (ulong *)0x4550) || ((short)local_b8 != 0x14c)) ||
                (local_b8._4_2_ != 0xe0)) || (local_b8._6_2_ != 0x10b)) {
              uVar23 = 3;
              local_94 = 3;
              uVar22 = 2;
              goto LAB_00e4b6a0;
            }
            *param_2 = 0;
            if (local_b8._2_2_ != 0) {
              uVar10 = 0;
              do {
                local_94 = 0;
                local_94 = FUN_00e1dd74(uVar19,&DAT_0197751a,local_90);
                if (local_94 != 0) goto LAB_00e4b680;
                if (local_b0 == local_88) {
                  local_94 = FUN_00e1bb5c(uVar19,local_78);
                  if ((local_94 != 0) ||
                     (local_94 = FUN_00e1dd74(uVar19,&DAT_0197753a,auStack_d8), lVar13 = local_78,
                     local_94 != 0)) goto LAB_00e4b680;
                  if ((uint)local_c2 + (uint)local_c4 == 0) {
                    uVar23 = 0;
                    goto LAB_00e4b878;
                  }
                  uVar8 = 0;
                  lVar2 = local_78 + 0x10;
                  local_94 = 0;
                  goto LAB_00e4b8f8;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < local_b8._2_2_);
            }
LAB_00e4b678:
            local_94 = 3;
LAB_00e4b680:
            uVar22 = 2;
            uVar23 = local_94;
          }
          else {
            uVar22 = 2;
            uVar23 = local_94;
          }
          goto LAB_00e4b6a4;
        }
        uVar23 = 2;
        if (local_a0 != 0x454e) goto LAB_00e4b878;
        local_94 = FUN_00e1bb5c(uVar19,(ulong)local_9e + (ulong)local_96);
        local_90[0] = local_94;
        if ((local_94 == 0) &&
           (local_94 = FUN_00e1d718(uVar19,(ulong)local_9c - (ulong)local_9e),
           local_90[0] = local_94, local_94 == 0)) {
          uVar17 = FUN_00e1d9a8(uVar19);
          if (((uint)uVar17 & 0xffff) < 0x11) {
            sVar9 = FUN_00e1d9a8(uVar19);
            while (sVar9 != 0) {
              uVar10 = FUN_00e1d9a8(uVar19);
              if (sVar9 == -0x7ff8) {
                lVar13 = FUN_00e1d4a0(uVar19);
                lVar13 = (lVar13 + *(long *)(uVar19 + 0x40) + 4) - *(long *)(uVar19 + 0x48);
                FUN_00e1d90c(uVar19);
                if (((lVar13 == 0) || (uVar10 == 0)) ||
                   (uVar18 = (ulong)uVar10,
                   *(ulong *)(uVar19 + 8) <= uVar18 * 0x76 &&
                   uVar18 * 0x76 - *(ulong *)(uVar19 + 8) != 0)) goto LAB_00e4b8cc;
                *param_2 = uVar18;
                local_90[0] = local_94;
                if ((int)param_3 < 0) goto LAB_00e4b11c;
                if (uVar18 <= uVar24) {
                  local_94 = 6;
                  local_90[0] = local_94;
                  goto LAB_00e4b11c;
                }
                uVar18 = FUN_00e1388c(uVar20,0xf0,&local_94);
                param_2[0x1f] = uVar18;
                local_90[0] = local_94;
                if (local_94 != 0) goto LAB_00e4b11c;
                local_94 = FUN_00e1bb5c(uVar19,lVar13 + uVar24 * 0xc);
                if ((local_94 == 0) && (local_94 = FUN_00e1d718(uVar19,0xc), local_94 == 0)) {
                  uVar18 = FUN_00e1d9a8(uVar19);
                  *(ulong *)param_2[0x1f] = (uVar18 & 0xffff) << (uVar17 & 0x3f);
                  uVar18 = FUN_00e1d9a8(uVar19);
                  *(ulong *)(param_2[0x1f] + 0xe0) = (uVar18 & 0xffff) << (uVar17 & 0x3f);
                  *(long *)(uVar19 + 0x40) = *(long *)(uVar19 + 0x40) + 8;
                  FUN_00e1d90c(uVar19);
                  local_94 = FUN_00e4bfec(param_2[0x1f],uVar19);
                  uVar23 = local_94;
                  goto LAB_00e4b878;
                }
                uVar19 = param_2[0x1f];
                goto joined_r0x00e4b7a4;
              }
              *(ulong *)(uVar19 + 0x40) = *(long *)(uVar19 + 0x40) + (ulong)uVar10 * 0xc + 4;
              sVar9 = FUN_00e1d9a8(uVar19);
            }
            FUN_00e1d90c(uVar19);
          }
          goto LAB_00e4b8cc;
        }
      }
    }
    else {
LAB_00e4b88c:
      uVar19 = param_2[0x1f];
joined_r0x00e4b7a4:
      local_90[0] = local_94;
      if (uVar19 != 0) {
        uVar17 = param_2[0x17];
        if (*(long *)(uVar19 + 0xd8) != 0) {
          FUN_00e1d86c(param_2[0x18]);
        }
        FUN_00e139fc(uVar17,*(undefined8 *)(uVar19 + 0xe8));
        *(undefined8 *)(uVar19 + 0xe8) = 0;
        FUN_00e139fc(uVar17,uVar19);
        param_2[0x1f] = 0;
        local_90[0] = local_94;
      }
    }
  }
  goto LAB_00e4b11c;
  while( true ) {
    if (-1 < (int)local_110) goto LAB_00e4b678;
    local_110 = local_110 & 0xffffffff7fffffff;
    lVar3 = local_78 + local_110;
    local_94 = FUN_00e1bb5c(uVar19,lVar3);
    if ((local_94 != 0) || (local_94 = FUN_00e1dd74(uVar19,&DAT_0197753a,auStack_f0), local_94 != 0)
       ) goto LAB_00e4b680;
    if ((uint)local_da + (uint)local_dc != 0) {
      uVar23 = 0;
      local_94 = 0;
      do {
        local_94 = FUN_00e1bb5c(uVar19,lVar3 + 0x10 + (ulong)(uVar23 << 3));
        if ((local_94 != 0) ||
           (local_94 = FUN_00e1dd74(uVar19,&DAT_0197755a,auStack_128), local_94 != 0))
        goto LAB_00e4b680;
        if (-1 < (int)local_120) goto LAB_00e4b678;
        local_120 = local_120 & 0xffffffff7fffffff;
        lVar4 = local_78 + local_120;
        local_94 = FUN_00e1bb5c(uVar19,lVar4);
        if ((local_94 != 0) ||
           (local_94 = FUN_00e1dd74(uVar19,&DAT_0197753a,auStack_108), local_94 != 0))
        goto LAB_00e4b680;
        if ((uint)local_f2 + (uint)local_f4 != 0) {
          uVar22 = 0;
          local_94 = 0;
          do {
            local_94 = FUN_00e1bb5c(uVar19,lVar4 + 0x10 + (ulong)(uVar22 << 3));
            if ((local_94 != 0) ||
               (local_94 = FUN_00e1dd74(uVar19,&DAT_0197755a,auStack_138), local_94 != 0))
            goto LAB_00e4b680;
            if ((int)local_120 < 0) goto LAB_00e4b678;
            if (local_118 == 8) {
              local_94 = FUN_00e1bb5c(uVar19,local_130 + lVar13);
              if ((local_94 != 0) ||
                 (local_94 = FUN_00e1dd74(uVar19,&DAT_0197756a,&local_158), local_94 != 0))
              goto LAB_00e4b680;
              uVar17 = *param_2;
              if (uVar17 == uVar24) {
                plVar16 = (long *)FUN_00e1388c(uVar20,0xf0,&local_94);
                param_2[0x1f] = (ulong)plVar16;
                if (local_94 != 0) goto LAB_00e4b680;
                *plVar16 = (local_158 + local_78) - local_88;
                plVar16[0x1c] = local_150;
                local_94 = FUN_00e4bfec(plVar16,uVar19);
                if (local_94 != 0) {
                  uVar22 = 0xf;
                  uVar23 = local_94;
                  goto LAB_00e4b6a4;
                }
                uVar17 = *param_2;
              }
              *param_2 = uVar17 + 1;
            }
            uVar22 = uVar22 + 1 & 0xffff;
          } while (uVar22 < (uint)local_f2 + (uint)local_f4);
        }
        uVar23 = uVar23 + 1 & 0xffff;
      } while (uVar23 < (uint)local_da + (uint)local_dc);
    }
    uVar23 = 0;
    uVar1 = uVar8 + 1;
    uVar22 = 0;
    uVar8 = uVar1 & 0xffff;
    if ((uint)local_c2 + (uint)local_c4 <= (uVar1 & 0xffff)) break;
LAB_00e4b8f8:
    local_94 = FUN_00e1bb5c(uVar19,lVar2 + (ulong)(uVar8 << 3));
    if ((local_94 != 0) || (local_94 = FUN_00e1dd74(uVar19,&DAT_0197755a,&local_118), local_94 != 0)
       ) goto LAB_00e4b680;
  }
LAB_00e4b6a0:
  if (uVar22 == 0) {
LAB_00e4b878:
    if (*param_2 == 0) {
LAB_00e4b8cc:
      local_94 = 3;
      local_90[0] = local_94;
    }
    else {
      if ((long)uVar24 < (long)*param_2) goto LAB_00e4b888;
      local_94 = 6;
      local_90[0] = local_94;
    }
  }
  else {
LAB_00e4b6a4:
    local_90[0] = local_94;
    if ((uVar22 != 2) && (local_90[0] = uVar22, uVar22 == 0xf)) {
LAB_00e4b888:
      local_90[0] = local_94;
      if (uVar23 != 0) goto LAB_00e4b88c;
    }
  }
LAB_00e4b11c:
  if ((-1 < (int)param_3) || (local_90[0] != 0)) {
    if ((local_90[0] & 0xff) == 2) {
      puVar11 = (undefined8 *)FUN_00e1388c(uVar20,0xf0,local_90);
      param_2[0x1f] = (ulong)puVar11;
      if (local_90[0] == 0) {
        *param_2 = 1;
        *puVar11 = 0;
        puVar11[0x1c] = *(undefined8 *)(param_1 + 8);
        local_90[0] = FUN_00e4bfec(puVar11,param_1);
        if (((int)param_3 < 0) || (local_90[0] != 0)) {
          if (local_90[0] != 0) goto LAB_00e4b524;
LAB_00e4b3e8:
          if (*(long *)(lVar7 + 0x28) == local_70) {
            return 0;
          }
          goto LAB_00e4b3fc;
        }
        if ((uVar5 & 0xffff) == 0) goto LAB_00e4b2cc;
        local_90[0] = 6;
        uVar20 = param_2[0x1f];
        uVar19 = param_2[0x17];
joined_r0x00e4b52c:
        if (uVar20 != 0) {
          if (*(long *)(uVar20 + 0xd8) != 0) {
            FUN_00e1d86c(param_2[0x18]);
          }
          FUN_00e139fc(uVar19,*(undefined8 *)(uVar20 + 0xe8));
          *(undefined8 *)(uVar20 + 0xe8) = 0;
          FUN_00e139fc(uVar19,uVar20);
          param_2[0x1f] = 0;
        }
        FUN_00e139fc(uVar19,param_2[8]);
        param_2[8] = 0;
        *(undefined4 *)(param_2 + 7) = 0;
      }
    }
    else {
      if (local_90[0] == 0) {
LAB_00e4b2cc:
        uVar19 = param_2[0x1f];
        if (*(short *)(uVar19 + 0x6c) == 0) goto LAB_00e4b51c;
        uVar17 = param_2[2];
        param_2[1] = uVar24;
        param_2[2] = uVar17 | 0x12;
        if (*(short *)(uVar19 + 0x70) == *(short *)(uVar19 + 0x72)) {
          param_2[2] = uVar17 | 0x16;
        }
        if (*(char *)(uVar19 + 0x62) != '\0') {
          param_2[3] = param_2[3] | 1;
        }
        if (799 < *(ushort *)(uVar19 + 0x66)) {
          param_2[3] = param_2[3] | 2;
        }
        psVar12 = (short *)FUN_00e13bcc(uVar20,0x20,0,1,0,local_90);
        param_2[8] = (ulong)psVar12;
        if (local_90[0] == 0) {
          *(undefined4 *)(param_2 + 7) = 1;
          psVar12[1] = *(short *)(uVar19 + 0x70);
          *psVar12 = *(short *)(uVar19 + 0x60) + *(short *)(uVar19 + 0x6c);
          lVar13 = (ulong)*(ushort *)(uVar19 + 0x56) << 6;
          *(long *)(psVar12 + 4) = lVar13;
          sVar9 = 0x48;
          if (*(short *)(uVar19 + 0x5a) != 0) {
            sVar9 = *(short *)(uVar19 + 0x5a);
          }
          sVar6 = 0x48;
          if (*(short *)(uVar19 + 0x58) != 0) {
            sVar6 = *(short *)(uVar19 + 0x58);
          }
          lVar13 = FT_MulDiv(lVar13,sVar6,0x48);
          uVar24 = lVar13 + 0x20U & 0xffffffffffffffc0;
          *(ulong *)(psVar12 + 0xc) = uVar24;
          lVar13 = (ulong)*(ushort *)(uVar19 + 0x6c) * 0x40;
          if (lVar13 < (long)uVar24) {
            *(long *)(psVar12 + 0xc) = lVar13;
            uVar14 = FT_MulDiv(lVar13,0x48,sVar6);
            *(undefined8 *)(psVar12 + 4) = uVar14;
          }
          else {
            uVar14 = *(undefined8 *)(psVar12 + 4);
          }
          lVar13 = FT_MulDiv(uVar14,sVar9,0x48);
          *(ulong *)(psVar12 + 8) = lVar13 + 0x20U & 0xffffffffffffffc0;
          local_b8 = 0;
          if (*(char *)(uVar19 + 0x68) == 'M') {
            local_b8 = 0x161726d6e;
          }
          local_c0 = param_2;
          local_90[0] = FUN_00e17cf8(&DAT_01c955b0,0,&local_c0,0);
          if (local_90[0] == 0) {
            if (*(byte *)(uVar19 + 0x74) <= *(byte *)(uVar19 + 0x75)) {
              param_2[4] = ((ulong)*(byte *)(uVar19 + 0x75) + 2) - (ulong)*(byte *)(uVar19 + 0x74);
              __n = *(ulong *)(uVar19 + 0x10) - *(ulong *)(uVar19 + 0x88);
              if (*(ulong *)(uVar19 + 0x88) <= *(ulong *)(uVar19 + 0x10) && __n != 0) {
                __dest = (void *)FUN_00e1388c(uVar20,__n + 1,local_90);
                *(void **)(uVar19 + 0xe8) = __dest;
                if (local_90[0] == 0) {
                  memcpy(__dest,(void *)(*(long *)(uVar19 + 0xd8) + *(long *)(uVar19 + 0x88)),__n);
                  *(undefined1 *)(*(long *)(uVar19 + 0xe8) + __n) = 0;
                  pcVar21 = *(char **)(uVar19 + 0xe8);
                  sVar15 = strlen(pcVar21);
                  uVar20 = FUN_00e13bcc(uVar20,1,__n,sVar15 + 1,pcVar21,local_90);
                  *(ulong *)(uVar19 + 0xe8) = uVar20;
                  if (local_90[0] == 0) {
                    uVar19 = param_2[3];
                    param_2[5] = uVar20;
                    param_2[6] = (ulong)"Regular";
                    if (((uint)uVar19 >> 1 & 1) == 0) {
                      if ((uVar19 & 1) == 0) goto LAB_00e4b3e8;
                      pcVar21 = "Italic";
                    }
                    else if ((uVar19 & 1) == 0) {
                      pcVar21 = "Bold";
                    }
                    else {
                      pcVar21 = "Bold Italic";
                    }
                    param_2[6] = (ulong)pcVar21;
                    if (*(long *)(lVar7 + 0x28) == local_70) {
                      return 0;
                    }
                    goto LAB_00e4b3fc;
                  }
                }
                goto LAB_00e4b524;
              }
            }
LAB_00e4b51c:
            local_90[0] = 3;
          }
        }
LAB_00e4b524:
        uVar20 = param_2[0x1f];
        uVar19 = param_2[0x17];
        goto joined_r0x00e4b52c;
      }
      if (param_2 != (ulong *)0x0) goto LAB_00e4b524;
    }
  }
  if (*(long *)(lVar7 + 0x28) == local_70) {
    return local_90[0];
  }
LAB_00e4b3fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

