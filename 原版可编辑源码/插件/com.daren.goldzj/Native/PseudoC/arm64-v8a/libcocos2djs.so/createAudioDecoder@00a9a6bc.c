
/* cocos2d::AudioDecoderProvider::createAudioDecoder(SLEngineItf_ const* const*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int, int, std::__ndk1::function<int (std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, long*, long*)> const&) */

AudioDecoderSLES *
cocos2d::AudioDecoderProvider::createAudioDecoder
          (SLEngineItf_ **param_1,basic_string *param_2,int param_3,int param_4,function *param_5)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  AudioDecoderSLES *this;
  ulong uVar4;
  byte local_70 [8];
  ulong local_68;
  int *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)FileUtils::getInstance();
                    /* catch() { ... } // from try @ 00a9a3ac with catch @ 00a9a70c */
  (**(code **)(*plVar3 + 0x100))(local_70,plVar3,param_2);
                    /* catch() { ... } // from try @ 00a9a394 with catch @ 00a9a71c */
  uVar4 = (ulong)(local_70[0] >> 1);
  if ((local_70[0] & 1) != 0) {
    uVar4 = local_68;
  }
  if (uVar4 == 4) {
    piVar1 = (int *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      piVar1 = local_60;
    }
    if (*piVar1 == 0x67676f2e) {
      this = operator_new(0x70);
      AudioDecoderOgg::AudioDecoderOgg((AudioDecoderOgg *)this);
    }
    else if (*piVar1 == 0x33706d2e) {
      this = operator_new(0x70);
      AudioDecoderMp3::AudioDecoderMp3((AudioDecoderMp3 *)this);
    }
    else {
      if (*piVar1 != 0x7661772e) goto LAB_00a9a77c;
      this = operator_new(0x70);
      AudioDecoderWav::AudioDecoderWav((AudioDecoderWav *)this);
    }
    uVar4 = (**(code **)(*(long *)this + 0x10))(this,param_2,param_4);
  }
  else {
LAB_00a9a77c:
    this = operator_new(0x180);
    AudioDecoderSLES::AudioDecoderSLES(this);
    uVar4 = AudioDecoderSLES::init(this,param_1,param_2,param_3,param_4,param_5);
  }
  if ((uVar4 & 1) == 0) {
    (**(code **)(*(long *)this + 8))(this);
    this = (AudioDecoderSLES *)0x0;
  }
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

