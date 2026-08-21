
/* lua_cocos2dx_GLView_setCursor(lua_State*) */

undefined4 lua_cocos2dx_GLView_setCursor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_58 = 0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.GLView:setCursor");
    uVar4 = luaval_to_vec2(param_1,3,(Vec2 *)&local_58,"cc.GLView:setCursor");
    if ((uVar3 & uVar4 & 1) != 0) {
      (**(code **)(*plVar5 + 0x68))((undefined4)local_58,local_58._4_4_,plVar5,&local_50);
      lua_settop(param_1,1);
      goto LAB_007f176c;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_GLView_setCursor\'",0);
LAB_007f17cc:
    uVar7 = 0;
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.GLView:setCursor",iVar2 + -1,1);
      uVar7 = 0;
      goto LAB_007f17e0;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar6 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.GLView:setCursor");
    if ((uVar6 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_GLView_setCursor\'",0);
      goto LAB_007f17cc;
    }
    (**(code **)(*plVar5 + 0x68))(0,0x3f800000,plVar5,&local_50);
    lua_settop(param_1,1);
LAB_007f176c:
    uVar7 = 1;
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_007f17e0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

