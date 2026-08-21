
void FUN_00918224(undefined8 param_1)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *__s;
  long local_d0 [6];
  undefined4 local_a0;
  uint uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 009181c0 with catch @ 00918258 */
  uVar4 = luaL_checklstring(param_1,1,0);
  uVar5 = luaL_checklstring(param_1,2,0);
  lVar6 = luaL_optlstring(param_1,3,0,0);
                    /* try { // try from 00918290 to 00a182db has its CatchHandler @ 00918290
                       catch() { ... } // from try @ 00918290 with catch @ 00918290
                       catch() { ... } // from try @ 009182e0 with catch @ 00918290 */
  uVar7 = luaL_optlstring(param_1,4,"0",0);
  uVar3 = inet_optfamily(param_1,5,"unspec");
  __s = (undefined4 *)lua_newuserdata(param_1,0x2080);
                    /* try { // try from 009182dc to 00a182df has its CatchHandler @ 00918314 */
                    /* try { // try from 009182e0 to 00a18327 has its CatchHandler @ 00918290 */
  memset(__s,0,0x2080);
  io_init(__s + 2,socket_send,socket_recv,socket_ioerror,__s);
  puVar1 = __s + 0x818;
                    /* catch() { ... } // from try @ 009182dc with catch @ 00918314 */
  timeout_init(0xbff0000000000000,0xbff0000000000000,puVar1);
                    /* try { // try from 00918328 to 00a183df has its CatchHandler @ 00918328
                       catch() { ... } // from try @ 00918328 with catch @ 00918328
                       catch() { ... } // from try @ 00918460 with catch @ 00918328 */
  buffer_init(__s + 10,__s + 2,puVar1);
  __s[0x81e] = 0;
  *__s = 0xffffffff;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_98 = 1;
  local_a0 = 1;
  uStack_9c = uVar3;
  if (lVar6 == 0) {
LAB_0091839c:
    local_d0[3] = 0;
    local_d0[2] = 0;
    local_d0[5] = 0;
    local_d0[4] = 0;
    local_d0[0] = (ulong)uStack_9c << 0x20;
    local_d0[1] = 1;
    lVar6 = inet_tryconnect(__s,__s + 0x81e,uVar4,uVar5,puVar1,local_d0);
    if (lVar6 == 0) {
      auxiliar_setclass(param_1,"tcp{client}",0xffffffff);
      uVar4 = 1;
      goto LAB_00918408;
    }
    socket_destroy(__s);
    lua_pushnil(param_1);
                    /* try { // try from 009183e0 to 00a18413 has its CatchHandler @ 009184e0 */
  }
  else {
    lVar6 = inet_trybind(__s,lVar6,uVar7,&local_a0);
    if (lVar6 == 0) {
      __s[0x81e] = uStack_9c;
      goto LAB_0091839c;
    }
    lua_pushnil(param_1);
  }
  lua_pushstring(param_1,lVar6);
  uVar4 = 2;
LAB_00918408:
                    /* try { // try from 00918414 to 00a18427 has its CatchHandler @ 009184ac */
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0091842c to 00a1845f has its CatchHandler @ 009184b0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

