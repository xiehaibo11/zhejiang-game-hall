
undefined8 auxiliar_tostring(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_getmetatable(param_1,1);
  if (iVar2 != 0) {
    lua_pushstring(param_1,"__index");
    lua_gettable(param_1,0xfffffffe);
    iVar2 = lua_type(param_1,0xffffffff);
    if (iVar2 == 5) {
      lua_pushstring(param_1,"class");
      lua_gettable(param_1,0xfffffffe);
      iVar2 = lua_isstring(param_1,0xffffffff);
      if (iVar2 != 0) {
        uVar3 = lua_touserdata(param_1,1);
        FUN_009d1064(auStack_48,0x20,"%p",uVar3);
        uVar3 = lua_tolstring(param_1,0xffffffff,0);
        lua_pushfstring(param_1,"%s: %s",uVar3,auStack_48);
        goto LAB_009d103c;
      }
    }
  }
  lua_pushstring(param_1,"invalid object passed to \'auxiliar.c:__tostring\'");
  lua_error(param_1);
LAB_009d103c:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

