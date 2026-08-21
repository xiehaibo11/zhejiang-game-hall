
undefined8 luaopen_pb(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined *local_190;
  code *pcStack_188;
  char *pcStack_180;
  code *pcStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 auStack_158 [288];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  memcpy(auStack_158,&PTR_s_pack_014009fb_0xa_016a1650,0x120);
  pcStack_188 = FUN_009f97d8;
  local_190 = &DAT_012b4a80;
  pcStack_178 = FUN_009f9724;
  pcStack_180 = "setdefault";
  uStack_168 = 0;
  local_170 = 0;
  iVar2 = luaL_newmetatable(param_1,"pb.State");
  if (iVar2 != 0) {
    luaL_register(param_1,0,&local_190);
    lua_pushvalue(param_1,0xffffffff);
    lua_setfield(param_1,0xfffffffe,"__index");
  }
  lua_createtable(param_1,0,0);
  luaL_register(param_1,0,auStack_158);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

