
/* cocos2d::__Array::createWithContentsOfFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

Ref * cocos2d::__Array::createWithContentsOfFile(basic_string *param_1)

{
  Ref *this;
  
  this = (Ref *)createWithContentsOfFileThreadSafe(param_1);
  if (this != (Ref *)0x0) {
    Ref::autorelease(this);
  }
  return this;
}

