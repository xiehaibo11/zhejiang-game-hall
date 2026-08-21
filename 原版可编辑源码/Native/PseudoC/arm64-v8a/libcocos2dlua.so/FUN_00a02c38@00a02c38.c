
undefined8 FUN_00a02c38(lua_State *param_1)

{
  int iVar1;
  GuoPengFei *this;
  
  iVar1 = lua_gettop();
                    /* try { // try from 00a02c4c to 00b02c53 has its CatchHandler @ 00a02c68 */
  if (iVar1 != 0) {
                    /* try { // try from 00a02c54 to 00b02caf has its CatchHandler @ 00a028bc */
    luaL_argerror(param_1,0,&DAT_012f6a45);
  }
                    /* catch() { ... } // from try @ 00a02b28 with catch @ 00a02c68
                       catch() { ... } // from try @ 00a02c4c with catch @ 00a02c68 */
  this = operator_new(0x4b0);
                    /* catch() { ... } // from try @ 00a02a74 with catch @ 00a02c6c
                       catch() { ... } // from try @ 00a02c34 with catch @ 00a02c6c */
                    /* catch() { ... } // from try @ 00a02a54 with catch @ 00a02c70 */
  universe::network::GuoPengFei::GuoPengFei(this);
                    /* catch() { ... } // from try @ 00a0297c with catch @ 00a02c74
                       catch() { ... } // from try @ 00a02c1c with catch @ 00a02c74 */
                    /* catch() { ... } // from try @ 00a02b04 with catch @ 00a02c78 */
                    /* catch() { ... } // from try @ 00a02ae8 with catch @ 00a02c7c */
                    /* catch() { ... } // from try @ 00a0295c with catch @ 00a02c80 */
                    /* catch() { ... } // from try @ 00a029cc with catch @ 00a02c84
                       catch() { ... } // from try @ 00a02c10 with catch @ 00a02c84 */
  universe::create_instance(param_1,"un.network.TcpConnection",this);
                    /* catch() { ... } // from try @ 00a02a30 with catch @ 00a02c88 */
                    /* catch() { ... } // from try @ 00a02a14 with catch @ 00a02c8c */
                    /* catch() { ... } // from try @ 00a029b0 with catch @ 00a02c90 */
                    /* catch() { ... } // from try @ 00a02940 with catch @ 00a02c94 */
  return 1;
}

