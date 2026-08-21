
/* lua_dragonbones_Slot_getName(lua_State*) */

undefined8 lua_dragonbones_Slot_getName(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
                    /* catch() { ... } // from try @ 00956d4c with catch @ 00956e50 */
                    /* catch() { ... } // from try @ 00956da4 with catch @ 00956e54 */
                    /* catch() { ... } // from try @ 00956d80 with catch @ 00956e58 */
  lVar2 = tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 00956d20 with catch @ 00956e5c */
                    /* catch() { ... } // from try @ 00956d04 with catch @ 00956e60 */
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    lVar2 = *(long *)(lVar2 + 200);
    if ((*(byte *)(lVar2 + 0x20) & 1) == 0) {
      lVar2 = lVar2 + 0x21;
    }
    else {
      lVar2 = *(long *)(lVar2 + 0x30);
    }
    tolua_pushstring(param_1,lVar2);
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","db.Slot:getName"
               ,iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

