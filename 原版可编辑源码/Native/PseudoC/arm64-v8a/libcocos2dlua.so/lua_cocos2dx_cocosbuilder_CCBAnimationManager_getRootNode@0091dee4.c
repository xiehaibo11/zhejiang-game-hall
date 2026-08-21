
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_getRootNode(lua_State*) */

undefined8 lua_cocos2dx_cocosbuilder_CCBAnimationManager_getRootNode(lua_State *param_1)

{
  int iVar1;
  CCBAnimationManager *this;
  undefined8 uVar2;
  void *pvVar3;
  
  this = (CCBAnimationManager *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar3 = (void *)cocosbuilder::CCBAnimationManager::getRootNode(this);
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,"cc.Node")
      ;
    }
                    /* try { // try from 0091df6c to 00a1df6f has its CatchHandler @ 0091dfc4 */
    uVar2 = 1;
  }
  else {
                    /* try { // try from 0091df20 to 00a1df6b has its CatchHandler @ 0091df20
                       catch() { ... } // from try @ 0091df20 with catch @ 0091df20
                       catch() { ... } // from try @ 0091df70 with catch @ 0091df20 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:getRootNode",iVar1 + -1,0);
    uVar2 = 0;
  }
                    /* try { // try from 0091df70 to 00a1dfd7 has its CatchHandler @ 0091df20 */
  return uVar2;
}

