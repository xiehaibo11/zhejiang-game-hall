
/* lua_cocos2dx_ui_Widget_interceptTouchEvent(lua_State*) */

undefined4 lua_cocos2dx_ui_Widget_interceptTouchEvent(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 unaff_x22;
  uint uVar8;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 3) {
                    /* try { // try from 00969048 to 00a692df has its CatchHandler @ 00969048
                       catch() { ... } // from try @ 00969048 with catch @ 00969048
                       catch() { ... } // from try @ 00969360 with catch @ 00969048 */
    uVar3 = luaval_to_int32(param_1,2,&local_4c,"ccui.Widget:interceptTouchEvent");
    if (param_1 != (lua_State *)0x0) {
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 3) || (uVar5 = luaval_is_usertype(param_1,3,"ccui.Widget",0), (uVar5 & 1) == 0))
      {
        uVar8 = 0;
      }
      else {
        unaff_x22 = tolua_tousertype(param_1,3,0);
        uVar8 = 1;
      }
      iVar2 = lua_gettop(param_1);
      if (((3 < iVar2) && (uVar5 = luaval_is_usertype(param_1,4,"cc.Touch",0), (uVar5 & 1) != 0)) &&
         (uVar6 = tolua_tousertype(param_1,4,0), (uVar3 & uVar8) != 0)) {
        (**(code **)(*plVar4 + 0x620))(plVar4,local_4c,unaff_x22,uVar6);
        uVar7 = 1;
        lua_settop(param_1,1);
        goto LAB_00969150;
      }
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_Widget_interceptTouchEvent\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Widget:interceptTouchEvent",iVar2 + -1,3);
  }
  uVar7 = 0;
LAB_00969150:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

