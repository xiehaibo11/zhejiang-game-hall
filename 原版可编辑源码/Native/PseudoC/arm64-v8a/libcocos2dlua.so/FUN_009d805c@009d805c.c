
undefined8 FUN_009d805c(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  Device *this;
  byte local_50 [8];
  ulong local_48;
  void *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 009cf064 with catch @ 009d805c */
                    /* catch() { ... } // from try @ 009d7de8 with catch @ 009d8060 */
                    /* catch() { ... } // from try @ 009d7ce0 with catch @ 009d8064 */
                    /* catch() { ... } // from try @ 009d79d0 with catch @ 009d8068 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this = (Device *)lua_gettop();
  if ((int)this != 0) {
                    /* catch() { ... } // from try @ 009d78cc with catch @ 009d8088 */
                    /* catch() { ... } // from try @ 009d7550 with catch @ 009d808c */
                    /* catch() { ... } // from try @ 009d7448 with catch @ 009d8090 */
                    /* catch() { ... } // from try @ 009d71fc with catch @ 009d8094 */
                    /* catch() { ... } // from try @ 009d70f0 with catch @ 009d8098 */
    this = (Device *)
           luaL_argerror(param_1,0,"lua_universe_Device_getAppVersion: expected 0 argument");
  }
                    /* catch() { ... } // from try @ 009d6eb8 with catch @ 009d809c */
                    /* catch() { ... } // from try @ 009d6cf0 with catch @ 009d80a0 */
                    /* catch() { ... } // from try @ 009d6808 with catch @ 009d80a4 */
  universe::Device::getAppVersion(this);
                    /* catch() { ... } // from try @ 009d6704 with catch @ 009d80a8 */
                    /* catch() { ... } // from try @ 009d6580 with catch @ 009d80ac */
                    /* catch() { ... } // from try @ 009d647c with catch @ 009d80b0 */
                    /* catch() { ... } // from try @ 009d62c8 with catch @ 009d80b4 */
                    /* catch() { ... } // from try @ 009d6160 with catch @ 009d80b8 */
  uVar1 = (ulong)(local_50[0] >> 1);
  pvVar3 = (void *)((ulong)local_50 | 1);
                    /* catch() { ... } // from try @ 009d5bdc with catch @ 009d80bc */
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
    pvVar3 = local_40;
  }
                    /* catch() { ... } // from try @ 009d5ad0 with catch @ 009d80c0 */
                    /* catch() { ... } // from try @ 009d54e4 with catch @ 009d80c4 */
                    /* catch() { ... } // from try @ 009d53dc with catch @ 009d80c8 */
  lua_pushlstring(param_1,pvVar3,uVar1);
                    /* catch() { ... } // from try @ 009d52bc with catch @ 009d80cc */
                    /* catch() { ... } // from try @ 009d51c0 with catch @ 009d80d0 */
  if ((local_50[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 009d4e44 with catch @ 009d80d4 */
                    /* catch() { ... } // from try @ 009d4d48 with catch @ 009d80d8 */
    operator_delete(local_40);
  }
                    /* catch() { ... } // from try @ 009d499c with catch @ 009d80dc */
                    /* catch() { ... } // from try @ 009d4894 with catch @ 009d80e0 */
                    /* catch() { ... } // from try @ 009d4530 with catch @ 009d80e4 */
                    /* catch() { ... } // from try @ 009d4430 with catch @ 009d80e8 */
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 009d360c with catch @ 009d8104 */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 009d42ac with catch @ 009d80ec */
                    /* catch() { ... } // from try @ 009d41b0 with catch @ 009d80f0 */
                    /* catch() { ... } // from try @ 009d3f74 with catch @ 009d80f4 */
                    /* catch() { ... } // from try @ 009d3e0c with catch @ 009d80f8 */
                    /* catch() { ... } // from try @ 009d39bc with catch @ 009d80fc */
                    /* catch() { ... } // from try @ 009d38b0 with catch @ 009d8100 */
  return 1;
}

