
undefined8 FUN_008e2ea0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 008e2c68 with catch @ 008e2ecc */
  if (iVar1 + -1 == 0) {
                    /* catch() { ... } // from try @ 008e2aac with catch @ 008e2ef4 */
                    /* catch() { ... } // from try @ 008e29d0 with catch @ 008e2ef8 */
    if ((*(byte *)(lVar2 + 0x308) & 1) == 0) {
                    /* catch() { ... } // from try @ 008e29a8 with catch @ 008e2efc */
      lVar4 = lVar2 + 0x309;
                    /* catch() { ... } // from try @ 008e26d0 with catch @ 008e2f00 */
      uVar5 = (ulong)(*(byte *)(lVar2 + 0x308) >> 1);
                    /* catch() { ... } // from try @ 008e28f0 with catch @ 008e2f04 */
    }
    else {
                    /* catch() { ... } // from try @ 008e27f4 with catch @ 008e2f08 */
      lVar4 = *(long *)(lVar2 + 0x318);
                    /* catch() { ... } // from try @ 008e2bc0 with catch @ 008e2f0c */
      uVar5 = *(ulong *)(lVar2 + 0x310);
    }
                    /* catch() { ... } // from try @ 008e2ba4 with catch @ 008e2f10 */
                    /* catch() { ... } // from try @ 008e2a88 with catch @ 008e2f14 */
    lua_pushlstring(param_1,lVar4,uVar5,0);
                    /* catch() { ... } // from try @ 008e2a6c with catch @ 008e2f18 */
    uVar3 = 1;
  }
  else {
                    /* catch() { ... } // from try @ 008e2c38 with catch @ 008e2ed0 */
                    /* catch() { ... } // from try @ 008e2c1c with catch @ 008e2ed4 */
                    /* catch() { ... } // from try @ 008e2b10 with catch @ 008e2ed8 */
                    /* catch() { ... } // from try @ 008e2ae4 with catch @ 008e2edc */
                    /* catch() { ... } // from try @ 008e2c00 with catch @ 008e2ee0 */
                    /* catch() { ... } // from try @ 008e2ac8 with catch @ 008e2ee4 */
                    /* catch() { ... } // from try @ 008e2714 with catch @ 008e2ee8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:getDefaultItem",iVar1 + -1,0);
                    /* catch() { ... } // from try @ 008e26ec with catch @ 008e2eec */
    uVar3 = 0;
                    /* catch() { ... } // from try @ 008e2be4 with catch @ 008e2ef0 */
  }
                    /* catch() { ... } // from try @ 008e2984 with catch @ 008e2f1c */
                    /* catch() { ... } // from try @ 008e2968 with catch @ 008e2f20 */
                    /* catch() { ... } // from try @ 008e28b4 with catch @ 008e2f24 */
  return uVar3;
}

