
/* lua_cocos2dx_studio_ActionManagerEx_getInstance(lua_State*) */

undefined8 lua_cocos2dx_studio_ActionManagerEx_getInstance(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
    pvVar3 = (void *)cocostudio::ActionManagerEx::getInstance();
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                 "ccs.ActionManagerEx");
    }
    uVar2 = 1;
  }
  else {
                    /* try { // try from 0092b960 to 00a2b9fb has its CatchHandler @ 0092b7b0 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccs.ActionManagerEx:getInstance",iVar1 + -1,0);
    uVar2 = 0;
  }
                    /* catch() { ... } // from try @ 0092b914 with catch @ 0092b9ac */
  return uVar2;
}

