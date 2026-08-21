
/* lua_universe_core_register(lua_State*) */

undefined8 lua_universe_core_register(lua_State *param_1)

{
  long lVar1;
  char *local_240;
  code *pcStack_238;
  char *pcStack_230;
  code *pcStack_228;
  char *local_220;
  code *pcStack_218;
  char *pcStack_210;
  code *pcStack_208;
  char *local_200;
  code *pcStack_1f8;
  char *pcStack_1f0;
  code *pcStack_1e8;
  char *local_1e0;
  code *pcStack_1d8;
  undefined *local_1d0;
  code *pcStack_1c8;
  char *local_1c0;
  code *pcStack_1b8;
  char *pcStack_1b0;
  code *pcStack_1a8;
  char *local_1a0;
  code *pcStack_198;
  char *pcStack_190;
  code *pcStack_188;
  char *local_180;
  code *pcStack_178;
  char *pcStack_170;
  code *pcStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009d6f24 to 00ad70ef has its CatchHandler @ 009cee70 */
  universe::lua_get_universe_table(param_1);
  memcpy(&local_240,&PTR_s_getOsName_0169fac0,0x200);
  universe::create_singleton(param_1,"Device",(luaL_Reg *)&local_240);
  pcStack_238 = FUN_009d9208;
  local_240 = "GB_18030_2000_TO_UTF8";
  pcStack_228 = FUN_009d931c;
  pcStack_230 = "UTF8_TO_GB_18030_2000";
  pcStack_218 = (code *)0x0;
  local_220 = (char *)0x0;
  universe::create_singleton(param_1,"StringUtils",(luaL_Reg *)&local_240);
  if (DAT_01782208 == 0) {
    DAT_01782208 = universe::TanGaoXiong::getInstance();
  }
  luaL_newmetatable(param_1,"directory metatable");
  lua_createtable(param_1,0,0);
  lua_pushcclosure(param_1,FUN_009da3d8,0);
  lua_setfield(param_1,0xfffffffe,"next");
  lua_pushcclosure(param_1,FUN_009da458,0);
  lua_setfield(param_1,0xfffffffe,"close");
  lua_setfield(param_1,0xfffffffe,"__index");
  lua_pushcclosure(param_1,FUN_009da458,0);
  lua_setfield(param_1,0xfffffffe,&DAT_012b4a80);
  lua_settop(param_1,0xfffffffe);
  pcStack_178 = FUN_009da18c;
  local_180 = "getAttributes";
  pcStack_168 = FUN_009da324;
  pcStack_170 = "dir";
  pcStack_198 = FUN_009d9fcc;
  local_1a0 = "isDirectoryExist";
  pcStack_188 = FUN_009da0b8;
  pcStack_190 = "getWritePath";
  pcStack_1b8 = FUN_009d9de4;
  local_1c0 = "createDirectory";
  pcStack_1a8 = FUN_009d9ed8;
  pcStack_1b0 = "removeDirectory";
  pcStack_1f8 = FUN_009d99d0;
  local_200 = "removeFile";
  pcStack_1e8 = FUN_009d9abc;
  pcStack_1f0 = "renameFile";
  uStack_158 = 0;
  local_160 = 0;
  pcStack_1c8 = FUN_009d9cf0;
  local_1d0 = &DAT_012f236f;
  pcStack_1d8 = FUN_009d9c04;
  local_1e0 = "isFileExist";
  pcStack_238 = FUN_009d9430;
  local_240 = "writeStringToFile";
  pcStack_228 = FUN_009d95c4;
  pcStack_230 = "writeStringToFileWithCallback";
  pcStack_218 = FUN_009d9788;
  local_220 = "readStringFromFile";
  pcStack_208 = FUN_009d98dc;
  pcStack_210 = "getFileSize";
  universe::create_singleton(param_1,"FileSystem",(luaL_Reg *)&local_240);
  pcStack_218 = FUN_009da84c;
  local_220 = "md5Encode";
  pcStack_208 = FUN_009da9ac;
  pcStack_210 = "getMd5OfFile";
  pcStack_1f8 = FUN_009daaf8;
  local_200 = "getVersion";
  pcStack_1e8 = (code *)0x0;
  pcStack_1f0 = (char *)0x0;
  pcStack_238 = FUN_009da568;
  local_240 = "sign";
  pcStack_228 = FUN_009da774;
  pcStack_230 = "hash";
  universe::set_functions(param_1,(luaL_Reg *)&local_240);
                    /* try { // try from 009d70f0 to 00ad715b has its CatchHandler @ 009d8098 */
  pcStack_238 = FUN_009dabe8;
  local_240 = "isAllTaskComplete";
  pcStack_228 = FUN_009dac7c;
  pcStack_230 = "removeWhenAllTaskComplete";
  pcStack_218 = (code *)0x0;
  local_220 = (char *)0x0;
  universe::create_class
            (param_1,"Commander","un.Commander",(char *)0x0,FUN_009dacf8,(luaL_Reg *)&local_240);
  un_luaopen_bit(param_1);
  lua_setfield(param_1,0xfffffffe,"bit");
  lua_settop(param_1,0xfffffffe);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

