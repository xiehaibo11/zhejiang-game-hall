
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_145(void)

{
  DAT_017928d0 = 0;
  DAT_017928d8 = 0;
  DAT_017928e0 = 0x3f0000003dcccccd;
  DAT_017928e8 = 0x3f000000;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &cocos2d::TextureCache::s_etc1AlphaFileSuffix,"@alpha");
  __cxa_atexit(std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               ~basic_string,&cocos2d::TextureCache::s_etc1AlphaFileSuffix,&PTR_LOOP_016979c0);
  _DAT_01792910 = &cocos2d::VolatileTextureMgr::_textures;
  cocos2d::VolatileTextureMgr::_textures = &cocos2d::VolatileTextureMgr::_textures;
  DAT_01792918 = 0;
  __cxa_atexit(std::__ndk1::
               __list_imp<cocos2d::VolatileTexture*,std::__ndk1::allocator<cocos2d::VolatileTexture*>>
               ::~__list_imp,&cocos2d::VolatileTextureMgr::_textures,&PTR_LOOP_016979c0);
  return;
}

