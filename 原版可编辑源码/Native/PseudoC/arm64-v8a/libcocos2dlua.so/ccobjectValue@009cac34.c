
/* cocos2d::LuaValue::ccobjectValue(cocos2d::Ref*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::LuaValue::ccobjectValue(LuaValue *this,Ref *param_1,basic_string *param_2)

{
  Ref *pRVar1;
  
  pRVar1 = *(Ref **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pRVar1 = param_1 + 1;
  }
  ccobjectValue(this,pRVar1,(char *)param_2);
  return;
}

