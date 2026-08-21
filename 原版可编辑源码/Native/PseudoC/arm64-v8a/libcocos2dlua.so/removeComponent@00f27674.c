
/* cocos2d::Node::removeComponent(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::Node::removeComponent(Node *this,basic_string *param_1)

{
  if (*(ComponentContainer **)(this + 0x210) != (ComponentContainer *)0x0) {
    ComponentContainer::remove(*(ComponentContainer **)(this + 0x210),param_1);
    return;
  }
  return;
}

