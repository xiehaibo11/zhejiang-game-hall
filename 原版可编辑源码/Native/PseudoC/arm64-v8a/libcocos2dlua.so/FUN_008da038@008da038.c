
bool FUN_008da038(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 008d9c50 with catch @ 008da038 */
                    /* catch() { ... } // from try @ 008d9df4 with catch @ 008da048 */
                    /* catch() { ... } // from try @ 008d9f98 with catch @ 008da04c */
                    /* catch() { ... } // from try @ 008d9f7c with catch @ 008da050 */
  lVar2 = tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 008d9e7c with catch @ 008da054 */
                    /* catch() { ... } // from try @ 008d9d50 with catch @ 008da058 */
                    /* catch() { ... } // from try @ 008d9eec with catch @ 008da05c */
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* catch() { ... } // from try @ 008d9d60 with catch @ 008da08c */
    tolua_pushnumber((double)(long)*(int *)(lVar2 + 0xfc),param_1);
  }
  else {
                    /* catch() { ... } // from try @ 008d9e04 with catch @ 008da074 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GObject:getSortingOrder",iVar1,0);
  }
                    /* catch() { ... } // from try @ 008d9ec0 with catch @ 008da0a4 */
  return iVar1 == 0;
}

