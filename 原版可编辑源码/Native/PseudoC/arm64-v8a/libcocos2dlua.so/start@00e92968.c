
/* cocos2d::experimental::AudioDecoder::start() */

undefined8 __thiscall cocos2d::experimental::AudioDecoder::start(AudioDecoder *this)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  AudioDecoder *pAVar5;
  AudioDecoder *pAVar6;
  
  lVar1 = std::__ndk1::chrono::steady_clock::now();
  uVar2 = (**(code **)(*(long *)this + 0x18))(this);
  if ((uVar2 & 1) == 0) {
    if (((byte)this[8] & 1) == 0) {
      pAVar6 = this + 9;
    }
    else {
      pAVar6 = *(AudioDecoder **)(this + 0x18);
    }
    pcVar4 = "decodeToPcm (%s) failed!";
  }
  else {
    lVar3 = std::__ndk1::chrono::steady_clock::now();
    pAVar6 = this + 8;
    if (((byte)*pAVar6 & 1) == 0) {
      pAVar5 = this + 9;
    }
    else {
      pAVar5 = *(AudioDecoder **)(this + 0x18);
    }
    __android_log_print((double)((float)((lVar3 - lVar1) / 1000) / 1000.0),3,"AudioDecoder",
                        "Decoding (%s) to pcm data wasted %fms",pAVar5);
    resample(this);
    lVar1 = std::__ndk1::chrono::steady_clock::now();
    if (((byte)this[8] & 1) == 0) {
      pAVar5 = this + 9;
    }
    else {
      pAVar5 = *(AudioDecoder **)(this + 0x18);
    }
    __android_log_print((double)((float)((lVar1 - lVar3) / 1000) / 1000.0),3,"AudioDecoder",
                        "Resampling (%s) wasted %fms",pAVar5);
    uVar2 = interleave(this);
    if ((uVar2 & 1) != 0) {
      lVar3 = std::__ndk1::chrono::steady_clock::now();
      if (((byte)*pAVar6 & 1) == 0) {
        pAVar6 = this + 9;
      }
      else {
        pAVar6 = *(AudioDecoder **)(this + 0x18);
      }
      __android_log_print((double)((float)((lVar3 - lVar1) / 1000) / 1000.0),3,"AudioDecoder",
                          "Interleave (%s) wasted %fms",pAVar6);
      return 1;
    }
    if (((byte)*pAVar6 & 1) == 0) {
      pAVar6 = this + 9;
    }
    else {
      pAVar6 = *(AudioDecoder **)(this + 0x18);
    }
    pcVar4 = "interleave (%s) failed!";
  }
  __android_log_print(6,"AudioDecoder",pcVar4,pAVar6);
  return 0;
}

