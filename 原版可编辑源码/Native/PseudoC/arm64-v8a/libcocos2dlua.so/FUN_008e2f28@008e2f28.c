
bool FUN_008e2f28(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 008e2894 with catch @ 008e2f28 */
                    /* catch() { ... } // from try @ 008e27c8 with catch @ 008e2f2c */
                    /* catch() { ... } // from try @ 008e27ac with catch @ 008e2f30 */
                    /* catch() { ... } // from try @ 008e26ac with catch @ 008e2f34 */
                    /* catch() { ... } // from try @ 008e2690 with catch @ 008e2f38 */
                    /* catch() { ... } // from try @ 008e2604 with catch @ 008e2f3c */
                    /* catch() { ... } // from try @ 008e25e8 with catch @ 008e2f40 */
  lVar2 = tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 008e2b88 with catch @ 008e2f44 */
                    /* catch() { ... } // from try @ 008e2a50 with catch @ 008e2f48 */
                    /* catch() { ... } // from try @ 008e294c with catch @ 008e2f4c */
  iVar1 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 008e2878 with catch @ 008e2f50 */
  iVar1 = iVar1 + -1;
                    /* catch() { ... } // from try @ 008e2790 with catch @ 008e2f54 */
  if (iVar1 == 0) {
                    /* catch() { ... } // from try @ 008e2a14 with catch @ 008e2f7c */
                    /* catch() { ... } // from try @ 008e2910 with catch @ 008e2f80 */
                    /* catch() { ... } // from try @ 008e283c with catch @ 008e2f84 */
                    /* catch() { ... } // from try @ 008e2754 with catch @ 008e2f88 */
                    /* catch() { ... } // from try @ 008e2638 with catch @ 008e2f8c */
    tolua_pushnumber((double)(long)*(int *)(lVar2 + 0x304),param_1);
  }
  else {
                    /* catch() { ... } // from try @ 008e2674 with catch @ 008e2f58 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:getSelectionMode",iVar1,0);
                    /* catch() { ... } // from try @ 008e2b4c with catch @ 008e2f78 */
  }
  return iVar1 == 0;
}

