
void FUN_00917cbc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_90 [7];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = auxiliar_checkgroup(param_1,"tcp{any}",1);
  uVar3 = luaL_checklstring(param_1,2,0);
  uVar4 = luaL_checklstring(param_1,3,0);
  local_90[3] = 0;
  local_90[2] = 0;
  local_90[5] = 0;
  local_90[4] = 0;
  local_90[1] = 1;
                    /* try { // try from 00917d48 to 00a17d7b has its CatchHandler @ 00917e48 */
  local_90[0] = (ulong)*(uint *)(lVar2 + 0x2078) << 0x20;
  timeout_markstart(lVar2 + 0x2060);
  lVar2 = inet_tryconnect(lVar2,lVar2 + 0x2078,uVar3,uVar4,lVar2 + 0x2060,local_90);
                    /* try { // try from 00917d7c to 00a17d8f has its CatchHandler @ 00917e14 */
  auxiliar_setclass(param_1,"tcp{client}",1);
  if (lVar2 == 0) {
    lua_pushnumber(0x3ff0000000000000,param_1);
    uVar3 = 1;
  }
  else {
                    /* try { // try from 00917d94 to 00a17dc7 has its CatchHandler @ 00917e18 */
    lua_pushnil(param_1);
    lua_pushstring(param_1,lVar2);
    uVar3 = 2;
  }
                    /* try { // try from 00917dc8 to 00a17e63 has its CatchHandler @ 00917b40 */
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

