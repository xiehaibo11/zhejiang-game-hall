
/* lua_cocos2dx_3d_Skybox_setTexture(lua_State*) */

undefined4 lua_cocos2dx_3d_Skybox_setTexture(lua_State *param_1)

{
  int iVar1;
  Skybox *this;
  ulong uVar2;
  TextureCube *pTVar3;
  
                    /* try { // try from 009050bc to 00a050bf has its CatchHandler @ 009050f4 */
                    /* try { // try from 009050c0 to 00a05107 has its CatchHandler @ 00905070 */
  this = (Skybox *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
                    /* catch() { ... } // from try @ 009050bc with catch @ 009050f4 */
                    /* try { // try from 00905108 to 00a051d7 has its CatchHandler @ 00905108
                       catch() { ... } // from try @ 00905108 with catch @ 00905108
                       catch() { ... } // from try @ 00905258 with catch @ 00905108 */
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.TextureCube",0), (uVar2 & 1) != 0)) {
      pTVar3 = (TextureCube *)tolua_tousertype(param_1,2,0);
      cocos2d::Skybox::setTexture(this,pTVar3);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_3d_Skybox_setTexture\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Skybox:setTexture",iVar1 + -1,1);
  }
  return 0;
}

