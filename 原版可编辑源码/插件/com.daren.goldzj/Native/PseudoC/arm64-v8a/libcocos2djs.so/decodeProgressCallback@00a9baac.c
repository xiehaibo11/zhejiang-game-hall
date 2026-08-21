
/* cocos2d::AudioDecoderSLES::decodeProgressCallback(SLPlayItf_ const* const*, unsigned int) */

void __thiscall
cocos2d::AudioDecoderSLES::decodeProgressCallback
          (AudioDecoderSLES *this,SLPlayItf_ **param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  if ((param_2 & 1) == 0) {
    return;
  }
  if (this[0x170] == (AudioDecoderSLES)0x0) {
    queryAudioInfo(this);
                    /* try { // try from 00a9bad8 to 00b9badf has its CatchHandler @ 00a9bb3c */
                    /* try { // try from 00a9bae0 to 00b9bb4f has its CatchHandler @ 00a9ba8c */
    std::__ndk1::vector<char,std::__ndk1::allocator<char>>::insert<signed_char*>
              (*(vector<char,std::__ndk1::allocator<char>> **)(this + 0x20),
               *(undefined8 *)(*(vector<char,std::__ndk1::allocator<char>> **)(this + 0x20) + 8),
               *(long *)(this + 0x128),*(long *)(this + 0x128) + (long)DAT_01d38e38);
    lVar2 = (long)DAT_01d38e38;
    lVar1 = *(long *)(this + 0x128) + lVar2;
    *(long *)(this + 0x128) = lVar1;
    std::__ndk1::vector<char,std::__ndk1::allocator<char>>::insert<signed_char*>
              (*(vector<char,std::__ndk1::allocator<char>> **)(this + 0x20),
               *(undefined8 *)(*(vector<char,std::__ndk1::allocator<char>> **)(this + 0x20) + 8),
               lVar1,lVar1 + lVar2);
    lVar2 = (long)DAT_01d38e38;
    lVar1 = *(long *)(this + 0x128) + lVar2;
    *(long *)(this + 0x128) = lVar1;
    std::__ndk1::vector<char,std::__ndk1::allocator<char>>::insert<signed_char*>
              (*(vector<char,std::__ndk1::allocator<char>> **)(this + 0x20),
               *(undefined8 *)(*(vector<char,std::__ndk1::allocator<char>> **)(this + 0x20) + 8),
               lVar1,lVar1 + lVar2);
    lVar2 = (long)DAT_01d38e38;
                    /* catch() { ... } // from try @ 00a9bad8 with catch @ 00a9bb3c */
    lVar1 = *(long *)(this + 0x128) + lVar2;
    *(long *)(this + 0x128) = lVar1;
    std::__ndk1::vector<char,std::__ndk1::allocator<char>>::insert<signed_char*>
              (*(vector<char,std::__ndk1::allocator<char>> **)(this + 0x20),
               *(undefined8 *)(*(vector<char,std::__ndk1::allocator<char>> **)(this + 0x20) + 8),
               lVar1,lVar1 + lVar2);
    *(long *)(this + 0x128) = *(long *)(this + 0x128) + (long)DAT_01d38e38;
  }
  std::__ndk1::mutex::lock((mutex *)(this + 0xac));
  this[0xa8] = (AudioDecoderSLES)0x1;
  std::__ndk1::condition_variable::notify_one((condition_variable *)(this + 0xd4));
  std::__ndk1::mutex::unlock((mutex *)(this + 0xac));
  return;
}

