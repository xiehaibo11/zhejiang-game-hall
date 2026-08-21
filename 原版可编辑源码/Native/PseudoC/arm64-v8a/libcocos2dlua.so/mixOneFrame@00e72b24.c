
/* cocos2d::experimental::AudioMixerController::mixOneFrame() */

void __thiscall cocos2d::experimental::AudioMixerController::mixOneFrame(AudioMixerController *this)

{
  mutex *this_00;
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  PcmBufferProvider *this_01;
  long *plVar5;
  long *plVar6;
  Track *pTVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  size_t sVar11;
  long *plVar12;
  undefined4 local_8c;
  long *local_88;
  long *local_80;
  long *local_78;
  undefined4 local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  *(undefined4 *)(this + 0x69) = 1;
  std::__ndk1::mutex::lock((mutex *)(this + 0x18));
  std::__ndk1::chrono::steady_clock::now();
  local_80 = (long *)0x0;
  local_78 = (long *)0x0;
  local_88 = (long *)0x0;
  plVar12 = *(long **)(this + 0x40);
  plVar2 = *(long **)(this + 0x48);
  uVar10 = (long)plVar2 - (long)plVar12;
  if (uVar10 != 0) {
    if ((ulong)((long)uVar10 >> 3) >> 0x3d != 0) {
LAB_00e73040:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_80 = operator_new(uVar10);
    local_78 = local_80 + ((long)uVar10 >> 3);
  }
  local_88 = local_80;
  if (plVar12 != plVar2) {
    do {
      pTVar7 = (Track *)*plVar12;
      switch(*(undefined4 *)(pTVar7 + 0xa4)) {
      case 1:
        initTrack(this,pTVar7,(vector *)&local_88);
        iVar3 = *(int *)(*plVar12 + 0xd0);
        this_00 = (mutex *)(*plVar12 + 0xdc);
        std::__ndk1::mutex::lock(this_00);
        if ((char)((long *)*plVar12)[0x1b] != '\0') {
          uVar10 = (**(code **)(*(long *)*plVar12 + 0x20))();
          local_6c = float_from_gain();
          local_8c = float_from_gain((uVar10 & 0xffffffff) >> 0x10);
          AudioMixer::setParameter(*(AudioMixer **)(this + 0x10),iVar3,0x3003,0x4200,&local_6c);
          AudioMixer::setParameter(*(AudioMixer **)(this + 0x10),iVar3,0x3003,0x4201,&local_8c);
          *(undefined1 *)(*plVar12 + 0xd8) = 0;
        }
        std::__ndk1::mutex::unlock(this_00);
        break;
      case 2:
        initTrack(this,pTVar7,(vector *)&local_88);
        if (*(int *)(*plVar12 + 0xa0) == 3) {
          AudioMixer::enable(*(AudioMixer **)(this + 0x10),*(int *)(*plVar12 + 0xd0));
          Track::setState((Track *)*plVar12,1);
        }
        else {
          __android_log_print(5,"AudioMixerController",
                              "Previous state (%d) isn\'t PAUSED, couldn\'t resume!");
        }
        break;
      case 3:
        initTrack(this,pTVar7,(vector *)&local_88);
        if (*(int *)(*plVar12 + 0xa0) - 1U < 2) {
          AudioMixer::disable(*(AudioMixer **)(this + 0x10),*(int *)(*plVar12 + 0xd0));
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
        plVar6 = local_88;
        if (local_80 == local_78) {
          sVar11 = (long)local_80 - (long)local_88;
          uVar10 = ((long)sVar11 >> 3) + 1;
          if (uVar10 >> 0x3d != 0) goto LAB_00e73040;
          if ((ulong)((long)local_78 - (long)local_88 >> 3) < 0xfffffffffffffff) {
            uVar9 = (long)local_78 - (long)local_88 >> 2;
            if (uVar10 <= uVar9) {
              uVar10 = uVar9;
            }
            if (uVar10 != 0) {
              if (uVar10 >> 0x3d == 0) goto LAB_00e72dac;
              goto LAB_00e73040;
            }
            plVar5 = (long *)0x0;
          }
          else {
            uVar10 = 0x1fffffffffffffff;
LAB_00e72dac:
            plVar5 = operator_new(uVar10 << 3);
          }
          plVar1 = plVar5 + ((long)sVar11 >> 3);
          *plVar1 = *plVar12;
          if (0 < (long)sVar11) {
            memcpy(plVar5,plVar6,sVar11);
          }
          local_88 = plVar5;
          local_80 = plVar1 + 1;
          local_78 = plVar5 + uVar10;
          if (plVar6 != (long *)0x0) {
            operator_delete(plVar6);
          }
        }
        else {
          *local_80 = *plVar12;
          local_80 = local_80 + 1;
        }
      }
      this_01 = (PcmBufferProvider *)*plVar12;
      if ((*(int *)(this_01 + 0xa4) == 1) &&
         (*(ulong *)(this_01 + 0x10) <= *(ulong *)(this_01 + 0x20))) {
        if (this_01[0x104] == (PcmBufferProvider)0x0) {
          AudioMixer::deleteTrackName(*(AudioMixer **)(this + 0x10),*(int *)(this_01 + 0xd0));
          plVar6 = local_88;
          if (local_80 == local_78) {
            sVar11 = (long)local_80 - (long)local_88;
            uVar10 = ((long)sVar11 >> 3) + 1;
            if (uVar10 >> 0x3d != 0) goto LAB_00e73040;
            if ((ulong)((long)local_78 - (long)local_88 >> 3) < 0xfffffffffffffff) {
              uVar9 = (long)local_78 - (long)local_88 >> 2;
              if (uVar10 <= uVar9) {
                uVar10 = uVar9;
              }
              if (uVar10 != 0) {
                if (uVar10 >> 0x3d == 0) goto LAB_00e72e90;
                goto LAB_00e73040;
              }
              plVar5 = (long *)0x0;
            }
            else {
              uVar10 = 0x1fffffffffffffff;
LAB_00e72e90:
              plVar5 = operator_new(uVar10 << 3);
            }
            plVar1 = plVar5 + ((long)sVar11 >> 3);
            *plVar1 = *plVar12;
            if (0 < (long)sVar11) {
              memcpy(plVar5,plVar6,sVar11);
            }
            local_88 = plVar5;
            local_80 = plVar1 + 1;
            local_78 = plVar5 + uVar10;
            if (plVar6 != (long *)0x0) {
              operator_delete(plVar6);
            }
          }
          else {
            *local_80 = *plVar12;
            local_80 = local_80 + 1;
          }
          Track::setState((Track *)*plVar12,5);
        }
        else {
          PcmBufferProvider::reset(this_01);
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar2 != plVar12);
    uVar10 = *(long *)(this + 0x48) - *(long *)(this + 0x40);
  }
  plVar2 = local_80;
  plVar12 = local_88;
  if (uVar10 != (long)local_80 - (long)local_88) {
    AudioMixer::process(*(long *)(this + 0x10));
  }
  do {
    if (plVar12 == plVar2) {
      std::__ndk1::mutex::unlock((mutex *)(this + 0x18));
      std::__ndk1::chrono::steady_clock::now();
      *(undefined4 *)(this + 0x69) = 0;
      if (local_88 != (long *)0x0) {
        local_80 = local_88;
        operator_delete(local_88);
      }
      if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    plVar6 = *(long **)(this + 0x40);
    plVar5 = *(long **)(this + 0x48);
    lVar8 = *plVar12;
    if (plVar6 != plVar5) {
      if (*plVar6 != lVar8) {
        do {
          if (plVar5 + -1 == plVar6) goto LAB_00e72fc4;
          plVar1 = plVar6 + 1;
          plVar6 = plVar6 + 1;
        } while (*plVar1 != lVar8);
      }
      if (plVar6 != plVar5) {
        sVar11 = (long)plVar5 - (long)(plVar6 + 1);
        if (sVar11 != 0) {
          memmove(plVar6,plVar6 + 1,sVar11);
        }
        *(long **)(this + 0x48) = plVar6 + ((long)sVar11 >> 3);
        lVar8 = *plVar12;
      }
    }
LAB_00e72fc4:
    if ((lVar8 == 0) || (plVar6 = *(long **)(lVar8 + 0x60), plVar6 == (long *)0x0)) {
      __android_log_print(6,"AudioMixerController","track (%p) was released ...");
    }
    else {
      local_6c = 6;
      (**(code **)(*plVar6 + 0x30))(plVar6,&local_6c);
    }
    plVar12 = plVar12 + 1;
  } while( true );
}

