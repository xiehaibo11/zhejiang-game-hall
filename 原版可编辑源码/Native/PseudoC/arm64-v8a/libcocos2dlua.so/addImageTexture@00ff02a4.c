
/* cocos2d::VolatileTextureMgr::addImageTexture(cocos2d::Texture2D*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::VolatileTextureMgr::addImageTexture(Texture2D *param_1,basic_string *param_2)

{
  ulong uVar1;
  basic_string *pbVar2;
  undefined4 uVar3;
  long lVar4;
  
  if (_isReloading == '\0') {
    lVar4 = findVolotileTexture(param_1);
    *(undefined4 *)(lVar4 + 0x10) = 1;
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (lVar4 + 0x30) !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2) {
      uVar1 = *(ulong *)(param_2 + 8);
      pbVar2 = *(basic_string **)(param_2 + 0x10);
      if (((byte)*param_2 & 1) == 0) {
        pbVar2 = param_2 + 1;
        uVar1 = (ulong)((byte)*param_2 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (lVar4 + 0x30),(char *)pbVar2,uVar1);
    }
    uVar3 = Texture2D::getPixelFormat(param_1);
    *(undefined4 *)(lVar4 + 0x2c) = uVar3;
  }
  return;
}

