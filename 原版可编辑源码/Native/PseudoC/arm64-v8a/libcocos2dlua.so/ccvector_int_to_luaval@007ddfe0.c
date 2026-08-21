
/* ccvector_int_to_luaval(lua_State*, std::__ndk1::vector<int, std::__ndk1::allocator<int> > const&)
    */

void ccvector_int_to_luaval(lua_State *param_1,vector *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar5;
  int *piVar4;
  
  if (param_1 != (lua_State *)0x0) {
    lua_createtable(param_1,0,0);
    piVar1 = *(int **)(param_2 + 8);
    if (*(int **)param_2 != piVar1) {
      iVar5 = 1;
      piVar3 = *(int **)param_2;
      do {
        piVar4 = piVar3 + 1;
        iVar2 = *piVar3;
        lua_pushnumber((double)iVar5,param_1);
        lua_pushnumber((double)iVar2,param_1);
        lua_rawset(param_1,0xfffffffd);
        iVar5 = iVar5 + 1;
        piVar3 = piVar4;
      } while (piVar1 != piVar4);
    }
  }
  return;
}

