
undefined8 FUN_009d8124(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  Device *this;
  byte local_50 [8];
  ulong local_48;
  void *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 009d2930 with catch @ 009d8124 */
                    /* catch() { ... } // from try @ 009d282c with catch @ 009d8128 */
                    /* catch() { ... } // from try @ 009d26d8 with catch @ 009d812c */
                    /* catch() { ... } // from try @ 009d2570 with catch @ 009d8130 */
                    /* catch() { ... } // from try @ 009d1fcc with catch @ 009d8134 */
                    /* catch() { ... } // from try @ 009d1ec0 with catch @ 009d8138 */
  lVar2 = tpidr_el0;
                    /* catch() { ... } // from try @ 009d1c04 with catch @ 009d813c */
  local_38 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 009d1afc with catch @ 009d8140 */
                    /* catch() { ... } // from try @ 009d1900 with catch @ 009d8144 */
                    /* catch() { ... } // from try @ 009d1804 with catch @ 009d8148 */
  this = (Device *)lua_gettop();
                    /* catch() { ... } // from try @ 009d1560 with catch @ 009d814c */
  if ((int)this != 0) {
                    /* catch() { ... } // from try @ 009d1464 with catch @ 009d8150 */
                    /* catch() { ... } // from try @ 009d11d8 with catch @ 009d8154 */
                    /* catch() { ... } // from try @ 009d10d4 with catch @ 009d8158 */
                    /* catch() { ... } // from try @ 009d0e60 with catch @ 009d815c */
                    /* catch() { ... } // from try @ 009d0d58 with catch @ 009d8160 */
    this = (Device *)
           luaL_argerror(param_1,0,"lua_universe_Device_getNetEnvName: expected 0 argument");
  }
                    /* catch() { ... } // from try @ 009d074c with catch @ 009d8164 */
                    /* catch() { ... } // from try @ 009d0640 with catch @ 009d8168 */
                    /* catch() { ... } // from try @ 009d04d4 with catch @ 009d816c */
  universe::Device::getNetEnvName(this);
                    /* catch() { ... } // from try @ 009d03cc with catch @ 009d8170 */
                    /* catch() { ... } // from try @ 009cfdc8 with catch @ 009d8174 */
                    /* catch() { ... } // from try @ 009cfccc with catch @ 009d8178 */
                    /* catch() { ... } // from try @ 009cfb60 with catch @ 009d817c */
                    /* catch() { ... } // from try @ 009cfa44 with catch @ 009d8180 */
  uVar1 = (ulong)(local_50[0] >> 1);
  pvVar3 = (void *)((ulong)local_50 | 1);
                    /* catch() { ... } // from try @ 009d6b30 with catch @ 009d8184 */
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
    pvVar3 = local_40;
  }
                    /* catch() { ... } // from try @ 009d6aa8 with catch @ 009d8188 */
                    /* catch() { ... } // from try @ 009d699c with catch @ 009d818c */
                    /* catch() { ... } // from try @ 009d6914 with catch @ 009d8190 */
  lua_pushlstring(param_1,pvVar3,uVar1);
                    /* catch() { ... } // from try @ 009d5dec with catch @ 009d8194 */
                    /* catch() { ... } // from try @ 009d5d64 with catch @ 009d8198 */
  if ((local_50[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 009d3b7c with catch @ 009d819c */
                    /* catch() { ... } // from try @ 009d3af4 with catch @ 009d81a0 */
    operator_delete(local_40);
  }
                    /* catch() { ... } // from try @ 009d2190 with catch @ 009d81a4 */
                    /* catch() { ... } // from try @ 009d2108 with catch @ 009d81a8 */
                    /* catch() { ... } // from try @ 009cf07c with catch @ 009d81ac */
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

