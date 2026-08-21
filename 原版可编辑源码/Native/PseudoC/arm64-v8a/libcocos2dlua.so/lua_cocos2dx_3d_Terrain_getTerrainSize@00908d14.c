
/* lua_cocos2dx_3d_Terrain_getTerrainSize(lua_State*) */

void lua_cocos2dx_3d_Terrain_getTerrainSize(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 00908cf4 with catch @ 00908d48 */
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    cocos2d::Size::Size(aSStack_40,(float)*(int *)(lVar3 + 0x80528),(float)*(int *)(lVar3 + 0x8052c)
                       );
    size_to_luaval(param_1,aSStack_40);
  }
  else {
                    /* try { // try from 00908d5c to 00a08e2b has its CatchHandler @ 00908d5c
                       catch() { ... } // from try @ 00908d5c with catch @ 00908d5c
                       catch() { ... } // from try @ 00908eac with catch @ 00908d5c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Terrain:getTerrainSize",iVar2,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}

