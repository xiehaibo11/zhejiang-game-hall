
/* cocos2d::Node::unschedule(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::Node::unschedule(Node *this,basic_string *param_1)

{
  Scheduler::unschedule(*(Scheduler **)(this + 0x1e0),param_1,this);
  return;
}

