
/* lua_cocos2dx_studio_Armature_init(lua_State*) */

void lua_cocos2dx_studio_Armature_init(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    uVar7 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"ccs.Armature:init");
    if ((uVar7 & 1) != 0) {
      uVar3 = (**(code **)(*plVar5 + 0x530))(plVar5,&local_60);
      tolua_pushboolean(param_1,uVar3 & 1);
      if ((local_60 & 1) != 0) {
        operator_delete(local_50);
      }
LAB_00938270:
      uVar6 = 1;
      goto LAB_009382ac;
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  else if (iVar2 == 3) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"ccs.Armature:init");
    if ((((param_1 == (lua_State *)0x0) || (((uVar3 ^ 1) & 1) != 0)) ||
        (iVar4 = lua_gettop(param_1), iVar4 < 3)) ||
       ((uVar7 = luaval_is_usertype(param_1,3,"ccs.Bone",0), (uVar7 & 1) == 0 ||
        (uVar6 = tolua_tousertype(param_1,3,0), (uVar3 & 1) == 0)))) {
      iVar8 = 2;
      iVar4 = 2;
    }
    else {
      uVar3 = (**(code **)(*plVar5 + 0x538))(plVar5,&local_60,uVar6);
      tolua_pushboolean(param_1,uVar3 & 1);
      iVar8 = 1;
      iVar4 = 1;
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
      iVar4 = iVar8;
    }
    if (iVar4 != 2) goto LAB_00938270;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","ccs.Armature:init"
             ,iVar2 + -1,1);
  uVar6 = 0;
LAB_009382ac:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

