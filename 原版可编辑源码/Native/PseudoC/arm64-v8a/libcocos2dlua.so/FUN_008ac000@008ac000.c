
undefined4 FUN_008ac000(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined4 uVar4;
  double dVar5;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != 0) {
    plVar3 = (long *)tolua_tousertype(param_1,1,0);
    iVar2 = lua_gettop(param_1);
    if (iVar2 - 1U < 3) {
      uVar4 = 2;
      dVar5 = (double)tolua_tonumber(0,param_1,2);
      local_3c = (float)dVar5;
      dVar5 = (double)tolua_tonumber(0,param_1,3);
      local_40 = (float)dVar5;
      (**(code **)(*plVar3 + 0xd0))(plVar3,&local_3c,&local_40);
      tolua_pushnumber((double)local_3c,param_1);
      tolua_pushnumber((double)local_40,param_1);
      goto LAB_008ac0dc;
    }
    luaL_error(param_1,"%s function in Node has wrong number of arguments: %d, was expecting %d\n",
               "cc.Node:getPosition",iVar2 - 1U,0);
  }
  uVar4 = 0;
LAB_008ac0dc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

