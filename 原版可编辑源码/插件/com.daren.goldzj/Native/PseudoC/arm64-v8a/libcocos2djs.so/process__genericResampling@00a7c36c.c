
/* cocos2d::AudioMixer::process__genericResampling(cocos2d::AudioMixer::state_t*, long) */

void cocos2d::AudioMixer::process__genericResampling(state_t *param_1,long param_2)

{
  state_t *psVar1;
  state_t *psVar2;
  uint uVar3;
  ulong uVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  void *__s;
  long lVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  state_t *psVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  long local_a0;
  
  uVar10 = *(uint *)param_1;
  if (uVar10 != 0) {
    __s = *(void **)(param_1 + 0x18);
    uVar13 = *(ulong *)(param_1 + 8);
    do {
      lVar12 = 0x1f - LZCOUNT(uVar10);
      uVar8 = uVar10 & (1 << (ulong)((uint)lVar12 & 0x1f) ^ 0xffffffffU);
      uVar16 = uVar10;
      if (uVar8 == 0) {
        local_a0 = *(long *)(param_1 + lVar12 * 0xd0 + 0xa8);
      }
      else {
        local_a0 = *(long *)(param_1 + lVar12 * 0xd0 + 0xa8);
        do {
          lVar9 = LZCOUNT(uVar8);
          uVar3 = 1 << (ulong)((uint)(0x1f - lVar9) & 0x1f);
          uVar8 = uVar8 & (uVar3 ^ 0xffffffff);
          uVar11 = 0xffffffff;
          if (*(long *)(param_1 + (0x1f - lVar9) * 0xd0 + 0xa8) != local_a0) {
            uVar11 = ~uVar3;
          }
          uVar16 = uVar11 & uVar16;
        } while (uVar8 != 0);
      }
      uVar10 = uVar10 & (uVar16 ^ 0xffffffff);
                    /* try { // try from 00a7c444 to 00b7c477 has its CatchHandler @ 00a7c444
                       catch() { ... } // from try @ 00a7c444 with catch @ 00a7c444
                       catch() { ... } // from try @ 00a7c48c with catch @ 00a7c444 */
      memset(__s,0,(ulong)*(uint *)(param_1 + lVar12 * 0xd0 + 0xfc) * *(long *)(param_1 + 8) * 4);
joined_r0x00a7c44c:
      if (uVar16 != 0) {
        lVar9 = 0x1f - LZCOUNT(uVar16);
        psVar14 = param_1 + lVar9 * 0xd0 + 0x40;
        if ((*(uint *)psVar14 >> 0x10 & 1) == 0) {
                    /* try { // try from 00a7c478 to 00b7c47f has its CatchHandler @ 00a7c4b0 */
          lVar15 = 0;
        }
        else {
          lVar15 = *(long *)(param_1 + lVar9 * 0xd0 + 0xb0);
        }
        uVar16 = uVar16 & (1 << (ulong)((uint)lVar9 & 0x1f) ^ 0xffffffffU);
        if ((*(uint *)psVar14 >> 0xc & 1) == 0) {
                    /* try { // try from 00a7c488 to 00b7c48b has its CatchHandler @ 00a7c4a0 */
                    /* try { // try from 00a7c48c to 00b7c4c3 has its CatchHandler @ 00a7c444 */
          if (uVar13 != 0) {
            uVar17 = 0;
                    /* catch() { ... } // from try @ 00a7c488 with catch @ 00a7c4a0 */
            psVar1 = param_1 + lVar9 * 0xd0 + 0x78;
            psVar2 = param_1 + lVar9 * 0xd0 + 0x80;
                    /* catch() { ... } // from try @ 00a7c478 with catch @ 00a7c4b0 */
            do {
                    /* try { // try from 00a7c4c4 to 00b7c4fb has its CatchHandler @ 00a7c4c4
                       catch() { ... } // from try @ 00a7c4c4 with catch @ 00a7c4c4
                       catch() { ... } // from try @ 00a7c504 with catch @ 00a7c4c4 */
              lVar7 = 0x7fffffffffffffff;
              *(ulong *)psVar2 = uVar13 - uVar17;
              if (param_2 != 0x7fffffffffffffff) {
                uVar4 = 0;
                if ((ulong)*(uint *)(param_1 + lVar9 * 0xd0 + 0xa0) != 0) {
                  uVar4 = (ulong)(sLocalTimeFreq * (int)uVar17) /
                          (ulong)*(uint *)(param_1 + lVar9 * 0xd0 + 0xa0);
                }
                    /* try { // try from 00a7c4fc to 00b7c503 has its CatchHandler @ 00a7c514 */
                lVar7 = uVar4 + param_2;
              }
                    /* try { // try from 00a7c504 to 00b7c527 has its CatchHandler @ 00a7c4c4 */
              plVar6 = *(long **)(param_1 + lVar9 * 0xd0 + 0x70);
                    /* catch() { ... } // from try @ 00a7c4fc with catch @ 00a7c514 */
              (**(code **)(*plVar6 + 0x10))(plVar6,psVar1,lVar7);
              *(long *)(param_1 + lVar9 * 0xd0 + 0x90) = *(long *)psVar1;
              if (*(long *)psVar1 == 0) break;
              lVar7 = lVar15 + uVar17 * 4;
              bVar5 = lVar15 != 0;
              lVar15 = 0;
              if (bVar5) {
                lVar15 = lVar7;
              }
              (**(code **)(param_1 + lVar9 * 0xd0 + 0x88))
                        (psVar14,(void *)((long)__s +
                                         uVar17 * *(uint *)(param_1 + lVar9 * 0xd0 + 0xfc) * 4),
                         *(undefined8 *)psVar2,*(undefined8 *)(param_1 + 0x20),lVar15);
              plVar6 = *(long **)(param_1 + lVar9 * 0xd0 + 0x70);
              uVar17 = *(long *)psVar2 + uVar17;
              (**(code **)(*plVar6 + 0x18))(plVar6,psVar1);
                    /* try { // try from 00a7c584 to 00b7c5cf has its CatchHandler @ 00a7c584
                       catch() { ... } // from try @ 00a7c584 with catch @ 00a7c584
                       catch() { ... } // from try @ 00a7c644 with catch @ 00a7c584 */
            } while (uVar17 < uVar13);
          }
        }
        else {
          (**(code **)(**(long **)(param_1 + lVar9 * 0xd0 + 0x98) + 0x30))
                    (*(long **)(param_1 + lVar9 * 0xd0 + 0x98),param_2);
          (**(code **)(param_1 + lVar9 * 0xd0 + 0x88))
                    (psVar14,__s,uVar13,*(undefined8 *)(param_1 + 0x20),lVar15);
        }
        goto joined_r0x00a7c44c;
      }
                    /* try { // try from 00a7c5f8 to 00b7c5ff has its CatchHandler @ 00a7c6c0 */
      convertMixerFormat(local_a0,*(undefined4 *)(param_1 + lVar12 * 0xd0 + 0xc4),__s,
                         *(undefined4 *)(param_1 + lVar12 * 0xd0 + 0xcc),
                         uVar13 * *(uint *)(param_1 + lVar12 * 0xd0 + 0xfc));
    } while (uVar10 != 0);
  }
                    /* try { // try from 00a7c610 to 00b7c613 has its CatchHandler @ 00a7c6b8 */
                    /* try { // try from 00a7c624 to 00b7c627 has its CatchHandler @ 00a7c6bc */
                    /* try { // try from 00a7c628 to 00b7c643 has its CatchHandler @ 00a7c6c4 */
  return;
}

