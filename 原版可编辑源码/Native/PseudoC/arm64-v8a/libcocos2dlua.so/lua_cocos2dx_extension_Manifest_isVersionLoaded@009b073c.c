
/* lua_cocos2dx_extension_Manifest_isVersionLoaded(lua_State*) */

bool lua_cocos2dx_extension_Manifest_isVersionLoaded(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  Manifest *this;
  
                    /* try { // try from 009b0750 to 00ab075f has its CatchHandler @ 009b07cc */
  this = (Manifest *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::extension::Manifest::isVersionLoaded(this);
    tolua_pushboolean(param_1,uVar2 & 1);
  }
  else {
                    /* try { // try from 009b0770 to 00ab0773 has its CatchHandler @ 009b07d4 */
                    /* try { // try from 009b0774 to 00ab07eb has its CatchHandler @ 009b0624 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Manifest:isVersionLoaded",iVar1,0);
  }
  return iVar1 == 0;
}

