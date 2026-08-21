
/* cocos2d::AudioMixer::process__validate(cocos2d::AudioMixer::state_t*, long) */

void cocos2d::AudioMixer::process__validate(state_t *param_1,long param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  code *pcVar7;
  void *pvVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  uint local_68 [2];
  
                    /* try { // try from 00a7b360 to 00b7b367 has its CatchHandler @ 00a7b428 */
  uVar16 = *(uint *)(param_1 + 4);
                    /* try { // try from 00a7b378 to 00b7b37b has its CatchHandler @ 00a7b420 */
  if (uVar16 == 0) {
    __android_log_print(5,"AudioMixer","in process__validate() but nothing\'s invalid");
    uVar16 = *(uint *)(param_1 + 4);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  if (uVar16 == 0) {
    uVar13 = 0xffffffff;
    uVar16 = 0;
  }
  else {
                    /* try { // try from 00a7b38c to 00b7b38f has its CatchHandler @ 00a7b424 */
                    /* try { // try from 00a7b390 to 00b7b3ab has its CatchHandler @ 00a7b42c */
    do {
      lVar14 = LZCOUNT(uVar16);
                    /* try { // try from 00a7b3ac to 00b7b493 has its CatchHandler @ 00a7b2ec */
      uVar13 = 1 << (ulong)((uint)(0x1f - lVar14) & 0x1f);
      uVar16 = uVar16 & (uVar13 ^ 0xffffffff);
      puVar1 = local_68;
      if (*(short *)(param_1 + (0x1f - lVar14) * 0xd0 + 0x66) != 0) {
        puVar1 = local_68 + 1;
      }
      *puVar1 = uVar13 | *puVar1;
    } while (uVar16 != 0);
    uVar13 = ~local_68[0];
    uVar16 = local_68[1];
  }
  uVar16 = *(uint *)param_1 & uVar13 | uVar16;
  *(uint *)param_1 = uVar16;
  if (uVar16 == 0) {
    *(code **)(param_1 + 0x10) = process__nop;
    process__nop(param_1,param_2);
  }
  else {
    bVar5 = false;
    iVar15 = 1;
    bVar6 = true;
    bVar4 = 0;
    do {
      pcVar7 = track__nop;
                    /* catch() { ... } // from try @ 00a7b378 with catch @ 00a7b420 */
      lVar14 = 0x1f - LZCOUNT(uVar16);
                    /* catch() { ... } // from try @ 00a7b38c with catch @ 00a7b424 */
                    /* catch() { ... } // from try @ 00a7b360 with catch @ 00a7b428 */
                    /* catch() { ... } // from try @ 00a7b390 with catch @ 00a7b42c */
      uVar13 = (byte)param_1[lVar14 * 0xd0 + 100] - 1 | 0x1000;
      if (*(long *)(param_1 + lVar14 * 0xd0 + 0x98) == 0) {
        uVar13 = (byte)param_1[lVar14 * 0xd0 + 100] - 1;
      }
                    /* catch() { ... } // from try @ 00a7b338 with catch @ 00a7b444 */
      if ((*(short *)(param_1 + lVar14 * 0xd0 + 0x60) != 0) &&
         (*(long *)(param_1 + lVar14 * 0xd0 + 0xb0) != 0)) {
        uVar13 = uVar13 | 0x10000;
      }
      bVar3 = bVar4 | (*(int *)(param_1 + lVar14 * 0xd0 + 0x54) != 0 ||
                      *(int *)(param_1 + lVar14 * 0xd0 + 0x50) != 0);
      uVar10 = uVar13;
      if (((*(long *)(param_1 + lVar14 * 0xd0 + 0x98) == 0) &&
          (*(int *)(param_1 + lVar14 * 0xd0 + 0x54) == 0 &&
           *(int *)(param_1 + lVar14 * 0xd0 + 0x50) == 0)) &&
         (uVar10 = uVar13 | 0x100, bVar3 = bVar4, *(int *)(param_1 + lVar14 * 0xd0 + 0x44) != 0)) {
        uVar10 = uVar13;
      }
      *(uint *)(param_1 + lVar14 * 0xd0 + 0x40) = uVar10;
      if ((uVar10 >> 8 & 1) == 0) {
        if ((uVar10 >> 0xc & 1) == 0) {
          if ((uVar10 & 7) == 0) {
            if (*(int *)(param_1 + lVar14 * 0xd0 + 0xf8) == 3) {
                    /* try { // try from 00a7b550 to 00b7b55b has its CatchHandler @ 00a7b620 */
              uVar11 = 2;
              if (*(int *)(param_1 + lVar14 * 0xd0 + 0x68) == 1) {
                uVar11 = 3;
              }
            }
            else {
              uVar11 = 2;
            }
            pcVar7 = (code *)getTrackHook(uVar11,*(undefined4 *)(param_1 + lVar14 * 0xd0 + 0xfc),
                                          *(undefined4 *)(param_1 + lVar14 * 0xd0 + 0xcc));
                    /* try { // try from 00a7b5ac to 00b7b5b3 has its CatchHandler @ 00a7b61c */
                    /* try { // try from 00a7b5b4 to 00b7b5d3 has its CatchHandler @ 00a7b4bc */
            bVar6 = false;
          }
          else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a7b52c with catch @ 00a7b4bc
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7b55c with catch @ 00a7b4bc
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7b58c with catch @ 00a7b4bc
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7b5b4 with catch @ 00a7b4bc
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7b5e0 with catch @ 00a7b4bc
                        */
            iVar2 = *(int *)(param_1 + lVar14 * 0xd0 + 0xcc);
            bVar6 = (bool)(bVar6 & (uVar10 & 0x10000) == 0);
            if ((*(uint *)(param_1 + lVar14 * 0xd0 + 0xfc) == 2) && (iVar2 == 1)) {
              pcVar7 = track__16BitsStereo;
            }
            else {
              if (8 < *(uint *)(param_1 + lVar14 * 0xd0 + 0xfc)) goto LAB_00a7b820;
              if (iVar2 == 5) {
                pcVar7 = track__NoResample<0,float,float,int>;
              }
              else {
                if (iVar2 != 1) goto LAB_00a7b808;
                pcVar7 = track__NoResample<0,int,short,int>;
              }
            }
          }
        }
        else {
          iVar2 = *(int *)(param_1 + lVar14 * 0xd0 + 0xcc);
          if ((*(uint *)(param_1 + lVar14 * 0xd0 + 0xfc) == 2) && (iVar2 == 1)) {
            pcVar7 = track__genericResample;
          }
          else {
            if (8 < *(uint *)(param_1 + lVar14 * 0xd0 + 0xfc)) {
LAB_00a7b820:
                    /* try { // try from 00a7b828 to 00b7b85f has its CatchHandler @ 00a7ba10 */
                    /* WARNING: Subroutine does not return */
              __android_log_assert("channelCount > MAX_NUM_CHANNELS","AudioMixer",0);
            }
            if (iVar2 == 5) {
                    /* try { // try from 00a7b584 to 00b7b58b has its CatchHandler @ 00a7b61c */
              pcVar7 = track__Resample<0,float,float,int>;
            }
            else {
                    /* try { // try from 00a7b524 to 00b7b52b has its CatchHandler @ 00a7b620 */
              if (iVar2 != 1) {
LAB_00a7b808:
                    /* WARNING: Subroutine does not return */
                __android_log_assert(0,"AudioMixer","bad mixerInFormat: %#x");
              }
                    /* try { // try from 00a7b52c to 00b7b54f has its CatchHandler @ 00a7b4bc */
              pcVar7 = track__Resample<0,int,short,int>;
            }
          }
                    /* try { // try from 00a7b58c to 00b7b5ab has its CatchHandler @ 00a7b4bc */
          bVar6 = false;
          bVar5 = true;
        }
      }
      uVar16 = uVar16 & (1 << (ulong)((uint)lVar14 & 0x1f) ^ 0xffffffffU);
      iVar15 = iVar15 + -1;
                    /* try { // try from 00a7b5d4 to 00b7b5df has its CatchHandler @ 00a7b61c */
      *(code **)(param_1 + lVar14 * 0xd0 + 0x88) = pcVar7;
      bVar4 = bVar3;
    } while (uVar16 != 0);
                    /* try { // try from 00a7b5e0 to 00b7b623 has its CatchHandler @ 00a7b4bc */
    pvVar8 = *(void **)(param_1 + 0x18);
    *(code **)(param_1 + 0x10) = process__nop;
    if (bVar5) {
      if (pvVar8 == (void *)0x0) {
        uVar12 = *(ulong *)(param_1 + 8) << 5;
        if ((*(ulong *)(param_1 + 8) & 0x1fffffffffffffff) >> 0x3b != 0) {
          uVar12 = 0xffffffffffffffff;
        }
        pvVar8 = operator_new__(uVar12);
        *(void **)(param_1 + 0x18) = pvVar8;
      }
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a7b584 with catch @ 00a7b61c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7b5ac with catch @ 00a7b61c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7b5d4 with catch @ 00a7b61c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a7b524 with catch @ 00a7b620
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7b550 with catch @ 00a7b620
                        */
        uVar12 = *(ulong *)(param_1 + 8) << 5;
        if ((*(ulong *)(param_1 + 8) & 0x1fffffffffffffff) >> 0x3b != 0) {
          uVar12 = 0xffffffffffffffff;
        }
        pvVar8 = operator_new__(uVar12);
        *(void **)(param_1 + 0x20) = pvVar8;
      }
      pcVar7 = process__genericResampling;
      *(code **)(param_1 + 0x10) = process__genericResampling;
    }
    else {
      if (pvVar8 != (void *)0x0) {
        operator_delete__(pvVar8);
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      if (*(void **)(param_1 + 0x20) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 0x20));
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      pcVar7 = process__genericNoResampling;
      *(code **)(param_1 + 0x10) = process__genericNoResampling;
                    /* try { // try from 00a7b690 to 00b7b6c3 has its CatchHandler @ 00a7b690
                       catch() { ... } // from try @ 00a7b690 with catch @ 00a7b690
                       catch() { ... } // from try @ 00a7b6d8 with catch @ 00a7b690 */
      if (((bVar6) && (pcVar7 = process__genericNoResampling, iVar15 == 0)) && ((bool)(bVar3 ^ 1)))
      {
        lVar14 = 0x1f - LZCOUNT(*(undefined4 *)param_1);
                    /* try { // try from 00a7b6c4 to 00b7b6cb has its CatchHandler @ 00a7b6fc */
        if (((byte)param_1[lVar14 * 0xd0 + 0x41] & 1) == 0) {
                    /* try { // try from 00a7b6d4 to 00b7b6d7 has its CatchHandler @ 00a7b6ec */
                    /* try { // try from 00a7b6d8 to 00b7b70f has its CatchHandler @ 00a7b690 */
          pcVar7 = (code *)getProcessHook(0,*(undefined4 *)(param_1 + lVar14 * 0xd0 + 0xfc),
                                          *(undefined4 *)(param_1 + lVar14 * 0xd0 + 0xcc),
                                          *(undefined4 *)(param_1 + lVar14 * 0xd0 + 0xc4));
          *(code **)(param_1 + 0x10) = pcVar7;
                    /* catch() { ... } // from try @ 00a7b6d4 with catch @ 00a7b6ec */
        }
        else {
          pcVar7 = process__genericNoResampling;
        }
      }
    }
                    /* catch() { ... } // from try @ 00a7b6c4 with catch @ 00a7b6fc */
    (*pcVar7)(param_1,param_2);
    uVar16 = *(uint *)param_1;
    if (uVar16 != 0) {
                    /* try { // try from 00a7b710 to 00b7b747 has its CatchHandler @ 00a7b710
                       catch() { ... } // from try @ 00a7b710 with catch @ 00a7b710
                       catch() { ... } // from try @ 00a7b750 with catch @ 00a7b710 */
      bVar5 = true;
      uVar13 = uVar16;
      do {
        while( true ) {
          lVar14 = 0x1f - LZCOUNT(uVar13);
          uVar13 = uVar13 & (1 << (ulong)((uint)lVar14 & 0x1f) ^ 0xffffffffU);
                    /* try { // try from 00a7b750 to 00b7b773 has its CatchHandler @ 00a7b710 */
          if ((*(long *)(param_1 + lVar14 * 0xd0 + 0x98) == 0) &&
             (*(int *)(param_1 + lVar14 * 0xd0 + 0x44) == 0)) break;
          bVar5 = false;
                    /* catch() { ... } // from try @ 00a7b748 with catch @ 00a7b760 */
          if (uVar13 == 0) goto LAB_00a7b780;
        }
        *(code **)(param_1 + lVar14 * 0xd0 + 0x88) = track__nop;
        *(uint *)(param_1 + lVar14 * 0xd0 + 0x40) =
             *(uint *)(param_1 + lVar14 * 0xd0 + 0x40) | 0x100;
      } while (uVar13 != 0);
LAB_00a7b780:
      if (!bVar5) {
        if (iVar15 != 0 || !bVar6) {
          return;
        }
        lVar14 = 0x1f - LZCOUNT(uVar16);
                    /* try { // try from 00a7b7d0 to 00b7b827 has its CatchHandler @ 00a7b7d0
                       catch() { ... } // from try @ 00a7b7d0 with catch @ 00a7b7d0
                       catch() { ... } // from try @ 00a7b8ac with catch @ 00a7b7d0
                       catch() { ... } // from try @ 00a7b9b8 with catch @ 00a7b7d0 */
        uVar9 = getProcessHook(0,*(undefined4 *)(param_1 + lVar14 * 0xd0 + 0xfc),
                               *(undefined4 *)(param_1 + lVar14 * 0xd0 + 0xcc),
                               *(undefined4 *)(param_1 + lVar14 * 0xd0 + 0xc4));
        *(undefined8 *)(param_1 + 0x10) = uVar9;
        return;
      }
    }
    *(code **)(param_1 + 0x10) = process__nop;
  }
  return;
}

