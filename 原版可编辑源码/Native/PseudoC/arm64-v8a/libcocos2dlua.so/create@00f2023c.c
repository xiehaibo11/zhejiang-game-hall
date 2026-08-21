
/* cocos2d::MenuItemImage::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

Node * cocos2d::MenuItemImage::create
                 (basic_string *param_1,basic_string *param_2,basic_string *param_3)

{
  long lVar1;
  Node *this;
  code *pcVar2;
  long alStack_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x350,(nothrow_t *)&std::nothrow);
  if (this == (Node *)0x0) goto LAB_00f20300;
  Node::Node(this);
  *(undefined2 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined8 *)(this + 0x338) = 0;
  local_60 = (long *)0x0;
  *(undefined ***)this = &PTR__MenuItem_01705b38;
  initWithNormalImage((MenuItemImage *)this,param_1,param_2,param_3,(function *)alStack_80);
  if (alStack_80 == local_60) {
    pcVar2 = *(code **)(*local_60 + 0x20);
LAB_00f202f4:
    (*pcVar2)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar2 = *(code **)(*local_60 + 0x28);
    goto LAB_00f202f4;
  }
  Ref::autorelease((Ref *)this);
LAB_00f20300:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

