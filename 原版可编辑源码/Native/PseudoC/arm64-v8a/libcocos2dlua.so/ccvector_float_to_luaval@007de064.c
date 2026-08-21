
/* ccvector_float_to_luaval(lua_State*, std::__ndk1::vector<float, std::__ndk1::allocator<float> >
   const&) */

void ccvector_float_to_luaval(lua_State *param_1,vector *param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar4;
  float fVar5;
  float *pfVar3;
  
  if (param_1 != (lua_State *)0x0) {
    lua_createtable(param_1,0,0);
    pfVar1 = *(float **)(param_2 + 8);
    if (*(float **)param_2 != pfVar1) {
      iVar4 = 1;
      pfVar2 = *(float **)param_2;
      do {
        pfVar3 = pfVar2 + 1;
        fVar5 = *pfVar2;
        lua_pushnumber((double)iVar4,param_1);
        lua_pushnumber((double)fVar5,param_1);
        lua_rawset(param_1,0xfffffffd);
        iVar4 = iVar4 + 1;
        pfVar2 = pfVar3;
      } while (pfVar1 != pfVar3);
    }
  }
  return;
}

