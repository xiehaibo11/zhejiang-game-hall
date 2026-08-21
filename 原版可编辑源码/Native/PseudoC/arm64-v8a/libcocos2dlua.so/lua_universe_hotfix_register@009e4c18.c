
/* lua_universe_hotfix_register(lua_State*) */

undefined8 lua_universe_hotfix_register(lua_State *param_1)

{
  long lVar1;
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
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  universe::lua_get_universe_table(param_1);
  pcStack_a8 = FUN_009e4e4c;
  local_b0 = &DAT_012efc0f;
  pcStack_98 = FUN_009e500c;
  pcStack_a0 = "setListener";
  pcStack_88 = (code *)0x0;
  local_90 = (char *)0x0;
  universe::create_class(param_1,"Copy","un.Copy","un.Commander",FUN_009e5164,(luaL_Reg *)&local_b0)
  ;
                    /* try { // try from 009e4c8c to 00ae4c97 has its CatchHandler @ 009e4cd4 */
                    /* try { // try from 009e4c98 to 00ae4cdb has its CatchHandler @ 009e4aa4 */
  pcStack_a8 = FUN_009e537c;
  local_b0 = &DAT_012efc0f;
  pcStack_98 = FUN_009e553c;
  pcStack_a0 = "setListener";
  pcStack_88 = (code *)0x0;
  local_90 = (char *)0x0;
  universe::create_class
            (param_1,"Decompressor","un.Decompressor","un.Commander",FUN_009e5694,
             (luaL_Reg *)&local_b0);
                    /* catch() { ... } // from try @ 009e4b6c with catch @ 009e4ccc */
                    /* catch() { ... } // from try @ 009e4c8c with catch @ 009e4cd4 */
  pcStack_68 = FUN_009e5e54;
  local_70 = "setAcceptEncoding";
  pcStack_58 = FUN_009e5f5c;
  pcStack_60 = "setTaskPriority";
  uStack_48 = 0;
  local_50 = 0;
  pcStack_a8 = FUN_009e5894;
  local_b0 = &DAT_012efc0f;
  pcStack_98 = FUN_009e5ac0;
  pcStack_a0 = "setListener";
  pcStack_88 = FUN_009e5c20;
  local_90 = "setProgressListener";
  pcStack_78 = FUN_009e5d80;
  pcStack_80 = "setNeedDetailTime";
  universe::create_class
            (param_1,"Downloader","un.Downloader","un.Commander",FUN_009e6030,(luaL_Reg *)&local_b0)
  ;
  pcStack_68 = FUN_009e68f8;
  local_70 = "removeListener";
  pcStack_58 = FUN_009e69cc;
  pcStack_60 = "getThreadCount";
  uStack_48 = 0;
  local_50 = 0;
  pcStack_a8 = FUN_009e6350;
  local_b0 = &DAT_012efc0f;
  pcStack_98 = FUN_009e662c;
  pcStack_a0 = "commit";
  pcStack_88 = FUN_009e6670;
  local_90 = "addListener";
  pcStack_78 = FUN_009e67b8;
  pcStack_80 = "addProgressListener";
  universe::create_singleton(param_1,"downloader2",(luaL_Reg *)&local_b0);
  pcStack_a8 = FUN_009e6c18;
  local_b0 = &DAT_012efc0f;
  pcStack_98 = FUN_009e6dd8;
  pcStack_a0 = "setListener";
  pcStack_88 = FUN_009e6f30;
  local_90 = "setKey";
  pcStack_78 = (code *)0x0;
  pcStack_80 = (char *)0x0;
  universe::create_class
            (param_1,"Unzipper","un.Unzipper","un.Commander",FUN_009e7038,(luaL_Reg *)&local_b0);
  pcStack_a8 = FUN_009e72ac;
  local_b0 = &DAT_012efc0f;
  pcStack_98 = FUN_009e7480;
  pcStack_a0 = "setListener";
  pcStack_88 = (code *)0x0;
  local_90 = (char *)0x0;
  universe::create_class
            (param_1,"MergeFile","un.MergeFile","un.Commander",FUN_009e75d8,(luaL_Reg *)&local_b0);
  pcStack_a8 = FUN_009e77ec;
  local_b0 = &DAT_012efc0f;
  pcStack_98 = FUN_009e79ac;
  pcStack_a0 = "setListener";
  pcStack_88 = (code *)0x0;
  local_90 = (char *)0x0;
  universe::create_class(param_1,"Http","un.Http","un.Commander",FUN_009e7b04,(luaL_Reg *)&local_b0)
  ;
  lua_settop(param_1,0xfffffffe);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009e4e3c to 00ae4e8b has its CatchHandler @ 009e4e3c
                       catch() { ... } // from try @ 009e4e3c with catch @ 009e4e3c
                       catch() { ... } // from try @ 009e4eb4 with catch @ 009e4e3c
                       catch() { ... } // from try @ 009e4f20 with catch @ 009e4e3c */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

