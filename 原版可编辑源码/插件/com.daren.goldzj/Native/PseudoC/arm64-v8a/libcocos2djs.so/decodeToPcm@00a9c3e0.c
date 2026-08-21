
/* cocos2d::AudioDecoderMp3::decodeToPcm() */

void __thiscall cocos2d::AudioDecoderMp3::decodeToPcm(AudioDecoderMp3 *this)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  AudioDecoderMp3 *pAVar7;
  undefined4 uVar8;
  byte local_80 [16];
  void *local_70;
  int local_64;
  int local_60 [2];
  code *pcStack_58;
  code *local_50;
  code *pcStack_48;
  code *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar4 + 0x20))(&pcStack_58,plVar4,this + 8);
  Data::operator=((Data *)(this + 0x58),(Data *)&pcStack_58);
  Data::~Data((Data *)&pcStack_58);
  uVar5 = Data::isNull((Data *)(this + 0x58));
  if ((uVar5 & 1) == 0) {
    local_60[0] = 0;
    local_60[1] = 0;
    pcStack_58 = AudioDecoder::fileRead;
    local_64 = 0;
    local_50 = AudioDecoder::fileSeek;
    pcStack_48 = AudioDecoder::fileClose;
    local_40 = AudioDecoder::fileTell;
    iVar3 = decodeMP3((mp3_callbacks *)&pcStack_58,this,*(vector **)(this + 0x20),local_60 + 1,
                      local_60,&local_64);
    if ((((iVar3 == 0) && (0 < local_60[1])) && (0 < local_60[0])) && (0 < local_64)) {
      uVar8 = 3;
      *(undefined8 *)(this + 0x38) = 0x1000000010;
      if (local_60[1] == 1) {
        uVar8 = 4;
      }
      *(undefined4 *)(this + 0x40) = uVar8;
      *(int *)(this + 0x30) = local_60[1];
      *(int *)(this + 0x34) = local_60[0];
      *(undefined4 *)(this + 0x44) = 2;
      *(int *)(this + 0x48) = local_64;
      *(float *)(this + 0x4c) = (float)local_64 / (float)local_60[0];
      PcmData::toString();
      pvVar1 = (void *)((ulong)local_80 | 1);
      if ((local_80[0] & 1) != 0) {
        pvVar1 = local_70;
      }
      __android_log_print(4,"AudioDecoderMp3","Original audio info: %s, total size: %d",pvVar1,
                          (*(int **)(this + 0x20))[2] - **(int **)(this + 0x20));
      if ((local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
      uVar6 = 1;
      goto LAB_00a9c580;
    }
    if (((byte)this[8] & 1) == 0) {
      pAVar7 = this + 9;
    }
    else {
      pAVar7 = *(AudioDecoderMp3 **)(this + 0x18);
    }
    __android_log_print(6,"AudioDecoderMp3",
                        "Decode MP3 (%s) failed, channels: %d, rate: %d, frames: %d",pAVar7);
  }
  uVar6 = 0;
LAB_00a9c580:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

