
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::experimental::PcmAudioService::init(cocos2d::experimental::AudioMixerController*, int,
   int, int) */

void __thiscall
cocos2d::experimental::PcmAudioService::init
          (PcmAudioService *this,AudioMixerController *param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  char local_cc [4];
  undefined4 *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined4 *puStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  int local_8c;
  int iStack_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iStack_88 = param_3 * 1000;
  *(AudioMixerController **)(this + 0x48) = param_1;
  *(int *)(this + 0x38) = param_2;
  *(int *)(this + 0x3c) = param_3;
  *(int *)(this + 0x40) = param_4;
  uVar3 = _SL_IID_VOLUME;
  uVar2 = _SL_IID_PLAY;
  uVar6 = _SL_IID_ANDROIDSIMPLEBUFFERQUEUE;
  local_7c = 3;
  if (param_2 < 2) {
    local_7c = 4;
  }
  local_90 = 2;
  uStack_78 = 2;
  local_98 = 0x2800007bd;
  local_a8 = &local_98;
  puStack_a0 = &local_90;
  local_84 = 0x1000000010;
  local_b8[0] = 4;
  local_60 = _SL_IID_PLAY;
  uStack_58 = _SL_IID_VOLUME;
  local_50 = _SL_IID_ANDROIDSIMPLEBUFFERQUEUE;
  local_b0 = *(undefined8 *)(this + 0x10);
  local_c8 = local_b8;
  uStack_c0 = 0;
  local_70 = 0x100000001;
  local_68 = 1;
  local_8c = param_2;
  iVar4 = (**(code **)(**(long **)(this + 8) + 0x10))
                    (*(long **)(this + 8),this + 0x18,&local_a8,&local_c8,3,&local_60,&local_70);
  if (iVar4 == 0) {
    puVar5 = *(undefined8 **)(this + 0x18);
    iVar4 = (**(code **)*puVar5)(puVar5,0);
    if (iVar4 == 0) {
      iVar4 = (**(code **)(**(long **)(this + 0x18) + 0x18))
                        (*(long **)(this + 0x18),uVar2,this + 0x20);
      if (iVar4 == 0) {
        iVar4 = (**(code **)(**(long **)(this + 0x18) + 0x18))
                          (*(long **)(this + 0x18),uVar3,this + 0x28);
        if (iVar4 == 0) {
          iVar4 = (**(code **)(**(long **)(this + 0x18) + 0x18))
                            (*(long **)(this + 0x18),uVar6,this + 0x30);
          if (iVar4 == 0) {
            iVar4 = (**(code **)(**(long **)(this + 0x30) + 0x18))
                              (*(long **)(this + 0x30),
                               SLPcmAudioPlayerCallbackProxy::samplePlayerCallback,this);
            if (iVar4 == 0) {
              if (DAT_0178f3d8 == DAT_0178f3e0) {
                local_cc[0] = '\0';
                uVar8 = (long)*(int *)(this + 0x40) * (long)*(int *)(this + 0x38);
                uVar9 = DAT_0178f3e0 - DAT_0178f3d8;
                if (uVar9 < uVar8) {
                  std::__ndk1::vector<char,std::__ndk1::allocator<char>>::__append
                            ((vector<char,std::__ndk1::allocator<char>> *)&DAT_0178f3d8,
                             uVar8 - uVar9,local_cc);
                }
                else if (uVar9 != uVar8) {
                  DAT_0178f3e0 = DAT_0178f3d8 + uVar8;
                }
              }
              puVar5 = *(undefined8 **)(this + 0x30);
              iVar4 = (**(code **)*puVar5)
                                (puVar5,DAT_0178f3d8,(int)DAT_0178f3e0 - (int)DAT_0178f3d8);
              if (iVar4 == 0) {
                puVar5 = *(undefined8 **)(this + 0x20);
                iVar4 = (**(code **)*puVar5)(puVar5,3);
                if (iVar4 == 0) {
                  uVar6 = 1;
                  this[0x44] = (PcmAudioService)0x1;
                  goto LAB_00e8d8c8;
                }
                pcVar7 = "SetPlayState failed";
              }
              else {
                pcVar7 = "_bufferQueueItf Enqueue failed";
              }
            }
            else {
              pcVar7 = "_bufferQueueItf RegisterCallback failed";
            }
          }
          else {
            pcVar7 = "GetInterface SL_IID_ANDROIDSIMPLEBUFFERQUEUE failed";
          }
        }
        else {
          pcVar7 = "GetInterface SL_IID_VOLUME failed";
        }
      }
      else {
        pcVar7 = "GetInterface SL_IID_PLAY failed";
      }
    }
    else {
      pcVar7 = "Realize failed";
    }
  }
  else {
    pcVar7 = "CreateAudioPlayer failed";
  }
  __android_log_print(6,"PcmAudioService",pcVar7);
  uVar6 = 0;
LAB_00e8d8c8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

