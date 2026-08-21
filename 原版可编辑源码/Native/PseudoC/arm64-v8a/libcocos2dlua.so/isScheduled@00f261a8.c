
/* cocos2d::Node::isScheduled(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

void __thiscall cocos2d::Node::isScheduled(Node *this,basic_string *param_1)

{
  Scheduler::isScheduled(*(Scheduler **)(this + 0x1e0),param_1,this);
  return;
}

