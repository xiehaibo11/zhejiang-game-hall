
/* lua_cocos2dx_cocosbuilder_CCBReader_getOwnerCallbackControlEvents(lua_State*) */

bool lua_cocos2dx_cocosbuilder_CCBReader_getOwnerCallbackControlEvents(lua_State *param_1)

{
  int iVar1;
  CCBReader *this;
  vector *pvVar2;
  
  this = (CCBReader *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 0091f6ec with catch @ 0091f784 */
                    /* catch() { ... } // from try @ 0091f704 with catch @ 0091f788 */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* catch() { ... } // from try @ 0091f6b8 with catch @ 0091f7b8 */
    pvVar2 = (vector *)cocosbuilder::CCBReader::getOwnerCallbackControlEvents(this);
    ccvaluevector_to_luaval(param_1,pvVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBReader:getOwnerCallbackControlEvents",iVar1,0);
  }
  return iVar1 == 0;
}

