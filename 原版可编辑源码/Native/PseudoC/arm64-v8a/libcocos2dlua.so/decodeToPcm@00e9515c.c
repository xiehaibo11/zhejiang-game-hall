
/* cocos2d::experimental::AudioDecoderOgg::decodeToPcm() */

bool __thiscall cocos2d::experimental::AudioDecoderOgg::decodeToPcm(AudioDecoderOgg *this)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  void *__s;
  long lVar7;
  AudioDecoderOgg *pAVar8;
  undefined4 uVar9;
  bool bVar10;
  long lVar11;
  undefined4 local_18c;
  code *local_188;
  code *pcStack_180;
  code *local_178;
  code *pcStack_170;
  Data aDStack_168 [256];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar4 + 0x28))(aDStack_168,plVar4,this + 8);
  Data::operator=((Data *)(this + 0x58),aDStack_168);
  Data::~Data(aDStack_168);
  uVar5 = Data::isNull((Data *)(this + 0x58));
  if ((uVar5 & 1) == 0) {
    *(undefined8 *)(this + 0x68) = 0;
    local_188 = AudioDecoder::fileRead;
    pcStack_180 = fseek64Wrap;
    local_178 = AudioDecoder::fileClose;
    pcStack_170 = AudioDecoder::fileTell;
    iVar2 = ov_open_callbacks(this,aDStack_168,0,0,&local_188);
    if (iVar2 == 0) {
      lVar6 = ov_info(aDStack_168,0xffffffff);
      uVar3 = ov_pcm_total(aDStack_168,0xffffffff);
      uVar5 = (ulong)(uVar3 * *(int *)(lVar6 + 4) * 2);
      __s = malloc(uVar5);
      memset(__s,0,uVar5);
      lVar11 = 0;
      local_18c = 0;
      do {
        lVar7 = ov_read(aDStack_168,(long)__s + lVar11,0x1000,&local_18c);
        lVar11 = lVar7 + lVar11;
      } while (0 < lVar7);
      bVar10 = 0 < lVar11;
      if (lVar11 < 1) {
        __android_log_print(6,"AudioDecoderOgg","ov_read returns 0 byte!");
      }
      else {
        std::__ndk1::vector<char,std::__ndk1::allocator<char>>::insert<char*>
                  (*(vector<char,std::__ndk1::allocator<char>> **)(this + 0x20),
                   *(undefined8 *)(*(vector<char,std::__ndk1::allocator<char>> **)(this + 0x20) + 8)
                   ,__s,(long)__s + uVar5);
        iVar2 = *(int *)(lVar6 + 4);
        *(int *)(this + 0x30) = iVar2;
        lVar11 = *(long *)(lVar6 + 8);
        *(undefined8 *)(this + 0x38) = 0x1000000010;
        uVar9 = 3;
        if (iVar2 == 1) {
          uVar9 = 4;
        }
        *(undefined4 *)(this + 0x40) = uVar9;
        *(undefined4 *)(this + 0x44) = 2;
        *(uint *)(this + 0x48) = uVar3;
        *(int *)(this + 0x34) = (int)lVar11;
        *(float *)(this + 0x4c) = (float)uVar3 / (float)lVar11;
      }
      ov_clear(aDStack_168);
      free(__s);
    }
    else {
      if (((byte)this[8] & 1) == 0) {
        pAVar8 = this + 9;
      }
      else {
        pAVar8 = *(AudioDecoderOgg **)(this + 0x18);
      }
      __android_log_print(6,"AudioDecoderOgg",
                          "Open file error, file: %s, ov_open_callbacks return %d",pAVar8,iVar2);
      bVar10 = false;
    }
  }
  else {
    bVar10 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return bVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

