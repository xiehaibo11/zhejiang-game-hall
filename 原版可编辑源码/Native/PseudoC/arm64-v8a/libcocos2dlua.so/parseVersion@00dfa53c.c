
/* cocos2d::extension::Manifest::parseVersion(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::extension::Manifest::parseVersion(Manifest *this,basic_string *param_1)

{
  loadJson(this,param_1);
  if (*(short *)(this + 0x156) == 3) {
    loadVersion(this,(GenericDocument *)(this + 0x140));
    return;
  }
  return;
}

