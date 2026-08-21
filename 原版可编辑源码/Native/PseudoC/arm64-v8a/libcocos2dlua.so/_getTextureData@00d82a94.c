
/* dragonBones::BaseFactory::_getTextureData(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) const */

long __thiscall
dragonBones::BaseFactory::_getTextureData
          (BaseFactory *this,basic_string *param_1,basic_string *param_2)

{
  BaseFactory *pBVar1;
  long *plVar2;
  long *plVar3;
  BaseFactory *pBVar4;
  long lVar5;
  BaseFactory *pBVar6;
  BaseFactory *pBVar7;
  long lVar8;
  
  pBVar4 = (BaseFactory *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>>>
                       *)(this + 0x28),param_1);
  pBVar1 = this + 0x30;
  if (pBVar1 != pBVar4) {
    plVar3 = *(long **)(pBVar4 + 0x40);
    for (plVar2 = *(long **)(pBVar4 + 0x38); plVar2 != plVar3; plVar2 = plVar2 + 1) {
      lVar5 = *plVar2;
      lVar8 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>>>
                          *)(lVar5 + 0x50),param_2);
      if ((lVar5 + 0x58 != lVar8) && (*(long *)(lVar8 + 0x38) != 0)) {
        return *(long *)(lVar8 + 0x38);
      }
    }
  }
  if (this[8] == (BaseFactory)0x0) {
    return 0;
  }
  pBVar4 = *(BaseFactory **)(this + 0x28);
LAB_00d82ae4:
  do {
    if (pBVar4 == pBVar1) {
      return 0;
    }
    while( true ) {
      plVar3 = *(long **)(pBVar4 + 0x40);
      for (plVar2 = *(long **)(pBVar4 + 0x38); plVar2 != plVar3; plVar2 = plVar2 + 1) {
        lVar8 = *plVar2;
        if (((*(char *)(lVar8 + 0xd) != '\0') &&
            (lVar5 = std::__ndk1::
                     __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>>>
                     ::
                     find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                               ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>>>
                                 *)(lVar8 + 0x50),param_2), lVar8 + 0x58 != lVar5)) &&
           (*(long *)(lVar5 + 0x38) != 0)) {
          return *(long *)(lVar5 + 0x38);
        }
      }
      pBVar6 = *(BaseFactory **)(pBVar4 + 8);
      if (*(BaseFactory **)(pBVar4 + 8) != (BaseFactory *)0x0) goto LAB_00d82b00;
      pBVar6 = pBVar4 + 0x10;
      pBVar7 = *(BaseFactory **)pBVar6;
      if (*(BaseFactory **)pBVar7 != pBVar4) break;
      pBVar4 = pBVar7;
      if (pBVar7 == pBVar1) {
        return 0;
      }
    }
    do {
      lVar8 = *(long *)pBVar6;
      pBVar6 = (BaseFactory *)(lVar8 + 0x10);
      pBVar4 = *(BaseFactory **)pBVar6;
    } while (*(long *)pBVar4 != lVar8);
  } while( true );
LAB_00d82b00:
  do {
    pBVar4 = pBVar6;
    pBVar6 = *(BaseFactory **)pBVar4;
  } while (*(BaseFactory **)pBVar4 != (BaseFactory *)0x0);
  goto LAB_00d82ae4;
}

