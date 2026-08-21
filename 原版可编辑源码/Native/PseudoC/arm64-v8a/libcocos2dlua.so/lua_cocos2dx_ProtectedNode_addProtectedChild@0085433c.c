
/* lua_cocos2dx_ProtectedNode_addProtectedChild(lua_State*) */

undefined4 lua_cocos2dx_ProtectedNode_addProtectedChild(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int local_50;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar5 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar5 & 1) != 0)) {
      uVar6 = tolua_tousertype(param_1,2,0);
      (**(code **)(*plVar4 + 0x530))(plVar4,uVar6);
LAB_00854500:
      uVar7 = 1;
      lua_settop(param_1,1);
      goto LAB_00854538;
    }
  }
  else if (iVar2 == 4) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar5 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar5 & 1) != 0)) {
      uVar6 = tolua_tousertype(param_1,2,0);
      uVar5 = luaval_to_int32(param_1,3,&local_4c,"cc.ProtectedNode:addProtectedChild");
      if (((uVar5 & 1) != 0) &&
         (uVar5 = luaval_to_int32(param_1,4,&local_50,"cc.ProtectedNode:addProtectedChild"),
         (uVar5 & 1) != 0)) {
        (**(code **)(*plVar4 + 0x540))(plVar4,uVar6,local_4c,local_50);
        goto LAB_00854500;
      }
    }
  }
  else if ((((iVar2 == 3) && (param_1 != (lua_State *)0x0)) &&
           (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
          (uVar5 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar5 & 1) != 0)) {
    uVar6 = tolua_tousertype(param_1,2,0);
    uVar5 = luaval_to_int32(param_1,3,&local_4c,"cc.ProtectedNode:addProtectedChild");
    if ((uVar5 & 1) != 0) {
      (**(code **)(*plVar4 + 0x538))(plVar4,uVar6,local_4c);
      goto LAB_00854500;
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.ProtectedNode:addProtectedChild",iVar2 + -1,3);
  uVar7 = 0;
LAB_00854538:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

