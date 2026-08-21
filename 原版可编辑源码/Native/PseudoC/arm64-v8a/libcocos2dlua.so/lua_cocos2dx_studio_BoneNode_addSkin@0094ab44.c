
/* lua_cocos2dx_studio_BoneNode_addSkin(lua_State*) */

undefined4 lua_cocos2dx_studio_BoneNode_addSkin(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  bool local_54 [4];
  bool local_50 [4];
  bool local_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar5 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar5 & 1) != 0)) {
      uVar6 = tolua_tousertype(param_1,2,0);
      uVar5 = luaval_to_boolean(param_1,3,local_54,"ccs.BoneNode:addSkin");
      if ((uVar5 & 1) != 0) {
        (**(code **)(*plVar4 + 0x548))(plVar4,uVar6,local_54[0]);
        goto LAB_0094acac;
      }
    }
  }
  else if (((iVar2 == 4) && (param_1 != (lua_State *)0x0)) &&
          ((iVar3 = lua_gettop(param_1), 1 < iVar3 &&
           (uVar5 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar5 & 1) != 0)))) {
    uVar6 = tolua_tousertype(param_1,2,0);
    uVar5 = luaval_to_boolean(param_1,3,local_4c,"ccs.BoneNode:addSkin");
    if (((uVar5 & 1) != 0) &&
       (uVar5 = luaval_to_boolean(param_1,4,local_50,"ccs.BoneNode:addSkin"), (uVar5 & 1) != 0)) {
      (**(code **)(*plVar4 + 0x550))(plVar4,uVar6,local_4c[0],local_50[0]);
LAB_0094acac:
      uVar7 = 1;
      lua_settop(param_1,1);
      goto LAB_0094ace4;
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "ccs.BoneNode:addSkin",iVar2 + -1,2);
  uVar7 = 0;
LAB_0094ace4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

