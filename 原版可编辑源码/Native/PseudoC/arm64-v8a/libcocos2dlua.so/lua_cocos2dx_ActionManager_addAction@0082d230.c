
/* lua_cocos2dx_ActionManager_addAction(lua_State*) */

undefined4 lua_cocos2dx_ActionManager_addAction(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 unaff_x21;
  uint uVar8;
  bool local_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 3) {
    if (param_1 == (lua_State *)0x0) {
LAB_0082d37c:
      luaval_to_boolean(param_1,4,local_4c,"cc.ActionManager:addAction");
    }
    else {
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 2) || (uVar5 = luaval_is_usertype(param_1,2,"cc.Action",0), (uVar5 & 1) == 0)) {
        uVar8 = 0;
      }
      else {
        unaff_x21 = tolua_tousertype(param_1,2,0);
        uVar8 = 1;
      }
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 3) || (uVar5 = luaval_is_usertype(param_1,3,"cc.Node",0), (uVar5 & 1) == 0))
      goto LAB_0082d37c;
      uVar6 = tolua_tousertype(param_1,3,0);
      uVar3 = luaval_to_boolean(param_1,4,local_4c,"cc.ActionManager:addAction");
      if ((uVar8 & uVar3) != 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,unaff_x21,uVar6,local_4c[0]);
        uVar7 = 1;
        lua_settop(param_1,1);
        goto LAB_0082d3ac;
      }
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ActionManager_addAction\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ActionManager:addAction",iVar2 + -1,3);
  }
  uVar7 = 0;
LAB_0082d3ac:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

