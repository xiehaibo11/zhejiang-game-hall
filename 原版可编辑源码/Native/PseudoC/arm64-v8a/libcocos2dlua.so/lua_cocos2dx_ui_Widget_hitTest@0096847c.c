
/* lua_cocos2dx_ui_Widget_hitTest(lua_State*) */

void lua_cocos2dx_ui_Widget_hitTest(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 unaff_x22;
  uint uVar7;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 3) {
    local_50 = 0;
    uVar3 = luaval_to_vec2(param_1,2,(Vec2 *)&local_50,"ccui.Widget:hitTest");
    if (param_1 != (lua_State *)0x0) {
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 3) || (uVar5 = luaval_is_usertype(param_1,3,"cc.Camera",0), (uVar5 & 1) == 0)) {
        uVar7 = 0;
      }
      else {
        unaff_x22 = tolua_tousertype(param_1,3,0);
        uVar7 = 1;
      }
      iVar2 = lua_gettop(param_1);
      if (((3 < iVar2) && (uVar5 = luaval_is_usertype(param_1,4,"cc.Vec3",0), (uVar5 & 1) != 0)) &&
         (uVar6 = tolua_tousertype(param_1,4,0), (uVar3 & uVar7) != 0)) {
        uVar3 = (**(code **)(*plVar4 + 0x5d0))(plVar4,&local_50,unaff_x22,uVar6);
        tolua_pushboolean(param_1,uVar3 & 1);
        uVar6 = 1;
        goto LAB_009685e4;
      }
    }
    tolua_error(param_1,&DAT_012d6fb8,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Widget:hitTest",iVar2 + -1,3);
  }
  uVar6 = 0;
LAB_009685e4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

