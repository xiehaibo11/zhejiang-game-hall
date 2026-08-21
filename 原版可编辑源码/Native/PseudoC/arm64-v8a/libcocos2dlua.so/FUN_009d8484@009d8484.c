
undefined8 FUN_009d8484(undefined8 param_1)

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
    this = (Device *)luaL_argerror(param_1,0,&DAT_012f1a4f);
  }
                    /* try { // try from 009d84c8 to 00ad84ff has its CatchHandler @ 009d8334 */
  universe::Device::getIosIDFA(this);
  uVar1 = (ulong)(local_50[0] >> 1);
  pvVar3 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
    pvVar3 = local_40;
  }
  lua_pushlstring(param_1,pvVar3,uVar1);
  if ((local_50[0] & 1) != 0) {
                    /* try { // try from 009d8500 to 00ad8517 has its CatchHandler @ 009d85a0 */
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 009d8528 to 00ad8543 has its CatchHandler @ 009d859c */
  return 1;
}

