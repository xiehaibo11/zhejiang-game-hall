
/* cocos2d::experimental::AudioMixer::process__genericNoResampling(cocos2d::experimental::AudioMixer::state_t*,
   long) */

void cocos2d::experimental::AudioMixer::process__genericNoResampling(state_t *param_1,long param_2)

{
  state_t *psVar1;
  state_t *psVar2;
  state_t *psVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  uint local_2b8;
  ulong local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  uVar15 = *(uint *)param_1;
  uVar18 = uVar15;
  if (uVar15 != 0) {
    do {
      lVar13 = 0x1f - LZCOUNT(uVar18);
      *(undefined8 *)(param_1 + lVar13 * 0xd0 + 0x80) = *(undefined8 *)(param_1 + 8);
      uVar18 = uVar18 & (0x80000000U >> (ulong)((uint)LZCOUNT(uVar18) & 0x1f) ^ 0xffffffff);
      (**(code **)(**(long **)(param_1 + lVar13 * 0xd0 + 0x70) + 0x10))
                (*(long **)(param_1 + lVar13 * 0xd0 + 0x70),param_1 + lVar13 * 0xd0 + 0x78,param_2);
      *(short *)(param_1 + lVar13 * 0xd0 + 0x62) =
           (short)*(undefined8 *)(param_1 + lVar13 * 0xd0 + 0x80);
      *(undefined8 *)(param_1 + lVar13 * 0xd0 + 0x90) =
           *(undefined8 *)(param_1 + lVar13 * 0xd0 + 0x78);
      local_2b8 = uVar15;
    } while (uVar18 != 0);
    do {
      lVar13 = 0x1f - LZCOUNT(uVar15);
      uVar12 = uVar15 & (0x80000000U >> (ulong)((uint)LZCOUNT(uVar15) & 0x1f) ^ 0xffffffff);
      uVar18 = uVar15;
      if (uVar12 == 0) {
        lVar17 = *(long *)(param_1 + lVar13 * 0xd0 + 0xa8);
      }
      else {
        lVar17 = *(long *)(param_1 + lVar13 * 0xd0 + 0xa8);
        do {
          lVar14 = LZCOUNT(uVar12);
          uVar4 = 0x80000000 >> (ulong)((uint)lVar14 & 0x1f);
          uVar12 = uVar12 & (uVar4 ^ 0xffffffff);
          uVar16 = 0xffffffff;
          if (*(long *)(param_1 + (0x1f - lVar14) * 0xd0 + 0xa8) != lVar17) {
            uVar16 = ~uVar4;
          }
          uVar18 = uVar16 & uVar18;
        } while (uVar12 != 0);
      }
      uVar12 = ~uVar18;
      local_288 = 0;
      do {
        uStack_98 = 0;
        local_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_b8 = 0;
        local_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_d8 = 0;
        local_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_f8 = 0;
        local_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_118 = 0;
        local_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_138 = 0;
        local_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_158 = 0;
        local_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_178 = 0;
        local_180 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_198 = 0;
        local_1a0 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_1b8 = 0;
        local_1c0 = 0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_1d8 = 0;
        local_1e0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1f8 = 0;
        local_200 = 0;
        uStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_218 = 0;
        local_220 = 0;
        uStack_208 = 0;
        uStack_210 = 0;
        uStack_238 = 0;
        local_240 = 0;
        uStack_228 = 0;
        uStack_230 = 0;
        uStack_258 = 0;
        local_260 = 0;
        uStack_248 = 0;
        uStack_250 = 0;
        uStack_278 = 0;
        local_280 = 0;
        uStack_268 = 0;
        uStack_270 = 0;
        uVar16 = uVar18;
joined_r0x00e74b5c:
        if (uVar16 != 0) {
          lVar14 = 0x1f - LZCOUNT(uVar16);
          uVar4 = 0x80000000 >> (ulong)((uint)LZCOUNT(uVar16) & 0x1f);
          if (((byte)param_1[lVar14 * 0xd0 + 0x42] & 1) == 0) {
            lVar20 = 0;
          }
          else {
            lVar20 = *(long *)(param_1 + lVar14 * 0xd0 + 0xb0) + local_288 * 4;
          }
          uVar5 = ~uVar4;
          uVar16 = uVar16 & (uVar4 ^ 0xffffffff);
          psVar1 = param_1 + lVar14 * 0xd0 + 0x90;
          psVar2 = param_1 + lVar14 * 0xd0 + 0x62;
          psVar3 = param_1 + lVar14 * 0xd0 + 0x78;
          uVar19 = 0x10;
          lVar10 = *(long *)psVar1;
          while (lVar10 != 0) {
            uVar11 = (ulong)*(ushort *)psVar2;
            uVar6 = uVar19;
            if (uVar11 <= uVar19) {
              uVar6 = uVar11;
            }
            if (uVar6 != 0) {
              (**(code **)(param_1 + lVar14 * 0xd0 + 0x88))
                        (param_1 + lVar14 * 0xd0 + 0x40,
                         (long)&local_280 +
                         (0x10 - uVar19) * (ulong)*(uint *)(param_1 + lVar14 * 0xd0 + 0xfc) * 4,
                         uVar6,*(undefined8 *)(param_1 + 0x20),lVar20);
              lVar10 = lVar20 + uVar6 * 4;
              bVar8 = lVar20 != 0;
              uVar19 = uVar19 - uVar6;
              uVar4 = (uint)*(ushort *)psVar2 - (int)uVar6;
              uVar11 = (ulong)uVar4;
              lVar20 = 0;
              if (bVar8) {
                lVar20 = lVar10;
              }
              *(ushort *)psVar2 = (ushort)uVar4;
            }
            if ((uVar19 != 0) && ((uVar11 & 0xffff) == 0)) {
              plVar9 = *(long **)(param_1 + lVar14 * 0xd0 + 0x70);
              (**(code **)(*plVar9 + 0x18))(plVar9,psVar3);
              lVar10 = 0x7fffffffffffffff;
              *(ulong *)(param_1 + lVar14 * 0xd0 + 0x80) =
                   (uVar19 - local_288) + *(long *)(param_1 + 8) + -0x10;
              if (param_2 != 0x7fffffffffffffff) {
                uVar6 = 0;
                if ((ulong)*(uint *)(param_1 + lVar14 * 0xd0 + 0xa0) != 0) {
                  uVar6 = (ulong)(sLocalTimeFreq * (((int)local_288 - (int)uVar19) + 0x10)) /
                          (ulong)*(uint *)(param_1 + lVar14 * 0xd0 + 0xa0);
                }
                lVar10 = uVar6 + param_2;
              }
              plVar9 = *(long **)(param_1 + lVar14 * 0xd0 + 0x70);
              (**(code **)(*plVar9 + 0x10))(plVar9,psVar3,lVar10);
              *(long *)psVar1 = *(long *)psVar3;
              if (*(long *)psVar3 == 0) break;
              *(ushort *)psVar2 = (ushort)*(undefined8 *)(param_1 + lVar14 * 0xd0 + 0x80);
            }
            if (uVar19 == 0) goto joined_r0x00e74b5c;
            lVar10 = *(long *)psVar1;
          }
          local_2b8 = local_2b8 & uVar5;
          uVar18 = uVar18 & uVar5;
          goto joined_r0x00e74b5c;
        }
        convertMixerFormat(lVar17,*(int *)(param_1 + lVar13 * 0xd0 + 0xc4),&local_280,
                           *(undefined4 *)(param_1 + lVar13 * 0xd0 + 0xcc),
                           *(int *)(param_1 + lVar13 * 0xd0 + 0xfc) << 4);
        uVar16 = *(int *)(param_1 + lVar13 * 0xd0 + 0xc4) - 1;
        if (uVar16 < 6) {
          lVar14 = *(long *)(&DAT_01428658 + (long)(int)uVar16 * 8);
        }
        else {
          lVar14 = 0;
        }
        local_288 = local_288 + 0x10;
        lVar17 = lVar17 + lVar14 * (ulong)(uint)(*(int *)(param_1 + lVar13 * 0xd0 + 0xfc) << 4);
      } while (local_288 < *(ulong *)(param_1 + 8));
      uVar15 = uVar15 & uVar12;
    } while (uVar15 != 0);
    for (; local_2b8 != 0;
        local_2b8 = local_2b8 &
                    (0x80000000U >> (ulong)((uint)LZCOUNT(local_2b8) & 0x1f) ^ 0xffffffff)) {
      lVar13 = 0x1f - LZCOUNT(local_2b8);
      (**(code **)(**(long **)(param_1 + lVar13 * 0xd0 + 0x70) + 0x18))
                (*(long **)(param_1 + lVar13 * 0xd0 + 0x70),param_1 + lVar13 * 0xd0 + 0x78);
    }
  }
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

