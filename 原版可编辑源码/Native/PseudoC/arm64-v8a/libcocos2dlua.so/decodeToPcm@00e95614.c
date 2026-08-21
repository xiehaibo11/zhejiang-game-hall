
/* cocos2d::experimental::AudioDecoderWav::decodeToPcm() */

undefined4 __thiscall cocos2d::experimental::AudioDecoderWav::decodeToPcm(AudioDecoderWav *this)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  AudioDecoderWav *pAVar5;
  long lVar6;
  void *__ptr;
  size_t __size;
  undefined4 uVar7;
  code *local_90;
  code *pcStack_88;
  code *local_80;
  code *pcStack_78;
  code *local_70;
  int local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar3 + 0x28))(&local_90,plVar3,this + 8);
  Data::operator=((Data *)(this + 0x58),(Data *)&local_90);
  Data::~Data((Data *)&local_90);
  uVar4 = Data::isNull((Data *)(this + 0x58));
  if ((uVar4 & 1) == 0) {
    local_90 = onWavOpen;
    pcStack_88 = AudioDecoder::fileRead;
    local_80 = onWavSeek;
    pcStack_78 = onWavClose;
    local_70 = AudioDecoder::fileTell;
    if (((byte)this[8] & 1) == 0) {
      pAVar5 = this + 9;
    }
    else {
      pAVar5 = *(AudioDecoderWav **)(this + 0x18);
    }
    lVar6 = sf_open_read(pAVar5,&local_68,&local_90,this);
    if (lVar6 != 0) {
      if (local_68 == 0) {
        uVar7 = 0;
      }
      else {
        __android_log_print(3,"AudioDecoderWav",
                            "wav info: frames: %d, samplerate: %d, channels: %d, format: %d",
                            local_68,local_64,local_60,local_5c);
        iVar2 = local_68;
        __size = (long)local_68 * (long)local_60 * 2;
        __ptr = malloc(__size);
        sf_readf_short(lVar6,__ptr,iVar2);
        std::__ndk1::vector<char,std::__ndk1::allocator<char>>::insert<unsigned_char*>
                  (*(vector<char,std::__ndk1::allocator<char>> **)(this + 0x20),
                   *(undefined8 *)(*(vector<char,std::__ndk1::allocator<char>> **)(this + 0x20) + 8)
                   ,__ptr,(void *)((long)__ptr + __size));
        *(int *)(this + 0x30) = local_60;
        uVar7 = 3;
        if (local_60 == 1) {
          uVar7 = 4;
        }
        *(undefined8 *)(this + 0x38) = 0x1000000010;
        *(undefined4 *)(this + 0x40) = uVar7;
        *(undefined4 *)(this + 0x44) = 2;
        *(int *)(this + 0x34) = local_64;
        *(int *)(this + 0x48) = local_68;
        *(float *)(this + 0x4c) = (float)local_68 / (float)local_64;
        free(__ptr);
        uVar7 = 1;
      }
      sf_close(lVar6);
      goto LAB_00e957b0;
    }
  }
  uVar7 = 0;
LAB_00e957b0:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

