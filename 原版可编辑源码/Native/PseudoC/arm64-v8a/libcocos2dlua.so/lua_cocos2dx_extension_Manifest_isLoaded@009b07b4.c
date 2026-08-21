
/* lua_cocos2dx_extension_Manifest_isLoaded(lua_State*) */

bool lua_cocos2dx_extension_Manifest_isLoaded(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  Manifest *this;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b0670 with catch @ 009b07c8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b0750 with catch @ 009b07cc
                        */
  this = (Manifest *)tolua_tousertype(param_1,1,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b0700 with catch @ 009b07d0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b0770 with catch @ 009b07d4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b06b8 with catch @ 009b07d8
                        */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocos2d::extension::Manifest::isLoaded(this);
    tolua_pushboolean(param_1,uVar2 & 1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b07ec with catch @ 009b081c
                        */
  }
  else {
                    /* try { // try from 009b07ec to 00ab07ef has its CatchHandler @ 009b081c */
                    /* try { // try from 009b07f0 to 00ab082f has its CatchHandler @ 009b0624 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Manifest:isLoaded",iVar1,0);
  }
  return iVar1 == 0;
}

