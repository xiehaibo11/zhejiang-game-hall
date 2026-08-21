
/* cocos2d::MenuItemFont::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::Ref*, void (cocos2d::Ref::*)(cocos2d::Ref*)) */

MenuItemFont * __thiscall
cocos2d::MenuItemFont::create
          (MenuItemFont *this,basic_string *param_1,Ref *param_2,_func_void_Ref_ptr *param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  MenuItemFont *this_01;
  Node *pNVar5;
  code *pcVar6;
  undefined **local_80;
  Ref *local_78;
  _func_void_Ref_ptr *p_Stack_70;
  basic_string *local_68;
  long *local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this_01 = operator_new(0x370,(nothrow_t *)&std::nothrow);
  if (this_01 != (MenuItemFont *)0x0) {
    MenuItemFont(this_01);
  }
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this_01 + 0x350);
  local_80 = &PTR_FUN_016d1d18;
  local_78 = param_2;
  p_Stack_70 = param_3;
  local_68 = param_1;
  local_60 = (long *)&local_80;
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      &DAT_0178f848) {
    uVar1 = DAT_0178f850;
    pcVar3 = DAT_0178f858;
    if ((DAT_0178f848 & 1) == 0) {
      uVar1 = (ulong)(DAT_0178f848 >> 1);
      pcVar3 = &DAT_0178f849;
    }
    local_60 = (long *)&local_80;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,pcVar3,uVar1);
  }
  iVar4 = DAT_01777958;
  *(int *)(this_01 + 0x348) = DAT_01777958;
  pNVar5 = (Node *)Label::createWithSystemFont((float)iVar4,this,this_00,&Size::ZERO,0,0);
  MenuItemLabel::initWithLabel((MenuItemLabel *)this_01,pNVar5,(function *)&local_80);
  if (&local_80 == (undefined ***)local_60) {
    pcVar6 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00f1e3e0;
    pcVar6 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar6)();
LAB_00f1e3e0:
  Ref::autorelease((Ref *)this_01);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return this_01;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

