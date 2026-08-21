
undefined8 FUN_009181ac(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
                    /* try { // try from 009181c0 to 00a181db has its CatchHandler @ 00918258 */
  uVar2 = auxiliar_checkclass(param_1,"tcp{client}",1);
                    /* try { // try from 009181dc to 00a1828f has its CatchHandler @ 00918174 */
  uVar1 = luaL_checkoption(param_1,2,0x12c5a1a,&DAT_01769378);
  socket_shutdown(uVar2,uVar1);
  lua_pushnumber(0x3ff0000000000000,param_1);
  return 1;
}

