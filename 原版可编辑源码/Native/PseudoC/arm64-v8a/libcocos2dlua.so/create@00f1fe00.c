
/* cocos2d::MenuItemImage::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::Ref*, void
   (cocos2d::Ref::*)(cocos2d::Ref*)) */

Node * __thiscall
cocos2d::MenuItemImage::create
          (MenuItemImage *this,basic_string *param_1,basic_string *param_2,Ref *param_3,
          _func_void_Ref_ptr *param_4)

{
  long lVar1;
  Node *this_00;
  undefined ***pppuVar2;
  code *pcVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  void *local_88;
  undefined **local_80;
  Ref *local_78;
  _func_void_Ref_ptr *p_Stack_70;
  basic_string *local_68;
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_98,"");
  local_80 = &PTR_FUN_016d1d18;
  local_78 = param_3;
  p_Stack_70 = param_4;
  local_68 = param_2;
  local_60 = &local_80;
  this_00 = operator_new(0x350,(nothrow_t *)&std::nothrow);
  if (this_00 == (Node *)0x0) {
    pppuVar2 = &local_80;
LAB_00f1fef0:
    pcVar3 = (code *)(*pppuVar2)[4];
  }
  else {
    Node::Node(this_00);
    *(undefined2 *)(this_00 + 0x2f8) = 0;
    *(undefined8 *)(this_00 + 800) = 0;
    *(undefined8 *)(this_00 + 0x330) = 0;
    *(undefined8 *)(this_00 + 0x340) = 0;
    *(undefined8 *)(this_00 + 0x338) = 0;
    *(undefined ***)this_00 = &PTR__MenuItem_01705b38;
    initWithNormalImage((MenuItemImage *)this_00,(basic_string *)this,param_1,
                        (basic_string *)local_98,(function *)&local_80);
    Ref::autorelease((Ref *)this_00);
    pppuVar2 = local_60;
    if (&local_80 == local_60) goto LAB_00f1fef0;
    if (local_60 == (undefined ***)0x0) goto LAB_00f1fefc;
    pcVar3 = (code *)(*local_60)[5];
  }
  (*pcVar3)();
LAB_00f1fefc:
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_00;
}

