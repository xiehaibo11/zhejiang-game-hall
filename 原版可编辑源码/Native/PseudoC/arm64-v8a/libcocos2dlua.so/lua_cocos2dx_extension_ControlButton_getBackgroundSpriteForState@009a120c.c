
/* lua_cocos2dx_extension_ControlButton_getBackgroundSpriteForState(lua_State*) */

void lua_cocos2dx_extension_ControlButton_getBackgroundSpriteForState(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 uVar6;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 009a124c to 00aa12c3 has its CatchHandler @ 009a124c
                       catch() { ... } // from try @ 009a124c with catch @ 009a124c
                       catch() { ... } // from try @ 009a1384 with catch @ 009a124c */
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"cc.ControlButton:getBackgroundSpriteForState");
    if ((uVar4 & 1) != 0) {
      pvVar5 = (void *)(**(code **)(*plVar3 + 0x718))(plVar3,local_3c);
      if (pvVar5 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar6 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                   "ccui.Scale9Sprite");
        uVar6 = 1;
      }
      goto LAB_009a12e4;
    }
    tolua_error(param_1,&DAT_012e3fb7,0);
  }
  else {
                    /* try { // try from 009a12c4 to 00aa12f7 has its CatchHandler @ 009a1414 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ControlButton:getBackgroundSpriteForState",iVar2 + -1,1);
  }
  uVar6 = 0;
LAB_009a12e4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

