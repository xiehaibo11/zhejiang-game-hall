
/* lua_cocos2dx_studio_BoneNode_displaySkin(lua_State*) */

undefined4 lua_cocos2dx_studio_BoneNode_displaySkin(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  bool local_64 [4];
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"ccs.BoneNode:displaySkin");
    if ((uVar5 & 1) == 0) {
      iVar3 = 2;
    }
    else {
      uVar5 = luaval_to_boolean(param_1,3,local_64,"ccs.BoneNode:displaySkin");
      if ((uVar5 & 1) == 0) {
        iVar3 = 2;
      }
      else {
        (**(code **)(*plVar4 + 0x560))(plVar4,&local_60,local_64[0]);
        iVar3 = 1;
        lua_settop(param_1,1);
      }
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    if (iVar3 != 2) {
      uVar7 = 1;
      goto LAB_0094aa64;
    }
    if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
       (uVar5 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar5 & 1) != 0)) {
      uVar6 = tolua_tousertype(param_1,2,0);
      uVar5 = luaval_to_boolean(param_1,3,(bool *)&local_60,"ccs.BoneNode:displaySkin");
      if ((uVar5 & 1) != 0) {
        (**(code **)(*plVar4 + 0x558))(plVar4,uVar6,local_60 & 0xff);
        uVar7 = 1;
        lua_settop(param_1,1);
        goto LAB_0094aa64;
      }
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "ccs.BoneNode:displaySkin",iVar2 + -1,2);
  uVar7 = 0;
LAB_0094aa64:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

