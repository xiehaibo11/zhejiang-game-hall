
/* cocos2d::__String::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

Ref * cocos2d::__String::create(basic_string *param_1)

{
  Ref *this;
  
  this = operator_new(0x48,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined ***)this = &PTR____String_01724cf8;
    *(undefined ***)(this + 0x28) = &PTR_clone_01724d30;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (this + 0x30),param_1);
  }
  Ref::autorelease(this);
  return this;
}

