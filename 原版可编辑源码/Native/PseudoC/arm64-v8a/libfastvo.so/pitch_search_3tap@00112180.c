
int pitch_search_3tap(void *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,void *param_6,long *param_7,int param_8,int param_9,
                     undefined8 param_10,undefined4 param_11,uint param_12,undefined8 param_13,
                     undefined8 param_14,long param_15,undefined8 param_16,uint param_17,
                     int param_18,undefined4 param_19,uint *param_20)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  long *plVar4;
  void *pvVar5;
  int iVar6;
  void *pvVar7;
  int *piVar8;
  ulong uVar9;
  undefined8 *puVar10;
  short *psVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  size_t __n;
  void *__src;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 auStack_180 [4];
  long alStack_170 [5];
  uint auStack_148 [6];
  int aiStack_130 [2];
  long local_128;
  ulong local_120;
  undefined8 local_118;
  long *local_110;
  undefined1 *local_108;
  undefined8 local_100;
  ulong local_f8;
  void *local_f0;
  void *local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  ulong local_c0;
  uint *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  int local_94;
  int *local_90;
  long local_88;
  void *local_80;
  undefined4 local_74;
  long local_70;
  
  lVar15 = tpidr_el0;
  local_70 = *(long *)(lVar15 + 0x28);
  uVar16 = (ulong)param_12;
  if (9 < (int)param_17) {
    param_17 = 10;
  }
  if ((int)param_17 < 2) {
    param_17 = 1;
  }
  piVar8 = (int *)((long)aiStack_130 - ((ulong)param_17 * 4 + 0xf & 0x7fffffff0));
  local_b0 = param_3;
  local_a8 = param_4;
  local_a0 = param_5;
  local_90 = piVar8;
  local_80 = param_1;
  if (param_9 < param_8) {
    speex_bits_pack(param_13,0,*(undefined4 *)((long)param_7 + 0xc));
    speex_bits_pack(param_13,0,(int)param_7[1]);
    memset(param_6,0,-(ulong)(param_12 >> 0x1f) & 0xfffffffc00000000 | uVar16 << 2);
    iVar13 = param_8;
  }
  else {
    local_118 = param_13;
    uVar2 = *(uint *)(param_7 + 1);
    lVar17 = *param_7;
    local_88 = param_15;
    if (0 < (int)param_12) {
      lVar12 = 0;
      do {
        sVar3 = *(short *)((long)param_1 + lVar12 * 2);
        iVar13 = -(int)sVar3;
        if (-1 < sVar3) {
          iVar13 = (int)sVar3;
        }
        if (0x3fff < iVar13) {
          local_94 = 1;
          goto LAB_001122a0;
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)param_12);
    }
    local_94 = 0;
LAB_001122a0:
    if (-param_9 < (int)param_12) {
      lVar12 = (long)-param_9;
      do {
        sVar3 = *(short *)(param_15 + lVar12 * 2);
        iVar13 = -(int)sVar3;
        if (-1 < sVar3) {
          iVar13 = (int)sVar3;
        }
        if (0x3fff < iVar13) {
          local_94 = 1;
          break;
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)param_12);
    }
    local_b8 = param_20;
    if ((param_9 - param_8) + 1 < (int)param_17) {
      param_17 = (param_9 - param_8) + 1;
    }
    local_110 = param_7;
    if (param_9 == param_8) {
      *piVar8 = param_9;
    }
    else {
      open_loop_nbest_pitch(param_2,param_8,param_9,param_12,piVar8,0,param_17);
    }
    local_120 = (ulong)param_12;
    local_e8 = (void *)((long)piVar8 - (local_120 * 4 + 0xf & 0x7fffffff0));
    uVar9 = local_120 * 2 + 0xf & 0x3fffffff0;
    __src = (void *)((long)local_e8 - uVar9);
    pvVar7 = (void *)((long)__src - uVar9);
    local_f0 = pvVar7;
    if ((int)param_17 < 1) {
      iVar14 = 0;
      iVar6 = 0;
      iVar13 = 0;
      __n = -(ulong)(param_12 >> 0x1f) & 0xfffffffc00000000 | uVar16 << 2;
      uVar16 = -(ulong)(param_12 >> 0x1f) & 0xfffffffe00000000 | uVar16 << 1;
      local_108 = (undefined1 *)aiStack_130;
    }
    else {
      local_c4 = param_19;
      local_d0 = param_16;
      lVar12 = 0;
      local_d8 = param_14;
      __n = -(ulong)(param_12 >> 0x1f) & 0xfffffffc00000000 | uVar16 << 2;
      local_dc = param_11;
      local_f8 = -(ulong)(param_12 >> 0x1f) & 0xfffffffe00000000 | uVar16 << 1;
      iVar14 = -1;
      local_100 = 0;
      aiStack_130[1] = param_8;
      local_128 = lVar15;
      local_108 = (undefined1 *)aiStack_130;
      local_c0 = uVar16;
      do {
        iVar13 = local_90[lVar12];
        memset(param_6,0,__n);
        *(uint *)((long)pvVar7 + -0x10) = *local_b8;
        pvVar5 = local_80;
        iVar6 = local_94;
        uVar20 = local_a8;
        uVar19 = local_b0;
        *(undefined4 *)((long)pvVar7 + -0x18) = local_c4;
        *(undefined4 **)((long)pvVar7 + -0x20) = &local_74;
        uVar21 = local_a0;
        *(undefined8 *)((long)pvVar7 + -0x30) = local_d0;
        *(void **)((long)pvVar7 + -0x28) = __src;
        uVar18 = local_d8;
        *(int *)((long)pvVar7 + -8) = iVar6;
        *(undefined8 *)((long)pvVar7 + -0x40) = uVar18;
        *(long *)((long)pvVar7 + -0x38) = local_88;
        *(int *)((long)pvVar7 + -0x48) = (int)local_c0;
        *(undefined4 *)((long)pvVar7 + -0x50) = local_dc;
        iVar6 = FUN_0011265c(pvVar5,uVar19,uVar20,uVar21,param_6,
                             lVar17 + ((param_18 << 2) << (ulong)(uVar2 & 0x1f)),
                             1 << (ulong)(uVar2 & 0x1f),iVar13);
        if ((iVar14 < 0) || (iVar6 < iVar14)) {
          memcpy(local_e8,param_6,__n);
          memcpy(local_f0,__src,local_f8);
          local_100 = CONCAT44(local_74,iVar13);
          iVar14 = iVar6;
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)param_17);
      param_12 = (uint)local_c0;
      lVar15 = local_128;
      uVar16 = local_f8;
      iVar14 = (int)local_100;
      iVar6 = local_100._4_4_;
      param_8 = aiStack_130[1];
    }
    plVar4 = local_110;
    uVar18 = local_118;
    speex_bits_pack(local_118,iVar14 - param_8,*(undefined4 *)((long)local_110 + 0xc));
    speex_bits_pack(uVar18,iVar6,(int)plVar4[1]);
    uVar2 = *local_b8;
    iVar14 = 0;
    if (0x3ff < (int)uVar2) {
      iVar14 = (int)(uVar2 << 3) >> 0x10;
    }
    uVar1 = 0x400;
    if (0x3ff < (int)uVar2) {
      uVar1 = uVar2 & 0x1fff;
    }
    iVar6 = (int)(short)((ushort)*(byte *)(*plVar4 + ((long)(iVar6 << 2) | 3U)) << 8);
    *local_b8 = iVar14 * iVar6 + ((int)(uVar1 * iVar6) >> 0xd);
    memcpy(param_6,local_e8,__n);
    memcpy(local_80,local_f0,uVar16);
    if ((local_94 != 0) && (0 < (int)param_12)) {
      if (param_12 < 0x10) {
        uVar9 = 0;
      }
      else {
        uVar9 = local_120 & 0xfffffff0;
        puVar10 = (undefined8 *)((long)local_80 + 0x10);
        uVar16 = uVar9;
        do {
          uVar19 = puVar10[-1];
          uVar18 = puVar10[-2];
          uVar21 = puVar10[1];
          uVar20 = *puVar10;
          uVar16 = uVar16 - 0x10;
          puVar10[-1] = CONCAT26((short)((ulong)uVar19 >> 0x30) << 1,
                                 CONCAT24((short)((ulong)uVar19 >> 0x20) << 1,
                                          CONCAT22((short)((ulong)uVar19 >> 0x10) << 1,
                                                   (short)uVar19 << 1)));
          puVar10[-2] = CONCAT26((short)((ulong)uVar18 >> 0x30) << 1,
                                 CONCAT24((short)((ulong)uVar18 >> 0x20) << 1,
                                          CONCAT22((short)((ulong)uVar18 >> 0x10) << 1,
                                                   (short)uVar18 << 1)));
          puVar10[1] = CONCAT26((short)((ulong)uVar21 >> 0x30) << 1,
                                CONCAT24((short)((ulong)uVar21 >> 0x20) << 1,
                                         CONCAT22((short)((ulong)uVar21 >> 0x10) << 1,
                                                  (short)uVar21 << 1)));
          *puVar10 = CONCAT26((short)((ulong)uVar20 >> 0x30) << 1,
                              CONCAT24((short)((ulong)uVar20 >> 0x20) << 1,
                                       CONCAT22((short)((ulong)uVar20 >> 0x10) << 1,
                                                (short)uVar20 << 1)));
          puVar10 = puVar10 + 4;
        } while (uVar16 != 0);
        if (uVar9 == local_120) goto LAB_00112620;
      }
      lVar17 = local_120 - uVar9;
      psVar11 = (short *)((long)local_80 + uVar9 * 2);
      do {
        lVar17 = lVar17 + -1;
        *psVar11 = *psVar11 << 1;
        psVar11 = psVar11 + 1;
      } while (lVar17 != 0);
    }
  }
LAB_00112620:
  if (*(long *)(lVar15 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar13;
}

