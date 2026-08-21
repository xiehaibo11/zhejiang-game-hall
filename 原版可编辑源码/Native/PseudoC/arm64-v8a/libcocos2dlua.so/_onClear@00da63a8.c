
/* dragonBones::TextureAtlasData::_onClear() */

void __thiscall dragonBones::TextureAtlasData::_onClear(TextureAtlasData *this)

{
  bool bVar1;
  TextureAtlasData *pTVar2;
  long lVar3;
  TextureAtlasData *pTVar4;
  
                    /* catch() { ... } // from try @ 00da6398 with catch @ 00da63bc */
  pTVar4 = *(TextureAtlasData **)(this + 0x50);
  while (pTVar4 != this + 0x58) {
    BaseObject::returnToPool(*(BaseObject **)(pTVar4 + 0x38));
    pTVar2 = *(TextureAtlasData **)(pTVar4 + 8);
    if (*(TextureAtlasData **)(pTVar4 + 8) == (TextureAtlasData *)0x0) {
      pTVar2 = pTVar4 + 0x10;
                    /* try { // try from 00da640c to 00ea6453 has its CatchHandler @ 00da640c
                       catch() { ... } // from try @ 00da640c with catch @ 00da640c
                       catch() { ... } // from try @ 00da6460 with catch @ 00da640c */
      bVar1 = *(TextureAtlasData **)*(TextureAtlasData **)pTVar2 != pTVar4;
      pTVar4 = *(TextureAtlasData **)pTVar2;
      if (bVar1) {
        do {
          lVar3 = *(long *)pTVar2;
          pTVar2 = (TextureAtlasData *)(lVar3 + 0x10);
          pTVar4 = *(TextureAtlasData **)pTVar2;
        } while (*(long *)pTVar4 != lVar3);
      }
    }
    else {
      do {
                    /* catch() { ... } // from try @ 00da635c with catch @ 00da63f0 */
        pTVar4 = pTVar2;
        pTVar2 = *(TextureAtlasData **)pTVar4;
      } while (*(TextureAtlasData **)pTVar4 != (TextureAtlasData *)0x0);
    }
  }
  this[0xd] = (TextureAtlasData)0x0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0x3f80000000000000;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x20),"",0);
                    /* try { // try from 00da6454 to 00ea645f has its CatchHandler @ 00da646c */
  if (((byte)this[0x38] & 1) == 0) {
    *(undefined2 *)(this + 0x38) = 0;
  }
  else {
                    /* try { // try from 00da6460 to 00ea64a3 has its CatchHandler @ 00da640c */
    **(undefined1 **)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
  }
                    /* catch() { ... } // from try @ 00da6454 with catch @ 00da646c */
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>>>
             *)(this + 0x50),*(__tree_node **)(this + 0x58));
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(TextureAtlasData **)(this + 0x50) = this + 0x58;
  return;
}

