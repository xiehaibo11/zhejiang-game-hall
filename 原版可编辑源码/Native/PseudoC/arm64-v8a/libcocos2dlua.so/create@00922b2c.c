
/* cocostudio::CustomGUIReader::create(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, int, int) */

Ref * cocostudio::CustomGUIReader::create(basic_string *param_1,int param_2,int param_3)

{
  Ref *this;
  
  this = operator_new(0x48,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    cocos2d::Ref::Ref(this);
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined ***)this = &PTR__CustomGUIReader_0169cd58;
  }
  init((CustomGUIReader *)this,param_1,param_2,param_3);
  return this;
}

