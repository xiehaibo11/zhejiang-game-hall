
/* cocos2d::Node::getComponent(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::Node::getComponent(Node *this,basic_string *param_1)

{
  if (*(ComponentContainer **)(this + 0x210) != (ComponentContainer *)0x0) {
    ComponentContainer::get(*(ComponentContainer **)(this + 0x210),param_1);
    return;
  }
  return;
}

