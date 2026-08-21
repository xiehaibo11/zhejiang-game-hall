
/* cocos2d::__String::__String(cocos2d::__String const&) */

void __thiscall cocos2d::__String::__String(__String *this,__String *param_1)

{
  __String *p_Var1;
  
                    /* catch() { ... } // from try @ 00ffdff0 with catch @ 00ffe10c
                       catch() { ... } // from try @ 00ffe0ec with catch @ 00ffe10c
                       try { // try from 00ffe10c to 010fe127 has its CatchHandler @ 00ffdf1c */
  Ref::Ref((Ref *)this);
  *(undefined ***)this = &PTR____String_01724cf8;
  *(undefined ***)(this + 0x28) = &PTR_clone_01724d30;
  p_Var1 = param_1 + 0x31;
  if (((byte)param_1[0x30] & 1) != 0) {
    p_Var1 = *(__String **)(param_1 + 0x40);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x30),(char *)p_Var1);
  return;
}

