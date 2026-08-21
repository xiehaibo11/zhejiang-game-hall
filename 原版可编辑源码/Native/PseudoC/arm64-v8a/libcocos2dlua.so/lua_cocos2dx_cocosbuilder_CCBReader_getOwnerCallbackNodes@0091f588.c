
/* lua_cocos2dx_cocosbuilder_CCBReader_getOwnerCallbackNodes(lua_State*) */

bool lua_cocos2dx_cocosbuilder_CCBReader_getOwnerCallbackNodes(lua_State *param_1)

{
  int iVar1;
  CCBReader *this;
  Vector *pVVar2;
  
                    /* try { // try from 0091f594 to 00a1f597 has its CatchHandler @ 0091f5ec */
                    /* try { // try from 0091f598 to 00a1f5ff has its CatchHandler @ 0091f548 */
  this = (CCBReader *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pVVar2 = (Vector *)cocosbuilder::CCBReader::getOwnerCallbackNodes(this);
                    /* catch() { ... } // from try @ 0091f594 with catch @ 0091f5ec */
    ccvector_to_luaval<cocos2d::Node*>(param_1,pVVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBReader:getOwnerCallbackNodes",iVar1,0);
  }
  return iVar1 == 0;
}

