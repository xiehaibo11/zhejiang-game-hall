
/* lua_cocos2dx_Node_addChild(lua_State*) */

undefined4 lua_cocos2dx_Node_addChild(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  ulong local_68 [2];
  void *local_58;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  if (plVar4 == (long *)0x0) {
    tolua_error(param_1,"invalid \'cobj\' in function \'lua_cocos2dx_Node_addChild\'",0);
  }
  else {
    iVar2 = lua_gettop(param_1);
    if (iVar2 == 2) {
      if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
         (uVar5 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar5 & 1) != 0)) {
        uVar6 = tolua_tousertype(param_1,2,0);
        (**(code **)(*plVar4 + 0x208))(plVar4,uVar6);
LAB_007e65c8:
        uVar7 = 1;
        lua_settop(param_1,1);
        goto LAB_007e66cc;
      }
    }
    else if (iVar2 == 4) {
      if (param_1 != (lua_State *)0x0) {
        iVar3 = lua_gettop(param_1);
        if ((1 < iVar3) && (uVar5 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar5 & 1) != 0)) {
          uVar6 = tolua_tousertype(param_1,2,0);
          uVar5 = luaval_to_int32(param_1,3,(int *)local_68,"cc.Node:addChild");
          if (((uVar5 & 1) != 0) &&
             (uVar5 = luaval_to_int32(param_1,4,&local_4c,"cc.Node:addChild"), (uVar5 & 1) != 0)) {
            (**(code **)(*plVar4 + 0x218))(plVar4,uVar6,local_68[0] & 0xffffffff,local_4c);
            goto LAB_007e65c8;
          }
        }
        iVar3 = lua_gettop(param_1);
        if ((1 < iVar3) && (uVar5 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar5 & 1) != 0)) {
          uVar6 = tolua_tousertype(param_1,2,0);
          uVar5 = luaval_to_int32(param_1,3,&local_4c,"cc.Node:addChild");
          if ((uVar5 & 1) != 0) {
            local_68[1] = 0;
            local_58 = (void *)0x0;
            local_68[0] = 0;
            uVar5 = luaval_to_std_string(param_1,4,(basic_string *)local_68,"cc.Node:addChild");
            if ((uVar5 & 1) == 0) {
              iVar3 = 8;
            }
            else {
              (**(code **)(*plVar4 + 0x220))(plVar4,uVar6,local_4c,local_68);
              iVar3 = 1;
              lua_settop(param_1,1);
            }
            if ((local_68[0] & 1) != 0) {
              operator_delete(local_58);
            }
            if (iVar3 != 8) {
              uVar7 = 1;
              goto LAB_007e66cc;
            }
          }
        }
      }
    }
    else if ((((iVar2 == 3) && (param_1 != (lua_State *)0x0)) &&
             (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
            (uVar5 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar5 & 1) != 0)) {
      uVar6 = tolua_tousertype(param_1,2,0);
      uVar5 = luaval_to_int32(param_1,3,(int *)local_68,"cc.Node:addChild");
      if ((uVar5 & 1) != 0) {
        (**(code **)(*plVar4 + 0x210))(plVar4,uVar6,local_68[0] & 0xffffffff);
        goto LAB_007e65c8;
      }
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Node:addChild",iVar2 + -1,3);
  }
  uVar7 = 0;
LAB_007e66cc:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

