
/* cocos2d::AudioMixer::process__genericNoResampling(cocos2d::AudioMixer::state_t*, long) */

void cocos2d::AudioMixer::process__genericNoResampling(state_t *param_1,long param_2)

{
  state_t *psVar1;
  state_t *psVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  uint local_2b8;
  ulong local_298;
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
  
                    /* try { // try from 00a7c644 to 00b7c72b has its CatchHandler @ 00a7c584 */
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  uVar15 = *(uint *)param_1;
  uVar18 = uVar15;
  if (uVar15 != 0) {
    do {
      lVar11 = 0x1f - LZCOUNT(uVar18);
      *(undefined8 *)(param_1 + lVar11 * 0xd0 + 0x80) = *(undefined8 *)(param_1 + 8);
      uVar18 = uVar18 & (1 << (ulong)((uint)lVar11 & 0x1f) ^ 0xffffffffU);
      (**(code **)(**(long **)(param_1 + lVar11 * 0xd0 + 0x70) + 0x10))
                (*(long **)(param_1 + lVar11 * 0xd0 + 0x70),param_1 + lVar11 * 0xd0 + 0x78,param_2);
                    /* catch() { ... } // from try @ 00a7c610 with catch @ 00a7c6b8 */
                    /* catch() { ... } // from try @ 00a7c624 with catch @ 00a7c6bc */
      *(short *)(param_1 + lVar11 * 0xd0 + 0x62) =
           (short)*(undefined8 *)(param_1 + lVar11 * 0xd0 + 0x80);
                    /* catch() { ... } // from try @ 00a7c5f8 with catch @ 00a7c6c0 */
      *(undefined8 *)(param_1 + lVar11 * 0xd0 + 0x90) =
           *(undefined8 *)(param_1 + lVar11 * 0xd0 + 0x78);
                    /* catch() { ... } // from try @ 00a7c628 with catch @ 00a7c6c4 */
      local_2b8 = uVar15;
    } while (uVar18 != 0);
    do {
                    /* catch() { ... } // from try @ 00a7c5d0 with catch @ 00a7c6dc */
      lVar11 = 0x1f - LZCOUNT(uVar15);
      uVar13 = uVar15 & (1 << (ulong)((uint)lVar11 & 0x1f) ^ 0xffffffffU);
      uVar18 = uVar15;
      if (uVar13 == 0) {
        lVar17 = *(long *)(param_1 + lVar11 * 0xd0 + 0xa8);
      }
      else {
        lVar17 = *(long *)(param_1 + lVar11 * 0xd0 + 0xa8);
        do {
          lVar14 = LZCOUNT(uVar13);
          uVar4 = 1 << (ulong)((uint)(0x1f - lVar14) & 0x1f);
          uVar13 = uVar13 & (uVar4 ^ 0xffffffff);
          uVar16 = 0xffffffff;
          if (*(long *)(param_1 + (0x1f - lVar14) * 0xd0 + 0xa8) != lVar17) {
            uVar16 = ~uVar4;
          }
          uVar18 = uVar16 & uVar18;
        } while (uVar13 != 0);
      }
      uVar13 = ~uVar18;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a7c7c4 with catch @ 00a7c754
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7c7f4 with catch @ 00a7c754
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7c824 with catch @ 00a7c754
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7c84c with catch @ 00a7c754
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7c878 with catch @ 00a7c754
                        */
      local_298 = 0;
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
joined_r0x00a7c7a8:
        if (uVar16 != 0) {
          lVar14 = 0x1f - LZCOUNT(uVar16);
          uVar4 = 1 << (ulong)((uint)lVar14 & 0x1f);
                    /* try { // try from 00a7c7e8 to 00b7c7f3 has its CatchHandler @ 00a7c8b8 */
          if (((byte)param_1[lVar14 * 0xd0 + 0x42] & 1) == 0) {
            lVar20 = 0;
          }
          else {
                    /* try { // try from 00a7c7bc to 00b7c7c3 has its CatchHandler @ 00a7c8b8 */
            lVar20 = *(long *)(param_1 + lVar14 * 0xd0 + 0xb0) + local_298 * 4;
                    /* try { // try from 00a7c7c4 to 00b7c7e7 has its CatchHandler @ 00a7c754 */
          }
                    /* try { // try from 00a7c7f4 to 00b7c81b has its CatchHandler @ 00a7c754 */
          uVar5 = ~uVar4;
          uVar16 = uVar16 & (uVar4 ^ 0xffffffff);
          psVar1 = param_1 + lVar14 * 0xd0 + 0x62;
          psVar2 = param_1 + lVar14 * 0xd0 + 0x78;
                    /* try { // try from 00a7c81c to 00b7c823 has its CatchHandler @ 00a7c8b4 */
          uVar19 = 0x10;
                    /* try { // try from 00a7c824 to 00b7c843 has its CatchHandler @ 00a7c754 */
          do {
            if (*(long *)(param_1 + lVar14 * 0xd0 + 0x90) == 0) {
LAB_00a7c934:
              local_2b8 = local_2b8 & uVar5;
              uVar18 = uVar18 & uVar5;
              break;
            }
            uVar12 = (ulong)*(ushort *)psVar1;
            uVar6 = uVar19;
            if (uVar12 <= uVar19) {
              uVar6 = uVar12;
            }
                    /* try { // try from 00a7c844 to 00b7c84b has its CatchHandler @ 00a7c8b4 */
            if (uVar6 != 0) {
                    /* try { // try from 00a7c84c to 00b7c86b has its CatchHandler @ 00a7c754 */
                    /* try { // try from 00a7c86c to 00b7c877 has its CatchHandler @ 00a7c8b4 */
              (**(code **)(param_1 + lVar14 * 0xd0 + 0x88))
                        (param_1 + lVar14 * 0xd0 + 0x40,
                         (long)&local_280 +
                         (0x10 - uVar19) * (ulong)*(uint *)(param_1 + lVar14 * 0xd0 + 0xfc) * 4,
                         uVar6,*(undefined8 *)(param_1 + 0x20),lVar20);
                    /* try { // try from 00a7c878 to 00b7c8bb has its CatchHandler @ 00a7c754 */
              lVar3 = lVar20 + uVar6 * 4;
              bVar8 = lVar20 != 0;
              uVar19 = uVar19 - uVar6;
              uVar4 = (uint)*(ushort *)psVar1 - (int)uVar6;
              uVar12 = (ulong)uVar4;
              lVar20 = 0;
              if (bVar8) {
                lVar20 = lVar3;
              }
              *(ushort *)psVar1 = (ushort)uVar4;
            }
            if ((uVar19 != 0) && ((uVar12 & 0xffff) == 0)) {
              plVar9 = *(long **)(param_1 + lVar14 * 0xd0 + 0x70);
              (**(code **)(*plVar9 + 0x18))(plVar9,psVar2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a7c81c with catch @ 00a7c8b4
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7c844 with catch @ 00a7c8b4
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7c86c with catch @ 00a7c8b4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a7c7bc with catch @ 00a7c8b8
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7c7e8 with catch @ 00a7c8b8
                        */
              lVar10 = 0x7fffffffffffffff;
              lVar3 = (0x10 - uVar19) + local_298;
              *(long *)(param_1 + lVar14 * 0xd0 + 0x80) = *(long *)(param_1 + 8) - lVar3;
              if (param_2 != 0x7fffffffffffffff) {
                uVar6 = 0;
                if ((ulong)*(uint *)(param_1 + lVar14 * 0xd0 + 0xa0) != 0) {
                  uVar6 = (ulong)(sLocalTimeFreq * (int)lVar3) /
                          (ulong)*(uint *)(param_1 + lVar14 * 0xd0 + 0xa0);
                }
                lVar10 = uVar6 + param_2;
              }
              plVar9 = *(long **)(param_1 + lVar14 * 0xd0 + 0x70);
              (**(code **)(*plVar9 + 0x10))(plVar9,psVar2,lVar10);
              *(long *)(param_1 + lVar14 * 0xd0 + 0x90) = *(long *)psVar2;
              if (*(long *)psVar2 == 0) goto LAB_00a7c934;
              *(ushort *)psVar1 = (ushort)*(undefined8 *)(param_1 + lVar14 * 0xd0 + 0x80);
            }
                    /* try { // try from 00a7c928 to 00b7c95b has its CatchHandler @ 00a7c928
                       catch() { ... } // from try @ 00a7c928 with catch @ 00a7c928
                       catch() { ... } // from try @ 00a7c970 with catch @ 00a7c928 */
          } while (uVar19 != 0);
          goto joined_r0x00a7c7a8;
        }
                    /* try { // try from 00a7c96c to 00b7c96f has its CatchHandler @ 00a7c984 */
                    /* try { // try from 00a7c970 to 00b7c9a7 has its CatchHandler @ 00a7c928 */
        convertMixerFormat(lVar17,*(int *)(param_1 + lVar11 * 0xd0 + 0xc4),&local_280,
                           *(undefined4 *)(param_1 + lVar11 * 0xd0 + 0xcc),
                           *(int *)(param_1 + lVar11 * 0xd0 + 0xfc) << 4);
                    /* catch() { ... } // from try @ 00a7c96c with catch @ 00a7c984 */
        uVar16 = *(int *)(param_1 + lVar11 * 0xd0 + 0xc4) - 1;
                    /* catch() { ... } // from try @ 00a7c95c with catch @ 00a7c994 */
        if (uVar16 < 6) {
          lVar14 = *(long *)(&DAT_0189d370 + (long)(int)uVar16 * 8);
                    /* try { // try from 00a7c9a8 to 00b7c9df has its CatchHandler @ 00a7c9a8
                       catch() { ... } // from try @ 00a7c9a8 with catch @ 00a7c9a8
                       catch() { ... } // from try @ 00a7c9e8 with catch @ 00a7c9a8 */
        }
        else {
          lVar14 = 0;
        }
        local_298 = local_298 + 0x10;
        lVar17 = lVar17 + lVar14 * (ulong)(uint)(*(int *)(param_1 + lVar11 * 0xd0 + 0xfc) << 4);
      } while (local_298 < *(ulong *)(param_1 + 8));
      uVar15 = uVar15 & uVar13;
    } while (uVar15 != 0);
                    /* try { // try from 00a7c9e0 to 00b7c9e7 has its CatchHandler @ 00a7c9f8 */
    for (; local_2b8 != 0; local_2b8 = local_2b8 & (1 << (ulong)((uint)lVar11 & 0x1f) ^ 0xffffffffU)
        ) {
      lVar11 = 0x1f - LZCOUNT(local_2b8);
                    /* catch() { ... } // from try @ 00a7c9e0 with catch @ 00a7c9f8 */
      (**(code **)(**(long **)(param_1 + lVar11 * 0xd0 + 0x70) + 0x18))
                (*(long **)(param_1 + lVar11 * 0xd0 + 0x70),param_1 + lVar11 * 0xd0 + 0x78);
    }
  }
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

