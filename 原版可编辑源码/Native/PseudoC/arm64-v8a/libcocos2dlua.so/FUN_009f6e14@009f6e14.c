
undefined8 FUN_009f6e14(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_009f9b80(param_1,1,&local_3c);
  if (local_3c == 0) {
    uVar2 = lua_type(param_1,1);
    uVar4 = lua_typename(param_1,uVar2);
    lua_pushfstring(param_1,"%s expected, got %s","number/string",uVar4);
    uVar4 = lua_tolstring(param_1,0xffffffff,0);
                    /* try { // try from 009f6ea0 to 00af6eff has its CatchHandler @ 009f6ea0
                       catch() { ... } // from try @ 009f6ea0 with catch @ 009f6ea0
                       catch() { ... } // from try @ 009f701c with catch @ 009f6ea0
                       catch() { ... } // from try @ 009f7088 with catch @ 009f6ea0 */
    luaL_argerror(param_1,1,uVar4);
  }
  lua_pushnumber(uVar3,param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

