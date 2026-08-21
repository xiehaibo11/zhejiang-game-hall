
void FUN_007c3c70(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined **local_70;
  int local_68;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 != 1) {
    luaL_error(param_1,
               "\'setListener\' function of xh has wrong number of arguments: %d, was expecting %d\n"
               ,iVar2 + -1,1);
    uVar3 = 0;
    goto LAB_007c3d2c;
  }
  iVar2 = toluafix_ref_function(param_1,2,0);
  local_70 = &PTR_FUN_01697c78;
  local_68 = iVar2;
  local_50 = (long *)&local_70;
  xh::XhSdk::setXhListener(&local_70);
  if (&local_70 == (undefined ***)local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_007c3d18:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_007c3d18;
  }
  tolua_pushnumber((double)iVar2,param_1);
  uVar3 = 1;
LAB_007c3d2c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

