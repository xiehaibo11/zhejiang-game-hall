
/* lua_cocos2dx_Node_removeChild(lua_State*) */

undefined4 lua_cocos2dx_Node_removeChild(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  if (plVar3 == (long *)0x0) {
    pcVar6 = "invalid \'cobj\' in function \'lua_cocos2dx_Node_removeChild\'";
LAB_007e842c:
    tolua_error(param_1,pcVar6,0);
  }
  else {
    iVar2 = lua_gettop(param_1);
    if (iVar2 == 3) {
      if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
         (uVar4 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar4 & 1) == 0)) {
        luaval_to_boolean(param_1,3,local_3c,"cc.Node:removeChild");
      }
      else {
        uVar5 = tolua_tousertype(param_1,2,0);
        uVar4 = luaval_to_boolean(param_1,3,local_3c,"cc.Node:removeChild");
        if ((uVar4 & 1) != 0) {
          (**(code **)(*plVar3 + 0x280))(plVar3,uVar5,local_3c[0]);
          goto LAB_007e83dc;
        }
      }
LAB_007e8424:
      pcVar6 = "invalid arguments in function \'lua_cocos2dx_Node_removeChild\'";
      goto LAB_007e842c;
    }
    if (iVar2 == 2) {
      if (((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 1 < iVar2)) &&
         (uVar4 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar4 & 1) != 0)) {
        uVar5 = tolua_tousertype(param_1,2,0);
        (**(code **)(*plVar3 + 0x280))(plVar3,uVar5,1);
LAB_007e83dc:
        uVar7 = 1;
        lua_settop(param_1,1);
        goto LAB_007e843c;
      }
      goto LAB_007e8424;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Node:removeChild",iVar2 + -1,1);
  }
  uVar7 = 0;
LAB_007e843c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

