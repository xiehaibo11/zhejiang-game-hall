
/* cocos2d::renderer::TiledMapAssembler::clearNodes(unsigned long) */

void __thiscall
cocos2d::renderer::TiledMapAssembler::clearNodes(TiledMapAssembler *this,ulong param_1)

{
  TiledMapAssembler *pTVar1;
  TiledMapAssembler *pTVar2;
  TiledMapAssembler *pTVar3;
  
  pTVar1 = this + 0x98;
  pTVar3 = *(TiledMapAssembler **)pTVar1;
  if (pTVar3 != (TiledMapAssembler *)0x0) {
    pTVar2 = pTVar1;
    do {
      if (*(ulong *)(pTVar3 + 0x20) >= param_1) {
        pTVar2 = pTVar3;
      }
      pTVar3 = *(TiledMapAssembler **)(pTVar3 + (ulong)(*(ulong *)(pTVar3 + 0x20) < param_1) * 8);
    } while (pTVar3 != (TiledMapAssembler *)0x0);
                    /* try { // try from 009cf8e8 to 00acfa17 has its CatchHandler @ 009cfc08 */
    if ((pTVar2 != pTVar1) && (*(ulong *)(pTVar2 + 0x20) <= param_1)) {
      std::__ndk1::
      __tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>>>
      ::erase((__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>>>
               *)(this + 0x90),pTVar2);
      return;
    }
  }
  return;
}

