
int FUN_0090ef04(lua_State *param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  WebSocket *this;
  bool bVar10;
  ulong local_a0;
  undefined8 local_98;
  void *local_90;
  byte *local_88;
  byte *local_80;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_68;
  void *local_60;
  undefined1 auStack_58 [16];
  long local_48;
  
                    /* catch() { ... } // from try @ 0090ee04 with catch @ 0090ef1c */
  lVar2 = tpidr_el0;
                    /* catch() { ... } // from try @ 0090edd8 with catch @ 0090ef20 */
  local_48 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 0090ee60 with catch @ 0090ef24 */
                    /* catch() { ... } // from try @ 0090ee2c with catch @ 0090ef28 */
                    /* catch() { ... } // from try @ 0090eda4 with catch @ 0090ef2c */
  iVar7 = lua_gettop();
  if (1 < iVar7) {
    local_68 = 0;
    local_60 = (void *)0x0;
    local_78 = 0;
    local_70 = 0;
    local_88 = (byte *)0x0;
    local_80 = (byte *)0x0;
                    /* try { // try from 0090ef48 to 00a0efa3 has its CatchHandler @ 0090ef48
                       catch() { ... } // from try @ 0090ef48 with catch @ 0090ef48
                       catch() { ... } // from try @ 0090f070 with catch @ 0090ef48 */
    local_98 = 0;
    local_90 = (void *)0x0;
    local_a0 = 0;
    iVar8 = tolua_isusertable(param_1,1,"cc.WebSocket",0,auStack_58);
    if ((iVar8 == 0) || (iVar8 = tolua_isstring(param_1,2,0,auStack_58), iVar8 == 0)) {
LAB_0090f02c:
      bVar10 = true;
    }
    else {
      if (iVar7 == 4) {
                    /* try { // try from 0090efd8 to 00a0efef has its CatchHandler @ 0090f11c */
        iVar8 = tolua_istable(param_1,3,0,auStack_58);
        if ((iVar8 == 0) || (iVar8 = tolua_isstring(param_1,4,0,auStack_58), iVar8 == 0))
        goto LAB_0090f02c;
                    /* try { // try from 0090f000 to 00a0f017 has its CatchHandler @ 0090f118 */
        luaval_to_std_vector_string(param_1,3,(vector *)&local_88,"cc.WebSocket.create");
        luaval_to_std_string(param_1,4,(basic_string *)&local_a0,"");
                    /* try { // try from 0090f028 to 00a0f03f has its CatchHandler @ 0090f124 */
      }
      else if (iVar7 == 3) {
        iVar7 = lua_type(param_1,3);
                    /* try { // try from 0090efa4 to 00a0efbf has its CatchHandler @ 0090f128 */
        if (iVar7 == 5) {
          luaval_to_std_vector_string(param_1,3,(vector *)&local_88,"cc.WebSocket.create");
        }
        else {
          iVar7 = lua_isstring(param_1,3);
          if (iVar7 == 0) {
            luaL_error(param_1,
                       "The second parameter should be a table contains protocols of string type or a string indicates ca certificate path!"
                      );
            bVar10 = false;
            iVar7 = 0;
            goto joined_r0x0090f204;
          }
          luaval_to_std_string(param_1,3,(basic_string *)&local_a0,"");
        }
      }
                    /* catch() { ... } // from try @ 0090f000 with catch @ 0090f118 */
                    /* catch() { ... } // from try @ 0090efd8 with catch @ 0090f11c */
                    /* catch() { ... } // from try @ 0090f05c with catch @ 0090f120 */
                    /* catch() { ... } // from try @ 0090f028 with catch @ 0090f124 */
                    /* catch() { ... } // from try @ 0090efa4 with catch @ 0090f128 */
      luaval_to_std_string(param_1,2,(basic_string *)&local_70,"");
      this = operator_new(0x160,(nothrow_t *)&std::nothrow);
      if (this != (WebSocket *)0x0) {
                    /* try { // try from 0090f144 to 00a0f197 has its CatchHandler @ 0090f144
                       catch() { ... } // from try @ 0090f144 with catch @ 0090f144
                       catch() { ... } // from try @ 0090f214 with catch @ 0090f144
                       catch() { ... } // from try @ 0090f258 with catch @ 0090f144 */
        *(undefined8 *)(this + 0x148) = 0;
        *(undefined8 *)(this + 0x140) = 0;
        *(undefined8 *)(this + 0x158) = 0;
        *(undefined8 *)(this + 0x150) = 0;
        *(undefined8 *)(this + 0x128) = 0;
        *(undefined8 *)(this + 0x120) = 0;
        *(undefined8 *)(this + 0x138) = 0;
        *(undefined8 *)(this + 0x130) = 0;
        *(undefined8 *)(this + 0x108) = 0;
        *(undefined8 *)(this + 0x100) = 0;
        *(undefined8 *)(this + 0x118) = 0;
        *(undefined8 *)(this + 0x110) = 0;
        *(undefined8 *)(this + 0xe8) = 0;
        *(undefined8 *)(this + 0xe0) = 0;
        *(undefined8 *)(this + 0xf8) = 0;
        *(undefined8 *)(this + 0xf0) = 0;
        *(undefined8 *)(this + 200) = 0;
        *(undefined8 *)(this + 0xc0) = 0;
        *(undefined8 *)(this + 0xd8) = 0;
        *(undefined8 *)(this + 0xd0) = 0;
        *(undefined8 *)(this + 0xa8) = 0;
        *(undefined8 *)(this + 0xa0) = 0;
        *(undefined8 *)(this + 0xb8) = 0;
        *(undefined8 *)(this + 0xb0) = 0;
        *(undefined8 *)(this + 0x88) = 0;
        *(undefined8 *)(this + 0x80) = 0;
        *(undefined8 *)(this + 0x98) = 0;
        *(undefined8 *)(this + 0x90) = 0;
        *(undefined8 *)(this + 0x68) = 0;
        *(undefined8 *)(this + 0x60) = 0;
        *(undefined8 *)(this + 0x78) = 0;
        *(undefined8 *)(this + 0x70) = 0;
        *(undefined8 *)(this + 0x48) = 0;
        *(undefined8 *)(this + 0x40) = 0;
        *(undefined8 *)(this + 0x58) = 0;
        *(undefined8 *)(this + 0x50) = 0;
        *(undefined8 *)(this + 0x28) = 0;
        *(undefined8 *)(this + 0x20) = 0;
        *(undefined8 *)(this + 0x38) = 0;
        *(undefined8 *)(this + 0x30) = 0;
        *(undefined8 *)(this + 8) = 0;
        *(undefined8 *)this = 0;
        *(undefined8 *)(this + 0x18) = 0;
        *(undefined8 *)(this + 0x10) = 0;
        cocos2d::network::WebSocket::WebSocket(this);
        *(undefined ***)this = &PTR__LuaWebSocket_0169c210;
        *(undefined ***)(this + 0x158) = &PTR__LuaWebSocket_0169c250;
      }
                    /* try { // try from 0090f198 to 00a0f213 has its CatchHandler @ 0090f29c */
      cocos2d::network::WebSocket::init
                (this,(Delegate *)(this + 0x158),(basic_string *)&local_70,(vector *)&local_88,
                 (basic_string *)&local_a0);
      tolua_pushusertype(param_1,this,"cc.WebSocket");
      uVar9 = lua_gettop(param_1);
      tolua_register_gc(param_1,uVar9);
      bVar10 = false;
      iVar7 = 1;
    }
joined_r0x0090f204:
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    pbVar5 = local_88;
    if (local_88 != (byte *)0x0) {
      if (local_80 != local_88) {
        bVar1 = local_80[-0x18];
        pbVar6 = local_80 + -0x18;
        pbVar4 = local_80;
        while( true ) {
          pbVar3 = pbVar6;
                    /* try { // try from 0090f05c to 00a0f06f has its CatchHandler @ 0090f120 */
          if ((bVar1 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -8));
          }
          if (pbVar5 == pbVar3) break;
          bVar1 = pbVar3[-0x18];
                    /* try { // try from 0090f070 to 00a0f143 has its CatchHandler @ 0090ef48 */
          pbVar6 = pbVar3 + -0x18;
          pbVar4 = pbVar3;
        }
      }
      local_80 = pbVar5;
      operator_delete(local_88);
    }
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if (!bVar10) goto LAB_0090f0c0;
  }
  tolua_error(param_1,"#ferror in function \'create\'.",auStack_58);
  iVar7 = 0;
LAB_0090f0c0:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}

