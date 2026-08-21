
/* cocos2d::experimental::AudioMixer::process__genericResampling(cocos2d::experimental::AudioMixer::state_t*,
   long) */

void cocos2d::experimental::AudioMixer::process__genericResampling(state_t *param_1,long param_2)

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
      uVar8 = uVar10 & (0x80000000U >> (ulong)((uint)LZCOUNT(uVar10) & 0x1f) ^ 0xffffffff);
      uVar16 = uVar10;
      if (uVar8 == 0) {
        local_a0 = *(long *)(param_1 + lVar12 * 0xd0 + 0xa8);
      }
      else {
        local_a0 = *(long *)(param_1 + lVar12 * 0xd0 + 0xa8);
        do {
          lVar9 = LZCOUNT(uVar8);
          uVar3 = 0x80000000 >> (ulong)((uint)lVar9 & 0x1f);
          uVar8 = uVar8 & (uVar3 ^ 0xffffffff);
          uVar11 = 0xffffffff;
          if (*(long *)(param_1 + (0x1f - lVar9) * 0xd0 + 0xa8) != local_a0) {
            uVar11 = ~uVar3;
          }
          uVar16 = uVar11 & uVar16;
        } while (uVar8 != 0);
      }
      uVar10 = uVar10 & (uVar16 ^ 0xffffffff);
      memset(__s,0,(ulong)*(uint *)(param_1 + lVar12 * 0xd0 + 0xfc) * *(long *)(param_1 + 8) * 4);
joined_r0x00e747f4:
      if (uVar16 != 0) {
        lVar9 = 0x1f - LZCOUNT(uVar16);
        psVar14 = param_1 + lVar9 * 0xd0 + 0x40;
        if ((*(uint *)psVar14 >> 0x10 & 1) == 0) {
          lVar15 = 0;
        }
        else {
          lVar15 = *(long *)(param_1 + lVar9 * 0xd0 + 0xb0);
        }
        uVar16 = uVar16 & (0x80000000U >> (ulong)((uint)LZCOUNT(uVar16) & 0x1f) ^ 0xffffffff);
        if ((*(uint *)psVar14 >> 0xc & 1) == 0) {
          if (uVar13 != 0) {
            uVar17 = 0;
            psVar1 = param_1 + lVar9 * 0xd0 + 0x78;
            psVar2 = param_1 + lVar9 * 0xd0 + 0x80;
            do {
              lVar7 = 0x7fffffffffffffff;
              *(ulong *)psVar2 = uVar13 - uVar17;
              if (param_2 != 0x7fffffffffffffff) {
                uVar4 = 0;
                if ((ulong)*(uint *)(param_1 + lVar9 * 0xd0 + 0xa0) != 0) {
                  uVar4 = (ulong)(sLocalTimeFreq * (int)uVar17) /
                          (ulong)*(uint *)(param_1 + lVar9 * 0xd0 + 0xa0);
                }
                lVar7 = uVar4 + param_2;
              }
              plVar6 = *(long **)(param_1 + lVar9 * 0xd0 + 0x70);
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
            } while (uVar17 < uVar13);
          }
        }
        else {
          (**(code **)(**(long **)(param_1 + lVar9 * 0xd0 + 0x98) + 0x30))
                    (*(long **)(param_1 + lVar9 * 0xd0 + 0x98),param_2);
          (**(code **)(param_1 + lVar9 * 0xd0 + 0x88))
                    (psVar14,__s,uVar13,*(undefined8 *)(param_1 + 0x20),lVar15);
        }
        goto joined_r0x00e747f4;
      }
      convertMixerFormat(local_a0,*(undefined4 *)(param_1 + lVar12 * 0xd0 + 0xc4),__s,
                         *(undefined4 *)(param_1 + lVar12 * 0xd0 + 0xcc),
                         uVar13 * *(uint *)(param_1 + lVar12 * 0xd0 + 0xfc));
    } while (uVar10 != 0);
  }
  return;
}

