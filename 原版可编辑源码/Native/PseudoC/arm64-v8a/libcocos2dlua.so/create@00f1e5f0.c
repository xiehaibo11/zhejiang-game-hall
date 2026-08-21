
/* cocos2d::MenuItemFont::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

MenuItemFont * cocos2d::MenuItemFont::create(basic_string *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  MenuItemFont *this_00;
  Node *pNVar5;
  code *pcVar6;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this_00 = operator_new(0x370,(nothrow_t *)&std::nothrow);
  if (this_00 != (MenuItemFont *)0x0) {
    MenuItemFont(this_00);
  }
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this_00 + 0x350);
  local_50 = (long *)0x0;
  if (this != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              &DAT_0178f848) {
    uVar1 = DAT_0178f850;
    pcVar3 = DAT_0178f858;
    if ((DAT_0178f848 & 1) == 0) {
      uVar1 = (ulong)(DAT_0178f848 >> 1);
      pcVar3 = &DAT_0178f849;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this,pcVar3,uVar1);
  }
  iVar4 = DAT_01777958;
  *(int *)(this_00 + 0x348) = DAT_01777958;
  pNVar5 = (Node *)Label::createWithSystemFont((float)iVar4,param_1,this,&Size::ZERO,0,0);
  MenuItemLabel::initWithLabel((MenuItemLabel *)this_00,pNVar5,(function *)alStack_70);
  if (alStack_70 == local_50) {
    pcVar6 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00f1e6d4;
    pcVar6 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar6)();
LAB_00f1e6d4:
  Ref::autorelease((Ref *)this_00);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

