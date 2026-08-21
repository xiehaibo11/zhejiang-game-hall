
/* cocos2d::Node::schedule(std::__ndk1::function<void (float)> const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall cocos2d::Node::schedule(Node *this,function *param_1,basic_string *param_2)

{
  Scheduler::schedule(*(Scheduler **)(this + 0x1e0),param_1,this,0.0,this[0x1f8] == (Node)0x0,
                      param_2);
  return;
}

