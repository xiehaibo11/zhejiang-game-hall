
/* dragonBones::BaseFactory::clear(bool) */

void __thiscall dragonBones::BaseFactory::clear(BaseFactory *this,bool param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  BaseFactory *pBVar3;
  long lVar4;
  BaseFactory *pBVar5;
  undefined8 *puVar6;
  
  if (param_1) {
                    /* try { // try from 00d845a0 to 00e845a3 has its CatchHandler @ 00d84eb4 */
    pBVar5 = *(BaseFactory **)(this + 0x10);
    while (pBVar5 != this + 0x18) {
                    /* try { // try from 00d845c0 to 00e845c7 has its CatchHandler @ 00d84eb8 */
      BaseObject::returnToPool(*(BaseObject **)(pBVar5 + 0x38));
      pBVar3 = *(BaseFactory **)(pBVar5 + 8);
      if (*(BaseFactory **)(pBVar5 + 8) == (BaseFactory *)0x0) {
        pBVar3 = pBVar5 + 0x10;
        bVar2 = *(BaseFactory **)*(BaseFactory **)pBVar3 != pBVar5;
        pBVar5 = *(BaseFactory **)pBVar3;
        if (bVar2) {
          do {
                    /* try { // try from 00d845f4 to 00e8460f has its CatchHandler @ 00d84f48 */
            lVar4 = *(long *)pBVar3;
            pBVar3 = (BaseFactory *)(lVar4 + 0x10);
            pBVar5 = *(BaseFactory **)pBVar3;
          } while (*(long *)pBVar5 != lVar4);
        }
      }
      else {
        do {
          pBVar5 = pBVar3;
          pBVar3 = *(BaseFactory **)pBVar5;
        } while (*(BaseFactory **)pBVar5 != (BaseFactory *)0x0);
      }
    }
                    /* try { // try from 00d84614 to 00e84623 has its CatchHandler @ 00d84f4c */
    pBVar5 = *(BaseFactory **)(this + 0x28);
    while (pBVar5 != this + 0x30) {
      puVar1 = *(undefined8 **)(pBVar5 + 0x40);
      for (puVar6 = *(undefined8 **)(pBVar5 + 0x38); puVar6 != puVar1; puVar6 = puVar6 + 1) {
        BaseObject::returnToPool((BaseObject *)*puVar6);
      }
      pBVar3 = *(BaseFactory **)(pBVar5 + 8);
      if (*(BaseFactory **)(pBVar5 + 8) == (BaseFactory *)0x0) {
        pBVar3 = pBVar5 + 0x10;
        bVar2 = *(BaseFactory **)*(BaseFactory **)pBVar3 != pBVar5;
        pBVar5 = *(BaseFactory **)pBVar3;
        if (bVar2) {
          do {
            lVar4 = *(long *)pBVar3;
            pBVar3 = (BaseFactory *)(lVar4 + 0x10);
            pBVar5 = *(BaseFactory **)pBVar3;
          } while (*(long *)pBVar5 != lVar4);
        }
      }
      else {
        do {
          pBVar5 = pBVar3;
          pBVar3 = *(BaseFactory **)pBVar5;
        } while (*(BaseFactory **)pBVar5 != (BaseFactory *)0x0);
      }
    }
  }
  pBVar5 = this + 0x18;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::DragonBonesData*>>>
             *)(this + 0x10),*(__tree_node **)pBVar5);
  *(BaseFactory **)(this + 0x10) = pBVar5;
  *(undefined8 *)pBVar5 = 0;
  *(undefined8 *)(this + 0x20) = 0;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>>>
             *)(this + 0x28),*(__tree_node **)(this + 0x30));
  *(BaseFactory **)(this + 0x28) = this + 0x30;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  return;
}

