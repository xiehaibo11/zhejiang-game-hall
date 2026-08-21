
undefined8 FUN_009f6d48(undefined8 param_1)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar2 = (float)FUN_009f9b80(param_1,1,&local_3c);
  if (local_3c == 0) {
    uVar3 = lua_type(param_1,1);
    uVar4 = lua_typename(param_1,uVar3);
    lua_pushfstring(param_1,"%s expected, got %s","number/string",uVar4);
    uVar4 = lua_tolstring(param_1,0xffffffff,0);
    luaL_argerror(param_1,1,uVar4);
  }
  lua_pushnumber((double)fVar2,param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

