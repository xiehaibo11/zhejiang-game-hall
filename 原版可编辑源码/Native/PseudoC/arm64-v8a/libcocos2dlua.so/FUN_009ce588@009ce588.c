
undefined8 FUN_009ce588(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 auStack_58 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = lua_touserdata(param_1,0xffffd8ed);
  if (lVar3 == 0) {
    luaL_error(param_1,"BUG: Unable to fetch CJSON configuration");
  }
  iVar2 = lua_gettop(param_1);
  if (iVar2 != 1) {
    luaL_argerror(param_1,1,"expected 1 argument");
  }
  if (*(int *)(lVar3 + 0x538) == 0) {
    puVar4 = auStack_58;
    strbuf_init(auStack_58,0);
  }
  else {
    puVar4 = (undefined8 *)(lVar3 + 0x500);
    *(undefined4 *)(lVar3 + 0x50c) = 0;
  }
  FUN_009cec58(param_1,lVar3,0,puVar4);
  lua_pushlstring(param_1,*puVar4,(long)*(int *)((long)puVar4 + 0xc));
  if (*(int *)(lVar3 + 0x538) == 0) {
    strbuf_free(puVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009ce668 to 00ace69b has its CatchHandler @ 009ce768 */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

