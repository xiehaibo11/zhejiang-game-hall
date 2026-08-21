
/* ccvector_std_string_to_luaval(lua_State*, std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > > const&) */

void ccvector_std_string_to_luaval(lua_State *param_1,vector *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  
  if (param_1 != (lua_State *)0x0) {
    lua_createtable(param_1,0,0);
    pbVar3 = *(byte **)param_2;
    pbVar1 = *(byte **)(param_2 + 8);
    if (pbVar3 != pbVar1) {
      iVar4 = 1;
      do {
        lua_pushnumber((double)iVar4,param_1);
        if ((*pbVar3 & 1) == 0) {
          pbVar2 = pbVar3 + 1;
        }
        else {
          pbVar2 = *(byte **)(pbVar3 + 0x10);
        }
        lua_pushstring(param_1,pbVar2);
        lua_rawset(param_1,0xfffffffd);
        pbVar3 = pbVar3 + 0x18;
        iVar4 = iVar4 + 1;
      } while (pbVar1 != pbVar3);
    }
  }
  return;
}

