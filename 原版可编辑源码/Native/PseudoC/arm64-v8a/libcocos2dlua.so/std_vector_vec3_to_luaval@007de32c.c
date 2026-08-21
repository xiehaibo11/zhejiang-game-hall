
/* std_vector_vec3_to_luaval(lua_State*, std::__ndk1::vector<cocos2d::Vec3,
   std::__ndk1::allocator<cocos2d::Vec3> > const&) */

void std_vector_vec3_to_luaval(lua_State *param_1,vector *param_2)

{
  Vec3 *pVVar1;
  Vec3 *pVVar2;
  int iVar3;
  
  if (param_1 != (lua_State *)0x0) {
    lua_createtable(param_1,0,0);
    pVVar2 = *(Vec3 **)param_2;
    pVVar1 = *(Vec3 **)(param_2 + 8);
    if (pVVar2 != pVVar1) {
      iVar3 = 1;
      do {
        lua_pushnumber((double)iVar3,param_1);
        vec3_to_luaval(param_1,pVVar2);
        lua_rawset(param_1,0xfffffffd);
        pVVar2 = pVVar2 + 0xc;
        iVar3 = iVar3 + 1;
      } while (pVVar1 != pVVar2);
    }
  }
  return;
}

