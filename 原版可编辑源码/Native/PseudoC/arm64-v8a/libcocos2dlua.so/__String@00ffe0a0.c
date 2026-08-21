
/* cocos2d::__String::__String(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::__String::__String(__String *this,basic_string *param_1)

{
  Ref::Ref((Ref *)this);
                    /* try { // try from 00ffe0b8 to 010fe0eb has its CatchHandler @ 00ffdf1c */
  *(undefined ***)this = &PTR____String_01724cf8;
  *(undefined ***)(this + 0x28) = &PTR_clone_01724d30;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0x30),param_1);
  return;
}

