
/* ccvector_ushort_to_luaval(lua_State*, std::__ndk1::vector<unsigned short,
   std::__ndk1::allocator<unsigned short> > const&) */

void ccvector_ushort_to_luaval(lua_State *param_1,vector *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar5;
  ushort *puVar4;
  
  if (param_1 != (lua_State *)0x0) {
    lua_createtable(param_1,0,0);
    puVar1 = *(ushort **)(param_2 + 8);
    if (*(ushort **)param_2 != puVar1) {
      iVar5 = 1;
      puVar3 = *(ushort **)param_2;
      do {
        puVar4 = puVar3 + 1;
        uVar2 = *puVar3;
        lua_pushnumber((double)iVar5,param_1);
        lua_pushnumber((double)uVar2,param_1);
        lua_rawset(param_1,0xfffffffd);
        iVar5 = iVar5 + 1;
        puVar3 = puVar4;
      } while (puVar1 != puVar4);
    }
  }
  return;
}

