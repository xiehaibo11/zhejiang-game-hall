
/* cocos2d::__String::__String(char const*) */

void __thiscall cocos2d::__String::__String(__String *this,char *param_1)

{
  Ref::Ref((Ref *)this);
  *(undefined ***)this = &PTR____String_01724cf8;
  *(undefined ***)(this + 0x28) = &PTR_clone_01724d30;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x30),param_1);
  return;
}

