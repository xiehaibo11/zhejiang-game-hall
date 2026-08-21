
/* lua_dragonbones_Armature_getName(lua_State*) */

undefined8 lua_dragonbones_Armature_getName(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
                    /* catch() { ... } // from try @ 00953fe4 with catch @ 0095401c */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 00954030 to 00a5421f has its CatchHandler @ 00954030
                       catch() { ... } // from try @ 00954030 with catch @ 00954030
                       catch() { ... } // from try @ 009542a0 with catch @ 00954030 */
  if (iVar1 + -1 == 0) {
    lVar2 = *(long *)(lVar2 + 0x20);
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
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d2412,
               iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

