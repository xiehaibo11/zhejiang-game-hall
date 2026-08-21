
/* lua_cocos2dx_cocosbuilder_CCBReader_getAnimationManager(lua_State*) */

undefined8 lua_cocos2dx_cocosbuilder_CCBReader_getAnimationManager(lua_State *param_1)

{
  int iVar1;
  CCBReader *this;
  undefined8 uVar2;
  void *pvVar3;
  
  this = (CCBReader *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 0091ff8c to 00a1ffd7 has its CatchHandler @ 0091ff8c
                       catch() { ... } // from try @ 0091ff8c with catch @ 0091ff8c
                       catch() { ... } // from try @ 0091ffdc with catch @ 0091ff8c */
  if (iVar1 + -1 == 0) {
    pvVar3 = (void *)cocosbuilder::CCBReader::getAnimationManager(this);
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 0091ffd8 to 00a1ffdb has its CatchHandler @ 00920030 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                 "cc.CCBAnimationManager");
                    /* try { // try from 0091ffdc to 00a20043 has its CatchHandler @ 0091ff8c */
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBReader:getAnimationManager",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

