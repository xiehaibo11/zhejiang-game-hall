
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::experimental::AudioEngineImpl::init() */

void __thiscall cocos2d::experimental::AudioEngineImpl::init(AudioEngineImpl *this)

{
  SLEngineItf_ **ppSVar1;
  SLObjectItf_ **ppSVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  AudioPlayerProvider *this_00;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  code *pcVar10;
  EventDispatcher *pEVar11;
  ulong local_b0 [2];
  char *local_a0;
  undefined1 auStack_98 [8];
  undefined **local_90;
  code *local_88;
  undefined8 uStack_80;
  AudioEngineImpl *local_78;
  undefined ***local_70;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  iVar4 = slCreateEngine(this + 0x28,0,0,0,0,0);
  if (iVar4 == 0) {
    puVar6 = *(undefined8 **)(this + 0x28);
    iVar4 = (**(code **)*puVar6)(puVar6,0);
    if (iVar4 == 0) {
      iVar4 = (**(code **)(**(long **)(this + 0x28) + 0x18))
                        (*(long **)(this + 0x28),_SL_IID_ENGINE,this + 0x30);
      if (iVar4 == 0) {
        iVar4 = (**(code **)(**(long **)(this + 0x30) + 0x38))
                          (*(long **)(this + 0x30),this + 0x38,0,auStack_98,auStack_98);
        if (iVar4 == 0) {
          puVar6 = *(undefined8 **)(this + 0x38);
          iVar4 = (**(code **)*puVar6)(puVar6,0);
          if (iVar4 == 0) {
            this_00 = operator_new(0x170);
            ppSVar1 = *(SLEngineItf_ ***)(this + 0x30);
            ppSVar2 = *(SLObjectItf_ ***)(this + 0x38);
            iVar4 = getDeviceSampleRate();
            iVar5 = getDeviceAudioBufferSizeInFrames();
            local_90 = &PTR_FUN_016f3808;
            local_88 = FUN_00e653d8;
            local_70 = &local_90;
            AudioPlayerProvider::AudioPlayerProvider
                      (this_00,ppSVar1,ppSVar2,iVar4,iVar5,(function *)&local_90,
                       (ICallerThreadUtils *)&PTR_PTR_017774d8);
            *(AudioPlayerProvider **)(this + 0xb8) = this_00;
            if (&local_90 == local_70) {
              pcVar10 = (code *)(*local_70)[4];
LAB_00e6526c:
              (*pcVar10)();
            }
            else if (local_70 != (undefined ***)0x0) {
              pcVar10 = (code *)(*local_70)[5];
              goto LAB_00e6526c;
            }
            lVar7 = Director::getInstance();
            pEVar11 = *(EventDispatcher **)(lVar7 + 0xb0);
            local_a0 = operator_new(0x20);
            builtin_strncpy(local_a0,"event_come_to_background",0x19);
            local_90 = &PTR_FUN_016f38b8;
            uStack_80 = 0;
            local_88 = onEnterBackground;
            local_b0[1] = 0x18;
            local_b0[0] = 0x21;
            local_78 = this;
            local_70 = &local_90;
            uVar8 = EventDispatcher::addCustomEventListener
                              (pEVar11,(basic_string *)local_b0,(function *)&local_90);
            *(undefined8 *)(this + 0xc0) = uVar8;
            if (&local_90 == local_70) {
              pcVar10 = (code *)(*local_70)[4];
LAB_00e65310:
              (*pcVar10)();
            }
            else if (local_70 != (undefined ***)0x0) {
              pcVar10 = (code *)(*local_70)[5];
              goto LAB_00e65310;
            }
            if ((local_b0[0] & 1) != 0) {
              operator_delete(local_a0);
            }
            lVar7 = Director::getInstance();
            pEVar11 = *(EventDispatcher **)(lVar7 + 0xb0);
            local_a0 = operator_new(0x20);
            local_90 = &PTR_FUN_016f38b8;
            local_b0[1] = 0x18;
            local_b0[0] = 0x21;
            builtin_strncpy(local_a0,"event_come_to_foreground",0x19);
            uStack_80 = 0;
            local_88 = onEnterForeground;
            local_78 = this;
            local_70 = &local_90;
            uVar8 = EventDispatcher::addCustomEventListener
                              (pEVar11,(basic_string *)local_b0,(function *)&local_90);
            *(undefined8 *)(this + 200) = uVar8;
            if (&local_90 == local_70) {
              pcVar10 = (code *)(*local_70)[4];
LAB_00e653b8:
              (*pcVar10)();
            }
            else if (local_70 != (undefined ***)0x0) {
              pcVar10 = (code *)(*local_70)[5];
              goto LAB_00e653b8;
            }
            if ((local_b0[0] & 1) != 0) {
              operator_delete(local_a0);
            }
            uVar8 = 1;
            goto LAB_00e651b8;
          }
          pcVar9 = "\"realize the output mix fail\"";
          uVar8 = 0xba;
        }
        else {
          pcVar9 = "\"create output mix fail\"";
          uVar8 = 0xb6;
        }
      }
      else {
        pcVar9 = "\"get the engine interface fail\"";
        uVar8 = 0xb0;
      }
    }
    else {
      pcVar9 = "\"realize the engine fail\"";
      uVar8 = 0xac;
    }
  }
  else {
    pcVar9 = "\"create opensl engine fail\"";
    uVar8 = 0xa8;
  }
  log("fun:%s,line:%d,msg:%s","init",uVar8,pcVar9);
  uVar8 = 0;
LAB_00e651b8:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

