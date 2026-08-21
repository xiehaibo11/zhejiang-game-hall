
/* cocos2d::experimental::AudioDecoderSLES::queryAudioInfo() */

void __thiscall cocos2d::experimental::AudioDecoderSLES::queryAudioInfo(AudioDecoderSLES *this)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  uint local_4c;
  undefined1 auStack_48 [24];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (this[0x88] == (AudioDecoderSLES)0x0) {
    local_4c = 0xffffffff;
    iVar2 = (**(code **)(**(long **)(this + 0x108) + 0x10))(*(long **)(this + 0x108),&local_4c);
    if (iVar2 == 0) {
      if (local_4c != 0xffffffff) {
        *(float *)(this + 0x4c) = (float)local_4c / 1000.0;
      }
      iVar2 = (**(code **)(**(long **)(this + 0x110) + 0x20))
                        (*(long **)(this + 0x110),*(undefined4 *)(this + 0x94),0x20,auStack_48);
      if (iVar2 == 0) {
        *(undefined4 *)(this + 0x34) = local_30;
        iVar2 = (**(code **)(**(long **)(this + 0x110) + 0x20))
                          (*(long **)(this + 0x110),*(undefined4 *)(this + 0x90),0x20,auStack_48);
        if (iVar2 == 0) {
          *(undefined4 *)(this + 0x30) = local_30;
          iVar2 = (**(code **)(**(long **)(this + 0x110) + 0x20))
                            (*(long **)(this + 0x110),*(undefined4 *)(this + 0x98),0x20,auStack_48);
          if (iVar2 == 0) {
            *(undefined4 *)(this + 0x38) = local_30;
            iVar2 = (**(code **)(**(long **)(this + 0x110) + 0x20))
                              (*(long **)(this + 0x110),*(undefined4 *)(this + 0x9c),0x20,auStack_48
                              );
            if (iVar2 == 0) {
              *(undefined4 *)(this + 0x3c) = local_30;
              iVar2 = (**(code **)(**(long **)(this + 0x110) + 0x20))
                                (*(long **)(this + 0x110),*(undefined4 *)(this + 0xa0),0x20,
                                 auStack_48);
              if (iVar2 == 0) {
                *(undefined4 *)(this + 0x40) = local_30;
                iVar2 = (**(code **)(**(long **)(this + 0x110) + 0x20))
                                  (*(long **)(this + 0x110),*(undefined4 *)(this + 0xa4),0x20,
                                   auStack_48);
                if (iVar2 == 0) {
                  this[0x88] = (AudioDecoderSLES)0x1;
                  *(undefined4 *)(this + 0x44) = local_30;
                  goto LAB_00e948b0;
                }
                pcVar3 = "%s GetValue _endiannessKeyIndex failed";
              }
              else {
                pcVar3 = "%s GetValue _channelMaskKeyIndex failed";
              }
            }
            else {
              pcVar3 = "%s GetValue _containerSizeKeyIndex failed";
            }
          }
          else {
            pcVar3 = "%s GetValue _bitsPerSampleKeyIndex failed";
          }
        }
        else {
          pcVar3 = "%s GetValue _numChannelsKeyIndex failed";
        }
      }
      else {
        pcVar3 = "%s GetValue _sampleRateKeyIndex failed";
      }
      __android_log_print(6,"AudioDecoderSLES",pcVar3,"queryAudioInfo");
    }
    else {
      __android_log_print(6,"AudioDecoderSLES","decodeProgressCallback,GetDuration failed");
    }
  }
LAB_00e948b0:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

