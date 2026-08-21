
undefined8 luaopen_pb_slice(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  char *local_100;
  code *pcStack_f8;
  char *local_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  code *pcStack_d8;
  char *local_d0;
  code *pcStack_c8;
  char *pcStack_c0;
  code *pcStack_b8;
  char *local_b0;
  code *pcStack_a8;
  char *pcStack_a0;
  code *pcStack_98;
  char *local_90;
  code *pcStack_88;
  char *pcStack_80;
  code *pcStack_78;
  char *local_70;
  code *pcStack_68;
  char *pcStack_60;
  code *pcStack_58;
  char *local_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_28;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f7b60 with catch @ 009f7af0
                       catch(type#1 @ 00000000) { ... } // from try @ 009f7b90 with catch @ 009f7af0
                       catch(type#1 @ 00000000) { ... } // from try @ 009f7bc0 with catch @ 009f7af0
                       catch(type#1 @ 00000000) { ... } // from try @ 009f7be8 with catch @ 009f7af0
                       catch(type#1 @ 00000000) { ... } // from try @ 009f7c14 with catch @ 009f7af0
                        */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcStack_68 = FUN_009f7f4c;
  local_70 = "enter";
  pcStack_58 = FUN_009f80fc;
  pcStack_60 = "leave";
  pcStack_48 = FUN_009f8208;
  local_50 = "unpack";
  uStack_38 = 0;
  uStack_40 = 0;
  pcStack_a8 = FUN_009f75b8;
  local_b0 = "result";
  pcStack_98 = FUN_009f7dac;
  pcStack_a0 = "new";
  pcStack_88 = FUN_009f7cc8;
  local_90 = "reset";
  pcStack_78 = FUN_009f7e14;
  pcStack_80 = "level";
  pcStack_f8 = FUN_009f7bf8;
  local_100 = "__tostring";
  pcStack_e8 = FUN_009f7c64;
  local_f0 = "__len";
  pcStack_d8 = FUN_009f7cc8;
  puStack_e0 = &DAT_012b4a80;
  pcStack_c8 = FUN_009f7cc8;
  local_d0 = "delete";
  pcStack_b8 = FUN_009f7408;
  pcStack_c0 = "tohex";
  iVar2 = luaL_newmetatable(param_1,"pb.Slice");
                    /* try { // try from 009f7b58 to 00af7b5f has its CatchHandler @ 009f7c54 */
  if (iVar2 != 0) {
                    /* try { // try from 009f7b60 to 00af7b83 has its CatchHandler @ 009f7af0 */
    luaL_register(param_1,0,&local_100);
    lua_pushvalue(param_1,0xffffffff);
                    /* try { // try from 009f7b84 to 00af7b8f has its CatchHandler @ 009f7c54 */
    lua_setfield(param_1,0xfffffffe,"__index");
                    /* try { // try from 009f7b90 to 00af7bb7 has its CatchHandler @ 009f7af0 */
    lua_createtable(param_1,0,1);
    lua_pushcclosure(param_1,FUN_009f8958,0);
                    /* try { // try from 009f7bb8 to 00af7bbf has its CatchHandler @ 009f7c50 */
                    /* try { // try from 009f7bc0 to 00af7bdf has its CatchHandler @ 009f7af0 */
    lua_setfield(param_1,0xfffffffe,"__call");
    lua_setmetatable(param_1,0xfffffffe);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 009f7be0 to 00af7be7 has its CatchHandler @ 009f7c50 */
                    /* try { // try from 009f7be8 to 00af7c07 has its CatchHandler @ 009f7af0 */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

