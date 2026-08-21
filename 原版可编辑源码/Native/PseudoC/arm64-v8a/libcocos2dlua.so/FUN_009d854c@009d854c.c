
undefined8 FUN_009d854c(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  Device *this;
  byte local_50 [8];
  ulong local_48;
  void *local_40;
  long local_38;
  
                    /* try { // try from 009d854c to 00ad855f has its CatchHandler @ 009d85a0 */
                    /* try { // try from 009d8560 to 00ad85b3 has its CatchHandler @ 009d8334 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this = (Device *)lua_gettop();
  if ((int)this != 0) {
    this = (Device *)luaL_argerror(param_1,0,&DAT_012f1a83);
  }
  universe::Device::getCarrierName(this);
                    /* catch() { ... } // from try @ 009d8528 with catch @ 009d859c */
                    /* catch() { ... } // from try @ 009d846c with catch @ 009d85a0
                       catch() { ... } // from try @ 009d8500 with catch @ 009d85a0
                       catch() { ... } // from try @ 009d854c with catch @ 009d85a0 */
  uVar1 = (ulong)(local_50[0] >> 1);
  pvVar3 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
    pvVar3 = local_40;
  }
                    /* try { // try from 009d85b4 to 00ad86eb has its CatchHandler @ 009d85b4
                       catch() { ... } // from try @ 009d85b4 with catch @ 009d85b4
                       catch() { ... } // from try @ 009d8748 with catch @ 009d85b4
                       catch() { ... } // from try @ 009d87e0 with catch @ 009d85b4 */
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

