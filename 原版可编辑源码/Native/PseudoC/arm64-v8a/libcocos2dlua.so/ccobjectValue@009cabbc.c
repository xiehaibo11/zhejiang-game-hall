
/* cocos2d::LuaValue::ccobjectValue(cocos2d::Ref*, char const*) */

void __thiscall cocos2d::LuaValue::ccobjectValue(LuaValue *this,Ref *param_1,char *param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  undefined8 *in_x8;
  
  in_x8[2] = 0;
  *(undefined4 *)(in_x8 + 1) = 6;
  *in_x8 = this;
  Ref::retain((Ref *)this);
  this_00 = operator_new(0x18);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(this_00,(char *)param_1);
  in_x8[2] = this_00;
  return;
}

