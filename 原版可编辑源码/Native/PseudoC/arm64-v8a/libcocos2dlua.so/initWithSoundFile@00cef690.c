
/* cocosbuilder::CCBSoundEffect::initWithSoundFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float, float, float) */

undefined8 __thiscall
cocosbuilder::CCBSoundEffect::initWithSoundFile
          (CCBSoundEffect *this,basic_string *param_1,float param_2,float param_3,float param_4)

{
  ulong uVar1;
  basic_string *pbVar2;
  
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x58) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x58),(char *)pbVar2,uVar1);
  }
  *(float *)(this + 0x70) = param_2;
  *(float *)(this + 0x74) = param_3;
  *(float *)(this + 0x78) = param_4;
  return 1;
}

