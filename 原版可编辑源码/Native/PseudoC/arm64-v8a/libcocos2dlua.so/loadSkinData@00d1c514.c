
/* cocos2d::Bundle3D::loadSkinData(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::SkinData*) */

void __thiscall
cocos2d::Bundle3D::loadSkinData(Bundle3D *this,basic_string *param_1,SkinData *param_2)

{
  SkinData::resetData(param_2);
  if (this[0x130] != (Bundle3D)0x0) {
    loadSkinDataBinary(this,param_2);
    return;
  }
  loadSkinDataJson(this,param_2);
  return;
}

