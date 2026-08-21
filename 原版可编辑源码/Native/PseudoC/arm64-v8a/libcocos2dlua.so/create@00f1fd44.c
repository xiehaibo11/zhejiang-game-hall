
/* cocos2d::MenuItemImage::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::function<void (cocos2d::Ref*)> const&) */

Node * cocos2d::MenuItemImage::create
                 (basic_string *param_1,basic_string *param_2,basic_string *param_3,
                 function *param_4)

{
  Node *this;
  
  this = operator_new(0x350,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    *(undefined2 *)(this + 0x2f8) = 0;
    *(undefined8 *)(this + 800) = 0;
    *(undefined8 *)(this + 0x330) = 0;
    *(undefined8 *)(this + 0x340) = 0;
    *(undefined8 *)(this + 0x338) = 0;
    *(undefined ***)this = &PTR__MenuItem_01705b38;
    initWithNormalImage((MenuItemImage *)this,param_1,param_2,param_3,param_4);
    Ref::autorelease((Ref *)this);
  }
  return this;
}

