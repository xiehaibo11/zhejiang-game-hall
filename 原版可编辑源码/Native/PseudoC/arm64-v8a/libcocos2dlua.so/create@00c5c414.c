
/* cocostudio::ComRender::create(cocos2d::Node*, char const*) */

Component * cocostudio::ComRender::create(Node *param_1,char *param_2)

{
  Component *this;
  size_t sVar1;
  ulong uVar2;
  
  this = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this != (Component *)0x0) {
    cocos2d::Component::Component(this);
    *(undefined ***)this = &PTR__ComRender_016ca1b8;
    if (param_1 != (Node *)0x0) {
      *(Node **)(this + 0x50) = param_1;
      cocos2d::Ref::retain((Ref *)param_1);
    }
    sVar1 = strlen(param_2);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x30),param_2,sVar1);
    uVar2 = (**(code **)(*(long *)this + 0x10))(this);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Component *)0x0;
    }
    else {
      cocos2d::Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

