
/* cocos2d::Technique::create(cocos2d::Material*) */

RenderState * cocos2d::Technique::create(Material *param_1)

{
  RenderState *this;
  
  this = operator_new(0x90,(nothrow_t *)&std::nothrow);
  if (this != (RenderState *)0x0) {
    RenderState::RenderState(this);
    *(undefined ***)this = &PTR__Technique_01724360;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x60),"");
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(Material **)(this + 0x38) = param_1;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

