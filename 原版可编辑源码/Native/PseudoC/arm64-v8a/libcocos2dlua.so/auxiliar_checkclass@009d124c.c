
long auxiliar_checkclass(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = luaL_checkudata(param_1,param_3,param_2);
  if (lVar2 == 0) {
    FUN_009d1064(auStack_78,0x2d,"%.35s expected",param_2);
    luaL_argerror(param_1,param_3,auStack_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

