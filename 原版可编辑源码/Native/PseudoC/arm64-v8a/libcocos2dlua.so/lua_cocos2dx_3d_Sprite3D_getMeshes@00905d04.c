
/* lua_cocos2dx_3d_Sprite3D_getMeshes(lua_State*) */

bool lua_cocos2dx_3d_Sprite3D_getMeshes(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 00905d18 to 00a05d2b has its CatchHandler @ 00905db0 */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
                    /* try { // try from 00905d30 to 00a05d63 has its CatchHandler @ 00905db4 */
  if (iVar1 == 0) {
    ccvector_to_luaval<cocos2d::Mesh*>(param_1,(Vector *)(lVar2 + 0x350));
                    /* try { // try from 00905d64 to 00a05dff has its CatchHandler @ 00905c14 */
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Sprite3D:getMeshes",iVar1,0);
  }
  return iVar1 == 0;
}

