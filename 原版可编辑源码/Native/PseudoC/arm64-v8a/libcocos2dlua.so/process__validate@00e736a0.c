
/* cocos2d::experimental::AudioMixer::process__validate(cocos2d::experimental::AudioMixer::state_t*,
   long) */

void cocos2d::experimental::AudioMixer::process__validate(state_t *param_1,long param_2)

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
  
  uVar16 = *(uint *)(param_1 + 4);
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
    do {
      lVar14 = LZCOUNT(uVar16);
      uVar13 = 0x80000000 >> (ulong)((uint)lVar14 & 0x1f);
      uVar16 = uVar16 & (uVar13 ^ 0xffffffff);
      puVar1 = local_68;
      if (*(short *)(param_1 + (0x1f - lVar14) * 0xd0 + 0x66) != 0) {
        puVar1 = local_68 + 1;
      }
      *puVar1 = *puVar1 | uVar13;
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
      lVar14 = 0x1f - LZCOUNT(uVar16);
      uVar13 = (byte)param_1[lVar14 * 0xd0 + 100] - 1 | 0x1000;
      if (*(long *)(param_1 + lVar14 * 0xd0 + 0x98) == 0) {
        uVar13 = (byte)param_1[lVar14 * 0xd0 + 100] - 1;
      }
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
            bVar6 = false;
          }
          else {
            iVar2 = *(int *)(param_1 + lVar14 * 0xd0 + 0xcc);
            bVar6 = (bool)(bVar6 & (uVar10 & 0x10000) == 0);
            if ((*(uint *)(param_1 + lVar14 * 0xd0 + 0xfc) == 2) && (iVar2 == 1)) {
              pcVar7 = track__16BitsStereo;
            }
            else {
              if (8 < *(uint *)(param_1 + lVar14 * 0xd0 + 0xfc)) goto LAB_00e73b88;
              if (iVar2 == 5) {
                pcVar7 = track__NoResample<0,float,float,int>;
              }
              else {
                if (iVar2 != 1) goto LAB_00e73b70;
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
LAB_00e73b88:
                    /* WARNING: Subroutine does not return */
              __android_log_assert("channelCount > MAX_NUM_CHANNELS","AudioMixer",0);
            }
            if (iVar2 == 5) {
              pcVar7 = track__Resample<0,float,float,int>;
            }
            else {
              if (iVar2 != 1) {
LAB_00e73b70:
                    /* WARNING: Subroutine does not return */
                __android_log_assert(0,"AudioMixer","bad mixerInFormat: %#x");
              }
              pcVar7 = track__Resample<0,int,short,int>;
            }
          }
          bVar6 = false;
          bVar5 = true;
        }
      }
      uVar16 = uVar16 & (0x80000000U >> (ulong)((uint)LZCOUNT(uVar16) & 0x1f) ^ 0xffffffff);
      iVar15 = iVar15 + -1;
      *(code **)(param_1 + lVar14 * 0xd0 + 0x88) = pcVar7;
      bVar4 = bVar3;
    } while (uVar16 != 0);
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
      if (((bVar6) && (pcVar7 = process__genericNoResampling, iVar15 == 0)) && ((bool)(bVar3 ^ 1)))
      {
        lVar14 = 0x1f - LZCOUNT(*(undefined4 *)param_1);
        if (((byte)param_1[lVar14 * 0xd0 + 0x41] & 1) == 0) {
          pcVar7 = (code *)getProcessHook(0,*(undefined4 *)(param_1 + lVar14 * 0xd0 + 0xfc),
                                          *(undefined4 *)(param_1 + lVar14 * 0xd0 + 0xcc),
                                          *(undefined4 *)(param_1 + lVar14 * 0xd0 + 0xc4));
          *(code **)(param_1 + 0x10) = pcVar7;
        }
        else {
          pcVar7 = process__genericNoResampling;
        }
      }
    }
    (*pcVar7)(param_1,param_2);
    uVar16 = *(uint *)param_1;
    if (uVar16 != 0) {
      bVar5 = true;
      uVar13 = uVar16;
      do {
        while( true ) {
          lVar14 = 0x1f - LZCOUNT(uVar13);
          uVar13 = uVar13 & (0x80000000U >> (ulong)((uint)LZCOUNT(uVar13) & 0x1f) ^ 0xffffffff);
          if (*(long *)(param_1 + lVar14 * 0xd0 + 0x98) != 0) break;
          if (*(int *)(param_1 + lVar14 * 0xd0 + 0x44) == 0) {
            *(code **)(param_1 + lVar14 * 0xd0 + 0x88) = track__nop;
            *(uint *)(param_1 + lVar14 * 0xd0 + 0x40) =
                 *(uint *)(param_1 + lVar14 * 0xd0 + 0x40) | 0x100;
          }
          else {
            bVar5 = false;
          }
          if (uVar13 == 0) goto LAB_00e73ae8;
        }
        bVar5 = false;
      } while (uVar13 != 0);
LAB_00e73ae8:
      if (!bVar5) {
        if (iVar15 != 0 || !bVar6) {
          return;
        }
        lVar14 = 0x1f - LZCOUNT(uVar16);
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

