
/* cocos2d::MenuItemFont::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::function<void (cocos2d::Ref*)> const&) */

MenuItemFont * cocos2d::MenuItemFont::create(basic_string *param_1,function *param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  ulong uVar1;
  char *pcVar2;
  int iVar3;
  MenuItemFont *this_00;
  Node *pNVar4;
  
  this_00 = operator_new(0x370,(nothrow_t *)&std::nothrow);
  if (this_00 != (MenuItemFont *)0x0) {
    MenuItemFont(this_00);
  }
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this_00 + 0x350);
  if (this != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              &DAT_0178f848) {
    uVar1 = DAT_0178f850;
    pcVar2 = DAT_0178f858;
    if ((DAT_0178f848 & 1) == 0) {
      uVar1 = (ulong)(DAT_0178f848 >> 1);
      pcVar2 = &DAT_0178f849;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this,pcVar2,uVar1);
  }
  iVar3 = DAT_01777958;
  *(int *)(this_00 + 0x348) = DAT_01777958;
  pNVar4 = (Node *)Label::createWithSystemFont((float)iVar3,param_1,this,&Size::ZERO,0,0);
  MenuItemLabel::initWithLabel((MenuItemLabel *)this_00,pNVar4,param_2);
  Ref::autorelease((Ref *)this_00);
  return this_00;
}

