
/* cocos2d::ui::TextAtlas::setProperty(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int, int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::ui::TextAtlas::setProperty
          (TextAtlas *this,basic_string *param_1,basic_string *param_2,int param_3,int param_4,
          basic_string *param_5)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  ulong uVar1;
  basic_string *pbVar2;
  TextAtlas *pTVar3;
  
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x4f8) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x4f8),(char *)pbVar2,uVar1);
  }
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x510);
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2) {
    uVar1 = *(ulong *)(param_2 + 8);
    pbVar2 = *(basic_string **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
      uVar1 = (ulong)((byte)*param_2 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar2,uVar1);
  }
  *(int *)(this + 0x528) = param_3;
  *(int *)(this + 0x52c) = param_4;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x530) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_5) {
    uVar1 = *(ulong *)(param_5 + 8);
    pbVar2 = *(basic_string **)(param_5 + 0x10);
    if (((byte)*param_5 & 1) == 0) {
      pbVar2 = param_5 + 1;
      uVar1 = (ulong)((byte)*param_5 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x530),(char *)pbVar2,uVar1);
    param_3 = *(int *)(this + 0x528);
    param_4 = *(int *)(this + 0x52c);
  }
  if (((byte)this[0x530] & 1) == 0) {
    pTVar3 = this + 0x531;
  }
  else {
    pTVar3 = *(TextAtlas **)(this + 0x540);
  }
  (**(code **)(**(long **)(this + 0x4f0) + 0x548))
            (*(long **)(this + 0x4f0),this_00,param_3,param_4,(long)(char)*pTVar3);
  (**(code **)(**(long **)(this + 0x4f0) + 0x588))(*(long **)(this + 0x4f0),param_1);
  (**(code **)(**(long **)(this + 0x4f0) + 0x168))();
  Widget::updateContentSizeWithTextureSize((Size *)this);
  this[0x548] = (TextAtlas)0x1;
  return;
}

