
/* cocos2d::StringUtils::StringUTF8::insert(unsigned long, cocos2d::StringUtils::StringUTF8 const&)
    */

undefined8 __thiscall
cocos2d::StringUtils::StringUTF8::insert(StringUTF8 *this,ulong param_1,StringUTF8 *param_2)

{
  if ((ulong)((*(long *)(this + 8) - *(long *)this >> 3) * -0x5555555555555555) < param_1) {
    return 0;
  }
  std::__ndk1::
  vector<cocos2d::StringUtils::StringUTF8::CharUTF8,std::__ndk1::allocator<cocos2d::StringUtils::StringUTF8::CharUTF8>>
  ::insert<std::__ndk1::__wrap_iter<cocos2d::StringUtils::StringUTF8::CharUTF8_const*>>
            ((vector<cocos2d::StringUtils::StringUTF8::CharUTF8,std::__ndk1::allocator<cocos2d::StringUtils::StringUTF8::CharUTF8>>
              *)this,*(long *)this + param_1 * 0x18,*(undefined8 *)param_2,
             *(undefined8 *)(param_2 + 8));
  return 1;
}

