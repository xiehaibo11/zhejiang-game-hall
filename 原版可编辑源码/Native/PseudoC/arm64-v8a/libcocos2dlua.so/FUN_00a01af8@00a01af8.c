
undefined8 FUN_00a01af8(lua_State *param_1)

{
  long lVar1;
  void *__src;
  int iVar2;
  ulong uVar3;
  GuoPengFei *pGVar4;
  ulong uVar5;
  void *__dest;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong local_90 [2];
  void *local_80;
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  int local_60;
  int local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 5) {
    luaL_argerror(param_1,5,"lua_universe_network_TcpConnection_connect: expected 5 argument");
  }
  uVar3 = universe::is_class(param_1,1,"un.network.TcpConnection");
  if ((uVar3 & 1) == 0) {
    luaL_error(param_1,"lua_universe_network_TcpConnection_connect: invalid \'cobj\'");
                    /* try { // try from 00a01c20 to 00b01c33 has its CatchHandler @ 00a01cb8 */
    goto LAB_00a01cd0;
  }
  pGVar4 = (GuoPengFei *)universe::get_instance(param_1,1);
  uStack_70 = 0;
  local_68 = (void *)0x0;
  local_80 = (void *)0x0;
  local_78 = 0;
  local_90[0] = 0;
  local_90[1] = 0;
  uVar3 = universe::get_int(param_1,2,&local_5c,"lua_universe_network_TcpConnection_connect");
  if (((((uVar3 & 1) != 0) &&
       (uVar3 = universe::get_string
                          (param_1,3,(basic_string *)&local_78,
                           "lua_universe_network_TcpConnection_connect"), (uVar3 & 1) != 0)) &&
      (uVar3 = universe::get_string
                         (param_1,4,(basic_string *)local_90,
                          "lua_universe_network_TcpConnection_connect"), (uVar3 & 1) != 0)) &&
     (uVar5 = universe::get_int(param_1,5,&local_60,"lua_universe_network_TcpConnection_connect"),
     __src = local_68, uVar3 = uStack_70, (uVar5 & 1) != 0)) {
                    /* try { // try from 00a01bec to 00b01c1f has its CatchHandler @ 00a01cec */
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = (void *)0x0;
    if ((local_78 & 1) == 0) {
      uStack_a8 = uStack_70;
      local_b0 = local_78;
      local_a0 = local_68;
    }
    else {
      if (0xffffffffffffffef < uStack_70) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
                    /* try { // try from 00a01c38 to 00b01c6b has its CatchHandler @ 00a01cbc */
      if (uStack_70 < 0x17) {
        __dest = (void *)((ulong)&local_b0 | 1);
        local_b0 = (ulong)(byte)((int)uStack_70 << 1);
        if (uStack_70 != 0) goto LAB_00a01c74;
      }
      else {
        uVar5 = uStack_70 + 0x10 & 0xfffffffffffffff0;
        __dest = operator_new(uVar5);
        local_b0 = uVar5 | 1;
                    /* try { // try from 00a01c6c to 00b01d07 has its CatchHandler @ 00a019cc */
        uStack_a8 = uVar3;
        local_a0 = __dest;
LAB_00a01c74:
        memcpy(__dest,__src,uVar3);
      }
      *(undefined1 *)((long)__dest + uVar3) = 0;
    }
    universe::network::GuoPengFei::connect(pGVar4,local_5c,&local_b0,local_90,local_60);
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
  }
  if ((local_90[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 00a01c20 with catch @ 00a01cb8 */
                    /* catch() { ... } // from try @ 00a01c38 with catch @ 00a01cbc */
    operator_delete(local_80);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
LAB_00a01cd0:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00a01bec with catch @ 00a01cec */
  return 0;
}

