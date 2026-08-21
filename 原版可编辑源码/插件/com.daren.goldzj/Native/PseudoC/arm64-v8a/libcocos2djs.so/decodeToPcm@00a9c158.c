
/* cocos2d::AudioDecoderOgg::decodeToPcm() */

bool __thiscall cocos2d::AudioDecoderOgg::decodeToPcm(AudioDecoderOgg *this)

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
  long lVar10;
  bool bVar11;
  long lVar12;
  undefined4 local_194;
  code *local_190;
  code *pcStack_188;
  code *local_180;
  code *pcStack_178;
  Data aDStack_170 [272];
  
  lVar1 = tpidr_el0;
  lVar10 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar4 + 0x20))(aDStack_170,plVar4,this + 8);
  Data::operator=((Data *)(this + 0x58),aDStack_170);
  Data::~Data(aDStack_170);
  uVar5 = Data::isNull((Data *)(this + 0x58));
  if ((uVar5 & 1) == 0) {
    *(undefined8 *)(this + 0x68) = 0;
    local_190 = AudioDecoder::fileRead;
    pcStack_188 = fseek64Wrap;
    local_180 = AudioDecoder::fileClose;
    pcStack_178 = AudioDecoder::fileTell;
    iVar2 = ov_open_callbacks(this,aDStack_170,0,0,&local_190);
    if (iVar2 == 0) {
      lVar6 = ov_info(aDStack_170,0xffffffff);
      uVar3 = ov_pcm_total(aDStack_170,0xffffffff);
      uVar5 = (ulong)(uVar3 * *(int *)(lVar6 + 4) * 2);
      __s = malloc(uVar5);
      memset(__s,0,uVar5);
      lVar12 = 0;
      local_194 = 0;
      do {
        lVar7 = ov_read(aDStack_170,(long)__s + lVar12,0x1000,&local_194);
        lVar12 = lVar7 + lVar12;
      } while (0 < lVar7);
      bVar11 = 0 < lVar12;
      if (lVar12 < 1) {
        __android_log_print(6,"AudioDecoderOgg","ov_read returns 0 byte!");
      }
      else {
        std::__ndk1::vector<char,std::__ndk1::allocator<char>>::insert<char*>
                  (*(vector<char,std::__ndk1::allocator<char>> **)(this + 0x20),
                   *(undefined8 *)(*(vector<char,std::__ndk1::allocator<char>> **)(this + 0x20) + 8)
                   ,__s,(long)__s + uVar5);
        iVar2 = *(int *)(lVar6 + 4);
        *(int *)(this + 0x30) = iVar2;
        lVar12 = *(long *)(lVar6 + 8);
        uVar9 = 3;
        *(undefined8 *)(this + 0x38) = 0x1000000010;
        if (iVar2 == 1) {
          uVar9 = 4;
        }
        *(undefined4 *)(this + 0x40) = uVar9;
        *(undefined4 *)(this + 0x44) = 2;
        *(uint *)(this + 0x48) = uVar3;
        *(int *)(this + 0x34) = (int)lVar12;
        *(float *)(this + 0x4c) = (float)uVar3 / (float)lVar12;
      }
      ov_clear(aDStack_170);
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
      bVar11 = false;
    }
  }
  else {
    bVar11 = false;
  }
  if (*(long *)(lVar1 + 0x28) == lVar10) {
    return bVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

