
/* cocos2d::MenuItemImage::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

Node * cocos2d::MenuItemImage::create(basic_string *param_1,basic_string *param_2)

{
  long lVar1;
  Node *this;
  code *pcVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
                    /* catch() { ... } // from try @ 00f1fc0c with catch @ 00f1fbd4 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_88,"");
                    /* try { // try from 00f1fc04 to 0101fc0b has its CatchHandler @ 00f1fcb0 */
  local_50 = (long *)0x0;
                    /* try { // try from 00f1fc0c to 0101fccb has its CatchHandler @ 00f1fbd4 */
  this = operator_new(0x350,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    *(undefined2 *)(this + 0x2f8) = 0;
    *(undefined8 *)(this + 800) = 0;
    *(undefined8 *)(this + 0x330) = 0;
    *(undefined8 *)(this + 0x340) = 0;
    *(undefined8 *)(this + 0x338) = 0;
    *(undefined ***)this = &PTR__MenuItem_01705b38;
    initWithNormalImage((MenuItemImage *)this,param_1,param_2,(basic_string *)local_88,
                        (function *)alStack_70);
    Ref::autorelease((Ref *)this);
    if (alStack_70 == local_50) {
      pcVar2 = *(code **)(*local_50 + 0x20);
    }
    else {
      if (local_50 == (long *)0x0) goto LAB_00f1fc98;
      pcVar2 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar2)();
  }
LAB_00f1fc98:
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
                    /* catch() { ... } // from try @ 00f1fc04 with catch @ 00f1fcb0 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

