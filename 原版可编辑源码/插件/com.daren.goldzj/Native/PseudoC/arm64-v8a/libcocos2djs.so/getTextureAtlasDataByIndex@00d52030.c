
/* dragonBones::CCFactory::getTextureAtlasDataByIndex(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int) const */

long __thiscall
dragonBones::CCFactory::getTextureAtlasDataByIndex
          (CCFactory *this,basic_string *param_1,int param_2)

{
  int iVar1;
  CCFactory *pCVar2;
  long *plVar3;
  long *plVar4;
  
  pCVar2 = (CCFactory *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>>>
                       *)(this + 0x28),param_1);
  if (this + 0x30 != pCVar2) {
    plVar4 = *(long **)(pCVar2 + 0x38);
    plVar3 = *(long **)(pCVar2 + 0x40);
    if (plVar4 != plVar3) {
      do {
        if (*(Texture2D **)(*plVar4 + 0x68) != (Texture2D *)0x0) {
          iVar1 = cocos2d::middleware::Texture2D::getRealTextureIndex
                            (*(Texture2D **)(*plVar4 + 0x68));
          if (iVar1 == param_2) {
            return *plVar4;
          }
          plVar3 = *(long **)(pCVar2 + 0x40);
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar3);
    }
  }
  return 0;
}

