
/* lua_cocos2dx_3d_Mesh_setMaterial(lua_State*) */

undefined4 lua_cocos2dx_3d_Mesh_setMaterial(lua_State *param_1)

{
  int iVar1;
  Mesh *this;
  ulong uVar2;
  Material *pMVar3;
  
                    /* try { // try from 0090321c to 00a03267 has its CatchHandler @ 0090321c
                       catch() { ... } // from try @ 0090321c with catch @ 0090321c
                       catch() { ... } // from try @ 0090326c with catch @ 0090321c */
  this = (Mesh *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
                    /* try { // try from 00903268 to 00a0326b has its CatchHandler @ 009032a0 */
                    /* try { // try from 0090326c to 00a032b3 has its CatchHandler @ 0090321c */
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.Material",0), (uVar2 & 1) != 0)) {
      pMVar3 = (Material *)tolua_tousertype(param_1,2,0);
      cocos2d::Mesh::setMaterial(this,pMVar3);
                    /* catch() { ... } // from try @ 00903268 with catch @ 009032a0 */
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Mesh_setMaterial\'",0);
  }
  else {
                    /* try { // try from 009032b4 to 00a03383 has its CatchHandler @ 009032b4
                       catch() { ... } // from try @ 009032b4 with catch @ 009032b4
                       catch() { ... } // from try @ 00903404 with catch @ 009032b4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Mesh:setMaterial",iVar1 + -1,1);
  }
  return 0;
}

