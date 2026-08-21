
/* lua_cocos2dx_3d_Mesh_setMeshIndexData(lua_State*) */

undefined4 lua_cocos2dx_3d_Mesh_setMeshIndexData(lua_State *param_1)

{
  int iVar1;
  Mesh *this;
  ulong uVar2;
  MeshIndexData *pMVar3;
  
  this = (Mesh *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 00903918 to 00a0391b has its CatchHandler @ 0090396c */
                    /* try { // try from 0090391c to 00a0397f has its CatchHandler @ 009038cc */
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.MeshIndexData",0), (uVar2 & 1) != 0)) {
      pMVar3 = (MeshIndexData *)tolua_tousertype(param_1,2,0);
                    /* catch() { ... } // from try @ 00903918 with catch @ 0090396c */
      cocos2d::Mesh::setMeshIndexData(this,pMVar3);
      lua_settop(param_1,1);
      return 1;
                    /* try { // try from 00903980 to 00a03a7f has its CatchHandler @ 00903980
                       catch() { ... } // from try @ 00903980 with catch @ 00903980
                       catch() { ... } // from try @ 00903b00 with catch @ 00903980 */
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Mesh_setMeshIndexData\'",0)
    ;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Mesh:setMeshIndexData",iVar1 + -1,1);
  }
  return 0;
}

