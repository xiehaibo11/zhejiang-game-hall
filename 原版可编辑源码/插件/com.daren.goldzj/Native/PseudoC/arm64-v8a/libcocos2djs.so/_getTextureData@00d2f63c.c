
/* dragonBones::BaseFactory::_getTextureData(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) const */

long __thiscall
dragonBones::BaseFactory::_getTextureData
          (BaseFactory *this,basic_string *param_1,basic_string *param_2)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  BaseFactory *pBVar4;
  long lVar5;
  BaseFactory *pBVar6;
  long lVar7;
  
  pBVar4 = (BaseFactory *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>>>
                       *)(this + 0x28),param_1);
  if (this + 0x30 != pBVar4) {
    plVar2 = *(long **)(pBVar4 + 0x40);
    for (plVar1 = *(long **)(pBVar4 + 0x38); plVar1 != plVar2; plVar1 = plVar1 + 1) {
      lVar7 = *plVar1;
      lVar5 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>>>
                          *)(lVar7 + 0x50),param_2);
      if ((lVar7 + 0x58 != lVar5) && (*(long *)(lVar5 + 0x38) != 0)) {
        return *(long *)(lVar5 + 0x38);
      }
    }
  }
  if (this[8] != (BaseFactory)0x0) {
    pBVar4 = *(BaseFactory **)(this + 0x28);
    while (pBVar4 != this + 0x30) {
      plVar2 = *(long **)(pBVar4 + 0x40);
      for (plVar1 = *(long **)(pBVar4 + 0x38); plVar1 != plVar2; plVar1 = plVar1 + 1) {
        lVar5 = *plVar1;
        if (((*(char *)(lVar5 + 0xd) != '\0') &&
            (lVar7 = std::__ndk1::
                     __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>>>
                     ::
                     find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                               ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>>>
                                 *)(lVar5 + 0x50),param_2), lVar5 + 0x58 != lVar7)) &&
           (*(long *)(lVar7 + 0x38) != 0)) {
          return *(long *)(lVar7 + 0x38);
        }
      }
      pBVar6 = *(BaseFactory **)(pBVar4 + 8);
      if (*(BaseFactory **)(pBVar4 + 8) == (BaseFactory *)0x0) {
        pBVar6 = pBVar4 + 0x10;
        bVar3 = *(BaseFactory **)*(BaseFactory **)pBVar6 != pBVar4;
        pBVar4 = *(BaseFactory **)pBVar6;
        if (bVar3) {
          do {
            lVar5 = *(long *)pBVar6;
            pBVar6 = (BaseFactory *)(lVar5 + 0x10);
            pBVar4 = *(BaseFactory **)pBVar6;
          } while (*(long *)pBVar4 != lVar5);
        }
      }
      else {
        do {
          pBVar4 = pBVar6;
          pBVar6 = *(BaseFactory **)pBVar4;
        } while (*(BaseFactory **)pBVar4 != (BaseFactory *)0x0);
      }
    }
  }
  return 0;
}

