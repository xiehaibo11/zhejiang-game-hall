
/* cocos2d::MenuItemImage::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::function<void
   (cocos2d::Ref*)> const&) */

Node * cocos2d::MenuItemImage::create(basic_string *param_1,basic_string *param_2,function *param_3)

{
  long lVar1;
  Node *this;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"");
  this = operator_new(0x350,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    *(undefined2 *)(this + 0x2f8) = 0;
    *(undefined8 *)(this + 800) = 0;
    *(undefined8 *)(this + 0x330) = 0;
                    /* try { // try from 00f20018 to 0102001b has its CatchHandler @ 00f200e8 */
    *(undefined8 *)(this + 0x340) = 0;
                    /* try { // try from 00f2001c to 01020173 has its CatchHandler @ 00f1ff70 */
    *(undefined8 *)(this + 0x338) = 0;
    *(undefined ***)this = &PTR__MenuItem_01705b38;
    initWithNormalImage((MenuItemImage *)this,param_1,param_2,(basic_string *)local_60,param_3);
    Ref::autorelease((Ref *)this);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

