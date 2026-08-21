
undefined8 FUN_009d4c50(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  code *pcVar4;
  undefined **local_70;
  undefined4 local_68;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_68 = toluafix_ref_function(param_1,2,0);
    local_70 = &PTR_FUN_0169f8b0;
    local_50 = (long *)&local_70;
    (**(code **)(*plVar3 + 0x708))(plVar3,&local_70);
    if (&local_70 == (undefined ***)local_50) {
      pcVar4 = *(code **)(*local_50 + 0x20);
    }
    else {
      if (local_50 == (long *)0x0) goto LAB_009d4d1c;
      pcVar4 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar4)();
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccexp.VideoPlayer:addEventListener",iVar2 + -1,0);
  }
LAB_009d4d1c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

