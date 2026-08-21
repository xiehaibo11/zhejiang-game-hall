
ulong FUN_009d8614(undefined8 param_1)

{
  int *piVar1;
  long lVar2;
  Device *this;
  long lVar3;
  int *local_50;
  int *local_48;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  this = (Device *)lua_gettop();
  if ((int)this != 0) {
    this = (Device *)
           luaL_argerror(param_1,0,"lua_universe_Device_getBatteryState: expected 0 argument");
  }
  universe::Device::getBatteryState(this);
  for (piVar1 = local_50; piVar1 != local_48; piVar1 = piVar1 + 1) {
    lua_pushinteger(param_1,(long)*piVar1);
  }
  if (local_50 != (int *)0x0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return (ulong)((long)local_48 - (long)local_50) >> 2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

