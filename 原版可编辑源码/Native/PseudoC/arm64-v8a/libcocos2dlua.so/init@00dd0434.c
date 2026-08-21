
/* cocos2d::ui::RichElementText::init(int, cocos2d::Color3B const&, unsigned char,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, float, unsigned int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::Color3B const&,
   int, cocos2d::Color3B const&, cocos2d::Size const&, int, cocos2d::Color3B const&) */

undefined8 __thiscall
cocos2d::ui::RichElementText::init
          (RichElementText *this,int param_1,Color3B *param_2,uchar param_3,basic_string *param_4,
          basic_string *param_5,float param_6,uint param_7,basic_string *param_8,Color3B *param_9,
          int param_10,Color3B *param_11,Size *param_12,int param_13,Color3B *param_14)

{
  ulong uVar1;
  basic_string *pbVar2;
  RichElementText RVar3;
  undefined2 uVar4;
  
                    /* try { // try from 00dd044c to 00ed0503 has its CatchHandler @ 00dd044c
                       catch() { ... } // from try @ 00dd044c with catch @ 00dd044c
                       catch() { ... } // from try @ 00dd051c with catch @ 00dd044c
                       catch() { ... } // from try @ 00dd0e0c with catch @ 00dd044c
                       catch() { ... } // from try @ 00dd0ebc with catch @ 00dd044c */
  *(int *)(this + 0x28) = param_1;
  uVar4 = *(undefined2 *)param_2;
  this[0x2e] = *(RichElementText *)(param_2 + 2);
  *(undefined2 *)(this + 0x2c) = uVar4;
  this[0x2f] = (RichElementText)param_3;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x30) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_4) {
    uVar1 = *(ulong *)(param_4 + 8);
    pbVar2 = *(basic_string **)(param_4 + 0x10);
    if (((byte)*param_4 & 1) == 0) {
      pbVar2 = param_4 + 1;
      uVar1 = (ulong)((byte)*param_4 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x30),(char *)pbVar2,uVar1);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x48) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_5) {
    uVar1 = *(ulong *)(param_5 + 8);
    pbVar2 = *(basic_string **)(param_5 + 0x10);
    if (((byte)*param_5 & 1) == 0) {
      pbVar2 = param_5 + 1;
      uVar1 = (ulong)((byte)*param_5 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x48),(char *)pbVar2,uVar1);
  }
  *(float *)(this + 0x60) = param_6;
  *(uint *)(this + 100) = param_7;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x68) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_8) {
    uVar1 = *(ulong *)(param_8 + 8);
    pbVar2 = *(basic_string **)(param_8 + 0x10);
                    /* try { // try from 00dd0504 to 00ed051b has its CatchHandler @ 00dd0f2c */
    if (((byte)*param_8 & 1) == 0) {
      pbVar2 = param_8 + 1;
      uVar1 = (ulong)((byte)*param_8 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x68),(char *)pbVar2,uVar1);
  }
  RVar3 = *(RichElementText *)(param_9 + 2);
  uVar4 = *(undefined2 *)param_9;
                    /* try { // try from 00dd051c to 00ed0657 has its CatchHandler @ 00dd044c */
  *(int *)(this + 0x84) = param_10;
  this[0x82] = RVar3;
  *(undefined2 *)(this + 0x80) = uVar4;
  uVar4 = *(undefined2 *)param_11;
  this[0x8a] = *(RichElementText *)(param_11 + 2);
  *(undefined2 *)(this + 0x88) = uVar4;
  Size::operator=((Size *)(this + 0x8c),param_12);
  *(int *)(this + 0x94) = param_13;
  RVar3 = *(RichElementText *)(param_14 + 2);
  *(undefined2 *)(this + 0x98) = *(undefined2 *)param_14;
  this[0x9a] = RVar3;
  return 1;
}

