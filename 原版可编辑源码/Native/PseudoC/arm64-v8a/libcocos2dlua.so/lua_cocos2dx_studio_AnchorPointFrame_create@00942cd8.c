
/* lua_cocos2dx_studio_AnchorPointFrame_create(lua_State*) */

undefined8 lua_cocos2dx_studio_AnchorPointFrame_create(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  
                    /* try { // try from 00942cdc to 00a42cdf has its CatchHandler @ 00942d54 */
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
    pvVar3 = (void *)cocostudio::timeline::AnchorPointFrame::create();
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                 "ccs.AnchorPointFrame");
    }
    uVar2 = 1;
  }
  else {
                    /* try { // try from 00942cfc to 00a42d0b has its CatchHandler @ 00942d5c */
                    /* try { // try from 00942d0c to 00a42d77 has its CatchHandler @ 00942c90 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccs.AnchorPointFrame:create",iVar1 + -1,0);
    uVar2 = 0;
  }
                    /* catch() { ... } // from try @ 00942cdc with catch @ 00942d54 */
  return uVar2;
}

