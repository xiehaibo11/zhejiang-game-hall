
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::PcmAudioService::init(cocos2d::AudioMixerController*, int, int, int) */

void __thiscall
cocos2d::PcmAudioService::init
          (PcmAudioService *this,AudioMixerController *param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  char local_dc [4];
  undefined4 *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8 [2];
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined4 *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  int iStack_9c;
  int local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar1 = tpidr_el0;
  lVar8 = *(long *)(lVar1 + 0x28);
  local_8c = 3;
  local_98 = param_3 * 1000;
  if (param_2 < 2) {
    local_8c = 4;
  }
  *(AudioMixerController **)(this + 0x48) = param_1;
  *(int *)(this + 0x38) = param_2;
  *(int *)(this + 0x3c) = param_3;
  *(int *)(this + 0x40) = param_4;
  uVar3 = _SL_IID_VOLUME;
  uVar2 = _SL_IID_PLAY;
  uVar6 = _SL_IID_ANDROIDSIMPLEBUFFERQUEUE;
  local_a0 = 2;
  local_94 = 0x1000000010;
  uStack_88 = 2;
  local_b8 = &local_a8;
  local_a8 = 0x2800007bd;
  local_b0 = &local_a0;
  local_d8 = local_c8;
  local_c8[0] = 4;
  local_70 = _SL_IID_PLAY;
  uStack_68 = _SL_IID_VOLUME;
  local_60 = _SL_IID_ANDROIDSIMPLEBUFFERQUEUE;
  local_c0 = *(undefined8 *)(this + 0x10);
  uStack_d0 = 0;
  local_78 = 1;
  local_80 = 0x100000001;
  iStack_9c = param_2;
  iVar4 = (**(code **)(**(long **)(this + 8) + 0x10))
                    (*(long **)(this + 8),this + 0x18,&local_b8,&local_d8,3,&local_70,&local_80);
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
              if (DAT_01d38df8 == DAT_01d38e00) {
                local_dc[0] = '\0';
                uVar9 = (long)*(int *)(this + 0x40) * (long)*(int *)(this + 0x38);
                uVar10 = DAT_01d38e00 - DAT_01d38df8;
                if (uVar10 < uVar9) {
                  std::__ndk1::vector<char,std::__ndk1::allocator<char>>::__append
                            ((vector<char,std::__ndk1::allocator<char>> *)&DAT_01d38df8,
                             uVar9 - uVar10,local_dc);
                }
                else if (uVar10 != uVar9) {
                  DAT_01d38e00 = DAT_01d38df8 + uVar9;
                }
              }
              puVar5 = *(undefined8 **)(this + 0x30);
              iVar4 = (**(code **)*puVar5)
                                (puVar5,DAT_01d38df8,(int)DAT_01d38e00 - (int)DAT_01d38df8);
              if (iVar4 == 0) {
                puVar5 = *(undefined8 **)(this + 0x20);
                iVar4 = (**(code **)*puVar5)(puVar5,3);
                if (iVar4 == 0) {
                  uVar6 = 1;
                  goto LAB_00a97800;
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
LAB_00a97800:
  if (*(long *)(lVar1 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

