
/* cocos2d::Label::setBMFontFilePath(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::Vec2 const&, float) */

undefined4 __thiscall
cocos2d::Label::setBMFontFilePath(Label *this,basic_string *param_1,Vec2 *param_2,float param_3)

{
  ulong uVar1;
  basic_string *pbVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  
  lVar4 = FontAtlasCache::getFontAtlasFNT(param_1,param_2);
  if (lVar4 == 0) {
    reset(this);
    uVar6 = 0;
  }
  else {
    if ((ABS(param_3) < 1.1920929e-07) && (*(FontFNT **)(lVar4 + 0x80) != (FontFNT *)0x0)) {
      iVar3 = FontFNT::getOriginalFontSize(*(FontFNT **)(lVar4 + 0x80));
      lVar5 = Director::getInstance();
      *(float *)(this + 0x67c) = (float)iVar3 / *(float *)(lVar5 + 0x1a0);
    }
    if (0.0 < param_3) {
      *(float *)(this + 0x67c) = param_3;
    }
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (this + 0x348) !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
      uVar1 = *(ulong *)(param_1 + 8);
      pbVar2 = *(basic_string **)(param_1 + 0x10);
      if (((byte)*param_1 & 1) == 0) {
        pbVar2 = param_1 + 1;
        uVar1 = (ulong)((byte)*param_1 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x348),(char *)pbVar2,uVar1);
    }
    uVar6 = 1;
    *(undefined4 *)(this + 0x308) = 1;
    (**(code **)(*(long *)this + 0x5f0))(this,lVar4,0,0);
  }
  return uVar6;
}

