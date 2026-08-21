
/* cocos2d::experimental::AudioMixer::process__nop(cocos2d::experimental::AudioMixer::state_t*,
   long) */

void cocos2d::experimental::AudioMixer::process__nop(state_t *param_1,long param_2)

{
  state_t *psVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  void *__s;
  long *plVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  
  uVar2 = *(uint *)param_1;
  do {
    if (uVar2 == 0) {
      return;
    }
    lVar7 = 0x1f - LZCOUNT(uVar2);
    uVar8 = uVar2 & (0x80000000U >> (ulong)((uint)LZCOUNT(uVar2) & 0x1f) ^ 0xffffffff);
    uVar11 = uVar2;
    if (uVar8 == 0) {
      __s = *(void **)(param_1 + lVar7 * 0xd0 + 0xa8);
    }
    else {
      __s = *(void **)(param_1 + lVar7 * 0xd0 + 0xa8);
      do {
        lVar9 = LZCOUNT(uVar8);
        uVar3 = 0x80000000 >> (ulong)((uint)lVar9 & 0x1f);
        uVar8 = uVar8 & (uVar3 ^ 0xffffffff);
        uVar10 = 0xffffffff;
        if (*(void **)(param_1 + (0x1f - lVar9) * 0xd0 + 0xa8) != __s) {
          uVar10 = ~uVar3;
        }
        uVar11 = uVar10 & uVar11;
      } while (uVar8 != 0);
    }
    if (*(int *)(param_1 + lVar7 * 0xd0 + 0xc4) - 1U < 6) {
      lVar9 = *(long *)(&DAT_01428658 +
                       (long)(int)(*(int *)(param_1 + lVar7 * 0xd0 + 0xc4) - 1U) * 8);
    }
    else {
      lVar9 = 0;
    }
    uVar2 = uVar2 & (uVar11 ^ 0xffffffff);
    memset(__s,0,*(long *)(param_1 + 8) * (ulong)*(uint *)(param_1 + lVar7 * 0xd0 + 0xfc) * lVar9);
joined_r0x00e733a8:
  } while (uVar11 == 0);
  lVar9 = *(long *)(param_1 + 8);
  lVar7 = LZCOUNT(uVar11);
  uVar11 = uVar11 & (0x80000000U >> (ulong)((uint)lVar7 & 0x1f) ^ 0xffffffff);
  if (lVar9 != 0) {
    lVar7 = 0x1f - lVar7;
    psVar1 = param_1 + lVar7 * 0xd0 + 0x78;
    do {
      lVar6 = 0x7fffffffffffffff;
      *(long *)(param_1 + lVar7 * 0xd0 + 0x80) = lVar9;
      if (param_2 != 0x7fffffffffffffff) {
        uVar4 = 0;
        if ((ulong)*(uint *)(param_1 + lVar7 * 0xd0 + 0xa0) != 0) {
          uVar4 = (ulong)((*(int *)(param_1 + 8) - (int)lVar9) * sLocalTimeFreq) /
                  (ulong)*(uint *)(param_1 + lVar7 * 0xd0 + 0xa0);
        }
        lVar6 = uVar4 + param_2;
      }
      plVar5 = *(long **)(param_1 + lVar7 * 0xd0 + 0x70);
      (**(code **)(*plVar5 + 0x10))(plVar5,psVar1,lVar6);
      if (*(long *)psVar1 == 0) break;
      plVar5 = *(long **)(param_1 + lVar7 * 0xd0 + 0x70);
      lVar9 = lVar9 - *(long *)(param_1 + lVar7 * 0xd0 + 0x80);
      (**(code **)(*plVar5 + 0x18))(plVar5,psVar1);
    } while (lVar9 != 0);
  }
  goto joined_r0x00e733a8;
}

