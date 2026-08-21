
/* lua_cocos2dx_extension_ControlStepper_getMinusSprite(lua_State*) */

undefined8 lua_cocos2dx_extension_ControlStepper_getMinusSprite(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009a8530 to 00aa853f has its CatchHandler @ 009a85b8 */
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 009a8540 to 00aa85d3 has its CatchHandler @ 009a84f0 */
  if (iVar1 + -1 == 0) {
    pvVar4 = (void *)(**(code **)(*plVar2 + 0x6f8))(plVar2);
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "cc.Sprite");
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e6150,
               iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

