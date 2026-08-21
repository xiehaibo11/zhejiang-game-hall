
/* cocostudio::ComRender::ComRender(cocos2d::Node*, char const*) */

void __thiscall cocostudio::ComRender::ComRender(ComRender *this,Node *param_1,char *param_2)

{
  size_t sVar1;
  
  cocos2d::Component::Component((Component *)this);
  *(undefined ***)this = &PTR__ComRender_016ca1b8;
  if (param_1 != (Node *)0x0) {
    *(Node **)(this + 0x50) = param_1;
    cocos2d::Ref::retain((Ref *)param_1);
  }
  sVar1 = strlen(param_2);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x30),param_2,sVar1);
  return;
}

