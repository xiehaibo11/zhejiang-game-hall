
/* cocos2d::ActionTween::initWithDuration(float, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float, float) */

undefined8 __thiscall
cocos2d::ActionTween::initWithDuration
          (ActionTween *this,float param_1,basic_string *param_2,float param_3,float param_4)

{
  basic_string *pbVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ActionInterval::initWithDuration((ActionInterval *)this,param_1);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
                    /* try { // try from 00eeb89c to 00feb98b has its CatchHandler @ 00eeb89c
                       catch() { ... } // from try @ 00eeb89c with catch @ 00eeb89c
                       catch() { ... } // from try @ 00eeb9b8 with catch @ 00eeb89c */
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (this + 0x58) !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2) {
      uVar2 = *(ulong *)(param_2 + 8);
      pbVar1 = *(basic_string **)(param_2 + 0x10);
      if (((byte)*param_2 & 1) == 0) {
        pbVar1 = param_2 + 1;
        uVar2 = (ulong)((byte)*param_2 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x58),(char *)pbVar1,uVar2);
    }
    uVar3 = 1;
    *(float *)(this + 0x70) = param_3;
    *(float *)(this + 0x74) = param_4;
  }
  return uVar3;
}

