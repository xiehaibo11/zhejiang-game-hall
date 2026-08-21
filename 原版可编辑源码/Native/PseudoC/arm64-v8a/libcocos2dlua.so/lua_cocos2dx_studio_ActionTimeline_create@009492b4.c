
/* lua_cocos2dx_studio_ActionTimeline_create(lua_State*) */

undefined8 lua_cocos2dx_studio_ActionTimeline_create(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  
                    /* try { // try from 009492c0 to 00a4935b has its CatchHandler @ 00949144 */
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
    pvVar3 = (void *)cocostudio::timeline::ActionTimeline::create();
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* catch() { ... } // from try @ 00949274 with catch @ 0094930c */
                    /* catch() { ... } // from try @ 0094928c with catch @ 00949310 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                 "ccs.ActionTimeline");
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccs.ActionTimeline:create",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

