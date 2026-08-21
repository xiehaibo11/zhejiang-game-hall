
/* std_map_string_string_to_luaval(lua_State*, std::__ndk1::map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   > > const&) */

void std_map_string_string_to_luaval(lua_State *param_1,map *param_2)

{
  bool bVar1;
  map *pmVar2;
  long lVar3;
  map *pmVar4;
  
  if (param_1 != (lua_State *)0x0) {
    lua_createtable(param_1,0,0);
    pmVar4 = *(map **)param_2;
    while (pmVar4 != param_2 + 8) {
      if (((byte)pmVar4[0x20] & 1) == 0) {
        pmVar2 = pmVar4 + 0x21;
      }
      else {
        pmVar2 = *(map **)(pmVar4 + 0x30);
      }
      lua_pushstring(param_1,pmVar2);
      if (((byte)pmVar4[0x38] & 1) == 0) {
        pmVar2 = pmVar4 + 0x39;
      }
      else {
        pmVar2 = *(map **)(pmVar4 + 0x48);
      }
      lua_pushstring(param_1,pmVar2);
      lua_rawset(param_1,0xfffffffd);
      pmVar2 = *(map **)(pmVar4 + 8);
      if (*(map **)(pmVar4 + 8) == (map *)0x0) {
        pmVar2 = pmVar4 + 0x10;
        bVar1 = *(map **)*(map **)pmVar2 != pmVar4;
        pmVar4 = *(map **)pmVar2;
        if (bVar1) {
          do {
            lVar3 = *(long *)pmVar2;
            pmVar2 = (map *)(lVar3 + 0x10);
            pmVar4 = *(map **)pmVar2;
          } while (*(long *)pmVar4 != lVar3);
        }
      }
      else {
        do {
          pmVar4 = pmVar2;
          pmVar2 = *(map **)pmVar4;
        } while (*(map **)pmVar4 != (map *)0x0);
      }
    }
  }
  return;
}

