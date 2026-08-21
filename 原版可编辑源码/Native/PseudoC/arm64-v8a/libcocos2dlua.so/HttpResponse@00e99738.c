
/* cocos2d::network::HttpResponse::HttpResponse(cocos2d::network::HttpRequest*) */

void __thiscall
cocos2d::network::HttpResponse::HttpResponse(HttpResponse *this,HttpRequest *param_1)

{
  Ref::Ref((Ref *)this);
  *(HttpRequest **)(this + 0x28) = param_1;
  this[0x30] = (HttpResponse)0x0;
  *(undefined ***)this = &PTR__HttpResponse_016f4628;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x88),"");
  if (*(Ref **)(this + 0x28) != (Ref *)0x0) {
    Ref::retain(*(Ref **)(this + 0x28));
  }
  return;
}

