
/* lua_cocos2dx_extension_AssetsManagerEx_update(lua_State*) */

bool lua_cocos2dx_extension_AssetsManagerEx_update(lua_State *param_1)

{
  int iVar1;
  AssetsManagerEx *this;
  
  this = (AssetsManagerEx *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b106c with catch @ 009b10e4
                        */
  iVar1 = iVar1 + -1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b100c with catch @ 009b10e8
                        */
  if (iVar1 == 0) {
    cocos2d::extension::AssetsManagerEx::update(this);
    lua_settop(param_1,1);
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b0fe4 with catch @ 009b10ec
                       catch(type#1 @ 00000000) { ... } // from try @ 009b1024 with catch @ 009b10ec
                        */
                    /* try { // try from 009b1100 to 00ab1103 has its CatchHandler @ 009b1130 */
                    /* try { // try from 009b1104 to 00ab1147 has its CatchHandler @ 009b0fb4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e7ee1,
               iVar1,0);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b1100 with catch @ 009b1130
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009b1090 with catch @ 009b1134
                        */
  return iVar1 == 0;
}

