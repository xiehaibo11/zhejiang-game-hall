
/* cocos2d::MenuItemFont::initWithString(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::function<void
   (cocos2d::Ref*)> const&) */

undefined8 __thiscall
cocos2d::MenuItemFont::initWithString(MenuItemFont *this,basic_string *param_1,function *param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  ulong uVar1;
  char *pcVar2;
  int iVar3;
  Node *pNVar4;
  
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x350);
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      &DAT_0178f848) {
    uVar1 = DAT_0178f850;
    pcVar2 = DAT_0178f858;
    if ((DAT_0178f848 & 1) == 0) {
      uVar1 = (ulong)(DAT_0178f848 >> 1);
      pcVar2 = &DAT_0178f849;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,pcVar2,uVar1);
  }
  iVar3 = DAT_01777958;
  *(int *)(this + 0x348) = DAT_01777958;
  pNVar4 = (Node *)Label::createWithSystemFont((float)iVar3,param_1,this_00,&Size::ZERO,0,0);
  MenuItemLabel::initWithLabel((MenuItemLabel *)this,pNVar4,param_2);
  return 1;
}

