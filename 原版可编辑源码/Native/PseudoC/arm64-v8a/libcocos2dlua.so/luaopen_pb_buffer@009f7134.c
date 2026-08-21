
undefined8 luaopen_pb_buffer(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  char *local_d0;
  code *pcStack_c8;
  char *pcStack_c0;
  code *pcStack_b8;
  undefined *local_b0;
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
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcStack_68 = FUN_009f76d4;
  local_70 = "new";
  pcStack_58 = FUN_009f72b0;
  pcStack_60 = "reset";
  pcStack_48 = FUN_009f7824;
  local_50 = "pack";
  uStack_38 = 0;
  uStack_40 = 0;
  pcStack_a8 = FUN_009f72b0;
  local_b0 = &DAT_012b4a80;
  pcStack_98 = FUN_009f72b0;
  pcStack_a0 = "delete";
  pcStack_88 = FUN_009f7408;
  local_90 = "tohex";
  pcStack_78 = FUN_009f75b8;
  pcStack_80 = "result";
  pcStack_c8 = FUN_009f7230;
  local_d0 = "__tostring";
  pcStack_b8 = FUN_009f7274;
  pcStack_c0 = "__len";
                    /* try { // try from 009f718c to 00af719b has its CatchHandler @ 009f722c */
  iVar2 = luaL_newmetatable(param_1,"pb.Buffer");
  if (iVar2 != 0) {
                    /* try { // try from 009f719c to 00af7247 has its CatchHandler @ 009f711c */
    luaL_register(param_1,0,&local_d0);
    lua_pushvalue(param_1,0xffffffff);
    lua_setfield(param_1,0xfffffffe,"__index");
    lua_createtable(param_1,0,1);
    lua_pushcclosure(param_1,FUN_009f799c,0);
    lua_setfield(param_1,0xfffffffe,"__call");
    lua_setmetatable(param_1,0xfffffffe);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 009f718c with catch @ 009f722c */
  __stack_chk_fail();
}

