
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_moveAnimationsFromNode(lua_State*) */

undefined4 lua_cocos2dx_cocosbuilder_CCBAnimationManager_moveAnimationsFromNode(lua_State *param_1)

{
  bool bVar1;
  int iVar2;
  CCBAnimationManager *this;
  ulong uVar3;
  Node *pNVar4;
  Node *unaff_x21;
  
                    /* catch() { ... } // from try @ 0091c3c4 with catch @ 0091c4c4 */
  this = (CCBAnimationManager *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    if (param_1 != (lua_State *)0x0) {
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 2) || (uVar3 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar3 & 1) == 0)) {
        bVar1 = false;
      }
      else {
        unaff_x21 = (Node *)tolua_tousertype(param_1,2,0);
        bVar1 = true;
      }
      iVar2 = lua_gettop(param_1);
      if (((2 < iVar2) && (uVar3 = luaval_is_usertype(param_1,3,"cc.Node",0), (uVar3 & 1) != 0)) &&
         (pNVar4 = (Node *)tolua_tousertype(param_1,3,0), bVar1)) {
        cocosbuilder::CCBAnimationManager::moveAnimationsFromNode(this,unaff_x21,pNVar4);
        lua_settop(param_1,1);
        return 1;
      }
    }
    tolua_error(param_1,&DAT_012c6333,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:moveAnimationsFromNode",iVar2 + -1,2);
  }
  return 0;
}

