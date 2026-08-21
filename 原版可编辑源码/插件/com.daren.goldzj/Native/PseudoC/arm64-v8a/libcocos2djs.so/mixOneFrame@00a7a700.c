
/* cocos2d::AudioMixerController::mixOneFrame() */

void __thiscall cocos2d::AudioMixerController::mixOneFrame(AudioMixerController *this)

{
  mutex *this_00;
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  PcmBufferProvider *this_01;
  long *plVar5;
  long *plVar6;
  Track *pTVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  size_t sVar12;
  long *plVar13;
  undefined4 local_8c;
  long *local_88;
  long *local_80;
  long *local_78;
  undefined4 local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00a7a730 to 00b7a78b has its CatchHandler @ 00a7a730
                       catch() { ... } // from try @ 00a7a730 with catch @ 00a7a730
                       catch() { ... } // from try @ 00a7a7bc with catch @ 00a7a730 */
  *(undefined4 *)(this + 0x69) = 1;
  std::__ndk1::mutex::lock((mutex *)(this + 0x18));
  std::__ndk1::chrono::steady_clock::now();
  local_88 = (long *)0x0;
  local_80 = (long *)0x0;
  local_78 = (long *)0x0;
  plVar13 = *(long **)(this + 0x40);
  plVar6 = *(long **)(this + 0x48);
  uVar11 = (long)plVar6 - (long)plVar13;
  if (uVar11 != 0) {
    if ((ulong)((long)uVar11 >> 3) >> 0x3d != 0) {
LAB_00a7ac24:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_80 = operator_new(uVar11);
    local_78 = local_80 + ((long)uVar11 >> 3);
  }
  local_88 = local_80;
  if (plVar13 != plVar6) {
    do {
      pTVar7 = (Track *)*plVar13;
      switch(*(undefined4 *)(pTVar7 + 0xa4)) {
      case 1:
        initTrack(this,pTVar7,(vector *)&local_88);
        iVar2 = *(int *)(*plVar13 + 0xd0);
        this_00 = (mutex *)(*plVar13 + 0xdc);
        std::__ndk1::mutex::lock(this_00);
                    /* catch() { ... } // from try @ 00a7a7b4 with catch @ 00a7a80c */
        if ((char)((long *)*plVar13)[0x1b] != '\0') {
                    /* catch() { ... } // from try @ 00a7a78c with catch @ 00a7a810 */
          uVar11 = (**(code **)(*(long *)*plVar13 + 0x20))();
          local_6c = float_from_gain();
          local_8c = float_from_gain((uVar11 & 0xffffffff) >> 0x10);
          AudioMixer::setParameter(*(AudioMixer **)(this + 0x10),iVar2,0x3003,0x4200,&local_6c);
          AudioMixer::setParameter(*(AudioMixer **)(this + 0x10),iVar2,0x3003,0x4201,&local_8c);
          *(undefined1 *)(*plVar13 + 0xd8) = 0;
        }
        std::__ndk1::mutex::unlock(this_00);
        break;
      case 2:
        initTrack(this,pTVar7,(vector *)&local_88);
        if (*(int *)(*plVar13 + 0xa0) == 3) {
          AudioMixer::enable(*(AudioMixer **)(this + 0x10),*(int *)(*plVar13 + 0xd0));
          Track::setState((Track *)*plVar13,1);
        }
        else {
          __android_log_print(5,"AudioMixerController",
                              "Previous state (%d) isn\'t PAUSED, couldn\'t resume!");
        }
        break;
      case 3:
        initTrack(this,pTVar7,(vector *)&local_88);
        if (*(int *)(*plVar13 + 0xa0) - 1U < 2) {
          AudioMixer::disable(*(AudioMixer **)(this + 0x10),*(int *)(*plVar13 + 0xd0));
        }
        else {
          __android_log_print(5,"AudioMixerController",
                              "Previous state (%d) isn\'t PLAYING, couldn\'t pause!");
        }
        break;
      case 4:
        if (pTVar7[0x105] != (Track)0x0) {
          AudioMixer::deleteTrackName(*(AudioMixer **)(this + 0x10),*(int *)(pTVar7 + 0xd0));
        }
        plVar4 = local_88;
        if (local_80 == local_78) {
          sVar12 = (long)local_80 - (long)local_88;
          uVar11 = ((long)sVar12 >> 3) + 1;
          if (uVar11 >> 0x3d != 0) goto LAB_00a7ac24;
          if ((ulong)((long)local_78 - (long)local_88 >> 3) < 0xfffffffffffffff) {
            uVar9 = (long)local_78 - (long)local_88 >> 2;
            if (uVar11 <= uVar9) {
              uVar11 = uVar9;
            }
            if (uVar11 != 0) {
              if (uVar11 >> 0x3d == 0) goto LAB_00a7a990;
              goto LAB_00a7ac24;
            }
            plVar5 = (long *)0x0;
                    /* try { // try from 00a7a7b4 to 00b7a7bb has its CatchHandler @ 00a7a80c */
          }
          else {
            uVar11 = 0x1fffffffffffffff;
LAB_00a7a990:
            plVar5 = operator_new(uVar11 << 3);
          }
          plVar1 = plVar5 + ((long)sVar12 >> 3);
          *plVar1 = *plVar13;
          if (0 < (long)sVar12) {
            memcpy(plVar5,plVar4,sVar12);
          }
          local_88 = plVar5;
          local_80 = plVar1 + 1;
          local_78 = plVar5 + uVar11;
          if (plVar4 != (long *)0x0) {
            operator_delete(plVar4);
          }
        }
        else {
          *local_80 = *plVar13;
          local_80 = local_80 + 1;
        }
      }
      this_01 = (PcmBufferProvider *)*plVar13;
      if ((*(int *)(this_01 + 0xa4) == 1) &&
         (*(ulong *)(this_01 + 0x10) <= *(ulong *)(this_01 + 0x20))) {
        if (this_01[0x104] == (PcmBufferProvider)0x0) {
          AudioMixer::deleteTrackName(*(AudioMixer **)(this + 0x10),*(int *)(this_01 + 0xd0));
          plVar4 = local_88;
          if (local_80 == local_78) {
            sVar12 = (long)local_80 - (long)local_88;
            uVar11 = ((long)sVar12 >> 3) + 1;
            if (uVar11 >> 0x3d != 0) goto LAB_00a7ac24;
            if ((ulong)((long)local_78 - (long)local_88 >> 3) < 0xfffffffffffffff) {
              uVar9 = (long)local_78 - (long)local_88 >> 2;
              if (uVar11 <= uVar9) {
                uVar11 = uVar9;
              }
              if (uVar11 != 0) {
                if (uVar11 >> 0x3d == 0) goto LAB_00a7aa84;
                goto LAB_00a7ac24;
              }
              plVar5 = (long *)0x0;
                    /* try { // try from 00a7a7bc to 00b7a82b has its CatchHandler @ 00a7a730 */
            }
            else {
              uVar11 = 0x1fffffffffffffff;
LAB_00a7aa84:
              plVar5 = operator_new(uVar11 << 3);
            }
            plVar1 = plVar5 + ((long)sVar12 >> 3);
            *plVar1 = *plVar13;
            if (0 < (long)sVar12) {
              memcpy(plVar5,plVar4,sVar12);
            }
            local_88 = plVar5;
            local_80 = plVar1 + 1;
            local_78 = plVar5 + uVar11;
            if (plVar4 != (long *)0x0) {
              operator_delete(plVar4);
            }
          }
          else {
            *local_80 = *plVar13;
            local_80 = local_80 + 1;
          }
          Track::setState((Track *)*plVar13,5);
        }
        else {
          PcmBufferProvider::reset(this_01);
        }
      }
      plVar13 = plVar13 + 1;
    } while (plVar6 != plVar13);
    uVar11 = *(long *)(this + 0x48) - *(long *)(this + 0x40);
  }
  plVar13 = local_88;
  plVar6 = local_80;
                    /* try { // try from 00a7aaf8 to 00b7ab2b has its CatchHandler @ 00a7aaf8
                       catch() { ... } // from try @ 00a7aaf8 with catch @ 00a7aaf8
                       catch() { ... } // from try @ 00a7ab40 with catch @ 00a7aaf8 */
  if (uVar11 != (long)local_80 - (long)local_88) {
    AudioMixer::process(*(long *)(this + 0x10));
    plVar13 = local_88;
    plVar6 = local_80;
  }
  do {
    plVar4 = local_80;
    if (plVar13 == local_80) {
      local_80 = plVar6;
      std::__ndk1::mutex::unlock((mutex *)(this + 0x18));
      std::__ndk1::chrono::steady_clock::now();
      *(undefined4 *)(this + 0x69) = 0;
      if (local_88 != (long *)0x0) {
        local_80 = local_88;
        operator_delete(local_88);
      }
      if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    plVar5 = *(long **)(this + 0x40);
    plVar1 = *(long **)(this + 0x48);
                    /* try { // try from 00a7ab2c to 00b7ab33 has its CatchHandler @ 00a7ab64 */
    lVar8 = *plVar13;
    local_80 = plVar6;
    if (plVar5 != plVar1) {
      lVar10 = *plVar5;
                    /* try { // try from 00a7ab3c to 00b7ab3f has its CatchHandler @ 00a7ab54 */
                    /* try { // try from 00a7ab40 to 00b7ab77 has its CatchHandler @ 00a7aaf8 */
      while (lVar10 != lVar8) {
        plVar5 = plVar5 + 1;
        if (plVar1 == plVar5) goto LAB_00a7ab8c;
        lVar10 = *plVar5;
                    /* catch() { ... } // from try @ 00a7ab3c with catch @ 00a7ab54 */
      }
                    /* catch() { ... } // from try @ 00a7ab2c with catch @ 00a7ab64 */
      if (plVar5 != plVar1) {
        sVar12 = (long)plVar1 - (long)(plVar5 + 1);
        if (sVar12 != 0) {
                    /* try { // try from 00a7ab78 to 00b7abaf has its CatchHandler @ 00a7ab78
                       catch() { ... } // from try @ 00a7ab78 with catch @ 00a7ab78
                       catch() { ... } // from try @ 00a7abb8 with catch @ 00a7ab78 */
          memmove(plVar5,plVar5 + 1,sVar12);
        }
        *(long **)(this + 0x48) = plVar5 + ((long)sVar12 >> 3);
        lVar8 = *plVar13;
      }
    }
LAB_00a7ab8c:
    if ((lVar8 == 0) || (plVar6 = *(long **)(lVar8 + 0x60), plVar6 == (long *)0x0)) {
                    /* try { // try from 00a7abb0 to 00b7abb7 has its CatchHandler @ 00a7abc8 */
                    /* try { // try from 00a7abb8 to 00b7abdb has its CatchHandler @ 00a7ab78 */
      __android_log_print(6,"AudioMixerController","track (%p) was released ...");
    }
    else {
      local_6c = 6;
      (**(code **)(*plVar6 + 0x30))(plVar6,&local_6c);
    }
                    /* catch() { ... } // from try @ 00a7abb0 with catch @ 00a7abc8 */
    plVar13 = plVar13 + 1;
    plVar6 = local_80;
    local_80 = plVar4;
  } while( true );
}

