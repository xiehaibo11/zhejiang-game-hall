
/* lua_cocos2dx_cocosbuilder_CCBReader_addOwnerOutletNode(lua_State*) */

undefined4 lua_cocos2dx_cocosbuilder_CCBReader_addOwnerOutletNode(lua_State *param_1)

{
  int iVar1;
  CCBReader *this;
  ulong uVar2;
  Node *pNVar3;
  
  this = (CCBReader *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar2 & 1) != 0)) {
      pNVar3 = (Node *)tolua_tousertype(param_1,2,0);
      cocosbuilder::CCBReader::addOwnerOutletNode(this,pNVar3);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_cocosbuilder_CCBReader_addOwnerOutletNode\'"
                ,0);
  }
  else {
                    /* try { // try from 0091f548 to 00a1f593 has its CatchHandler @ 0091f548
                       catch() { ... } // from try @ 0091f548 with catch @ 0091f548
                       catch() { ... } // from try @ 0091f598 with catch @ 0091f548 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBReader:addOwnerOutletNode",iVar1 + -1,1);
  }
  return 0;
}

