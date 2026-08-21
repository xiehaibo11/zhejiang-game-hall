
/* lua_cocos2dx_studio_Armature_setVersion(lua_State*) */

undefined4 lua_cocos2dx_studio_Armature_setVersion(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_number(param_1,2,&local_40,"ccs.Armature:setVersion");
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar3 + 0x5c0))((float)local_40,plVar3);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00937e24;
    }
    tolua_error(param_1,0x12cc67f,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012cc667,
               iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00937e24:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

