
undefined8 FUN_009d7c74(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  Device *this;
  byte local_50 [8];
  ulong local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this = (Device *)lua_gettop();
  if ((int)this != 0) {
    this = (Device *)
           luaL_argerror(param_1,0,"lua_universe_Device_getDeviceName: expected 0 argument");
  }
  universe::Device::getDeviceName(this);
  uVar1 = (ulong)(local_50[0] >> 1);
  pvVar3 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
    pvVar3 = local_40;
  }
                    /* try { // try from 009d7ce0 to 00ad7d4b has its CatchHandler @ 009d8064 */
  lua_pushlstring(param_1,pvVar3,uVar1);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

