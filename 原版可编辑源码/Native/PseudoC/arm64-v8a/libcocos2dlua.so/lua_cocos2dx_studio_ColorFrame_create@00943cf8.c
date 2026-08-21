
/* lua_cocos2dx_studio_ColorFrame_create(lua_State*) */

undefined8 lua_cocos2dx_studio_ColorFrame_create(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  
                    /* try { // try from 00943cfc to 00a43d53 has its CatchHandler @ 00943cfc
                       catch() { ... } // from try @ 00943cfc with catch @ 00943cfc
                       catch() { ... } // from try @ 00943d90 with catch @ 00943cfc
                       catch() { ... } // from try @ 00943e94 with catch @ 00943cfc */
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
    pvVar3 = (void *)cocostudio::timeline::ColorFrame::create();
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 00943d54 to 00a43d8f has its CatchHandler @ 00943efc */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                 "ccs.ColorFrame");
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccs.ColorFrame:create",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

