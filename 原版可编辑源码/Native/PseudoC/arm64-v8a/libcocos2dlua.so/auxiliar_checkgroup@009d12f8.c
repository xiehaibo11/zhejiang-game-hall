
void auxiliar_checkgroup(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_getmetatable(param_1,param_3);
  if (iVar2 != 0) {
    lua_pushstring(param_1,param_2);
    lua_rawget(param_1,0xfffffffe);
    iVar2 = lua_type(param_1,0xffffffff);
    lua_settop(param_1,0xfffffffd);
    if ((iVar2 != 0) && (lVar3 = lua_touserdata(param_1,param_3), lVar3 != 0)) goto LAB_009d13a8;
  }
  FUN_009d1064(auStack_78,0x2d,"%.35s expected",param_2);
  luaL_argerror(param_1,param_3,auStack_78);
  lVar3 = 0;
LAB_009d13a8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}

