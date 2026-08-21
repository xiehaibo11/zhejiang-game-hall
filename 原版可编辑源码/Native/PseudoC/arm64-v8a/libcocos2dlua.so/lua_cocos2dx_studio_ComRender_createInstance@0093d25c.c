
/* lua_cocos2dx_studio_ComRender_createInstance(lua_State*) */

undefined8 lua_cocos2dx_studio_ComRender_createInstance(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  
                    /* try { // try from 0093d268 to 00a3d29b has its CatchHandler @ 0093d368 */
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
                    /* try { // try from 0093d29c to 00a3d2af has its CatchHandler @ 0093d334 */
    pvVar3 = (void *)cocostudio::ComRender::createInstance();
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 0093d2b4 to 00a3d2e7 has its CatchHandler @ 0093d338 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,"cc.Ref");
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccs.ComRender:createInstance",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

