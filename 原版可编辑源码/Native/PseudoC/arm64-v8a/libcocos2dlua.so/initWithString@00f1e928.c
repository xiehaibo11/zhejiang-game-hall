
/* cocos2d::MenuItemFont::initWithString(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::Ref*, void
   (cocos2d::Ref::*)(cocos2d::Ref*)) */

undefined8
cocos2d::MenuItemFont::initWithString
          (basic_string *param_1,Ref *param_2,_func_void_Ref_ptr *param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  undefined ***pppuVar5;
  Node *pNVar6;
  code *pcVar7;
  undefined **local_70 [3];
  _func_void_Ref_ptr *p_Stack_58;
  long *local_50;
  long local_38;
  
  local_50 = (long *)local_70;
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (param_1 + 0x350);
  local_70[0] = &PTR_FUN_016d1d18;
  p_Stack_58 = param_3;
  pppuVar5 = local_70;
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
    pppuVar5 = (undefined ***)local_50;
  }
  local_50 = (long *)pppuVar5;
  iVar4 = DAT_01777958;
  *(int *)(param_1 + 0x348) = DAT_01777958;
  pNVar6 = (Node *)Label::createWithSystemFont((float)iVar4,param_2,this,&Size::ZERO,0,0);
  MenuItemLabel::initWithLabel((MenuItemLabel *)param_1,pNVar6,(function *)local_70);
  if (local_70 == (undefined ***)local_50) {
    pcVar7 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00f1ea08;
    pcVar7 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar7)();
LAB_00f1ea08:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

