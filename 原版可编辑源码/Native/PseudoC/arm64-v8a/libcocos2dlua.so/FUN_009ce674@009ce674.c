
undefined8 FUN_009ce674(undefined8 param_1)

{
  undefined **ppuVar1;
  long lVar2;
  int iVar3;
  ulong local_80;
  uint local_78;
  int iStack_74;
  undefined *apuStack_70 [2];
  char *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = lua_gettop();
                    /* try { // try from 009ce69c to 00ace6af has its CatchHandler @ 009ce734 */
  if (iVar3 != 1) {
                    /* try { // try from 009ce6b4 to 00ace6e7 has its CatchHandler @ 009ce738 */
    luaL_argerror(param_1,1,"expected 1 argument");
  }
  local_48 = lua_touserdata(param_1,0xffffd8ed);
  if (local_48 == 0) {
    luaL_error(param_1,"BUG: Unable to fetch CJSON configuration");
  }
                    /* try { // try from 009ce6e8 to 00ace783 has its CatchHandler @ 009ce4f0 */
  local_60 = (char *)luaL_checklstring(param_1,1,&local_80);
  local_40 = 0;
  pcStack_58 = local_60;
  if ((1 < local_80) && ((*local_60 == '\0' || (local_60[1] == '\0')))) {
    luaL_error(param_1,"JSON parser does not support UTF-16 or UTF-32");
  }
  local_50 = strbuf_new(local_80);
                    /* catch() { ... } // from try @ 009ce69c with catch @ 009ce734 */
                    /* catch() { ... } // from try @ 009ce6b4 with catch @ 009ce738 */
  FUN_009cf6a0(&local_60,&local_78);
  FUN_009cfda8(param_1,&local_60,&local_78);
  FUN_009cf6a0(&local_60,&local_78);
                    /* catch() { ... } // from try @ 009ce668 with catch @ 009ce768 */
  if (local_78 != 10) {
    strbuf_free(local_50);
    ppuVar1 = apuStack_70;
    if (local_78 != 0xc) {
      ppuVar1 = &PTR_s_T_OBJ_BEGIN_0169f670 + local_78;
    }
    luaL_error(param_1,"Expected %s but found %s at character %d","the end",*ppuVar1,iStack_74 + 1);
  }
  strbuf_free(local_50);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

