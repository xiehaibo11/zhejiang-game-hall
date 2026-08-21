
/* cocos2d::MenuItemImage::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, cocos2d::Ref*, void (cocos2d::Ref::*)(cocos2d::Ref*)) */

Node * __thiscall
cocos2d::MenuItemImage::create
          (MenuItemImage *this,basic_string *param_1,basic_string *param_2,basic_string *param_3,
          Ref *param_4,_func_void_Ref_ptr *param_5)

{
  long lVar1;
  Node *this_00;
  code *pcVar2;
  undefined **local_90;
  Ref *local_88;
  _func_void_Ref_ptr *p_Stack_80;
  basic_string *local_78;
  long *local_70;
  long local_58;
  
                    /* catch() { ... } // from try @ 00f20018 with catch @ 00f200e8 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this_00 = operator_new(0x350,(nothrow_t *)&std::nothrow);
  if (this_00 == (Node *)0x0) goto LAB_00f201b4;
  Node::Node(this_00);
  *(undefined2 *)(this_00 + 0x2f8) = 0;
  *(undefined8 *)(this_00 + 800) = 0;
  *(undefined8 *)(this_00 + 0x330) = 0;
  *(undefined8 *)(this_00 + 0x340) = 0;
  *(undefined8 *)(this_00 + 0x338) = 0;
  local_90 = &PTR_FUN_016d1d18;
  *(undefined ***)this_00 = &PTR__MenuItem_01705b38;
  local_88 = param_4;
  p_Stack_80 = param_5;
  local_78 = param_3;
  local_70 = (long *)&local_90;
  initWithNormalImage((MenuItemImage *)this_00,(basic_string *)this,param_1,param_2,
                      (function *)&local_90);
  if (&local_90 == (undefined ***)local_70) {
    pcVar2 = *(code **)(*local_70 + 0x20);
LAB_00f201a8:
    (*pcVar2)();
  }
  else if (local_70 != (long *)0x0) {
    pcVar2 = *(code **)(*local_70 + 0x28);
    goto LAB_00f201a8;
  }
  Ref::autorelease((Ref *)this_00);
LAB_00f201b4:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

