
undefined8 FUN_009d7f94(undefined8 param_1)

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
                    /* catch() { ... } // from try @ 009d7dd0 with catch @ 009d7fc4 */
                    /* catch() { ... } // from try @ 009d79b8 with catch @ 009d7fc8 */
                    /* catch() { ... } // from try @ 009d7538 with catch @ 009d7fcc */
                    /* catch() { ... } // from try @ 009d71e4 with catch @ 009d7fd0 */
    this = (Device *)
           luaL_argerror(param_1,0,"lua_universe_Device_getPackageName: expected 0 argument");
  }
                    /* catch() { ... } // from try @ 009d6ea0 with catch @ 009d7fd4 */
                    /* catch() { ... } // from try @ 009d6b18 with catch @ 009d7fd8 */
                    /* catch() { ... } // from try @ 009d6984 with catch @ 009d7fdc */
  universe::Device::getPackageName(this);
                    /* catch() { ... } // from try @ 009d67f0 with catch @ 009d7fe0 */
                    /* catch() { ... } // from try @ 009d6568 with catch @ 009d7fe4 */
                    /* catch() { ... } // from try @ 009d62b0 with catch @ 009d7fe8 */
                    /* catch() { ... } // from try @ 009d5dd4 with catch @ 009d7fec */
                    /* catch() { ... } // from try @ 009d5bc4 with catch @ 009d7ff0 */
  uVar1 = (ulong)(local_50[0] >> 1);
  pvVar3 = (void *)((ulong)local_50 | 1);
                    /* catch() { ... } // from try @ 009d54cc with catch @ 009d7ff4 */
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
    pvVar3 = local_40;
  }
                    /* catch() { ... } // from try @ 009d52a4 with catch @ 009d7ff8 */
                    /* catch() { ... } // from try @ 009d4e2c with catch @ 009d7ffc */
                    /* catch() { ... } // from try @ 009d4984 with catch @ 009d8000 */
  lua_pushlstring(param_1,pvVar3,uVar1);
                    /* catch() { ... } // from try @ 009d4518 with catch @ 009d8004 */
                    /* catch() { ... } // from try @ 009d4294 with catch @ 009d8008 */
  if ((local_50[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 009d3f5c with catch @ 009d800c */
                    /* catch() { ... } // from try @ 009d3b64 with catch @ 009d8010 */
    operator_delete(local_40);
  }
                    /* catch() { ... } // from try @ 009d39a4 with catch @ 009d8014 */
                    /* catch() { ... } // from try @ 009d35f4 with catch @ 009d8018 */
                    /* catch() { ... } // from try @ 009d32a8 with catch @ 009d801c */
                    /* catch() { ... } // from try @ 009d2f5c with catch @ 009d8020 */
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 009d18e8 with catch @ 009d803c */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 009d2bfc with catch @ 009d8024 */
                    /* catch() { ... } // from try @ 009d2918 with catch @ 009d8028 */
                    /* catch() { ... } // from try @ 009d26c0 with catch @ 009d802c */
                    /* catch() { ... } // from try @ 009d2178 with catch @ 009d8030 */
                    /* catch() { ... } // from try @ 009d1fb4 with catch @ 009d8034 */
                    /* catch() { ... } // from try @ 009d1bec with catch @ 009d8038 */
  return 1;
}

