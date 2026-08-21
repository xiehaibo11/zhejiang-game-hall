
/* lua_dragonbones_AnimationState_getName(lua_State*) */

undefined8 lua_dragonbones_AnimationState_getName(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    if ((*(byte *)(lVar2 + 0x30) & 1) == 0) {
      lVar2 = lVar2 + 0x31;
    }
    else {
                    /* try { // try from 009558bc to 00a558cf has its CatchHandler @ 00955910 */
      lVar2 = *(long *)(lVar2 + 0x40);
    }
    tolua_pushstring(param_1,lVar2);
    uVar3 = 1;
  }
  else {
                    /* try { // try from 0095588c to 00a558bb has its CatchHandler @ 009557d8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "db.AnimationState:getName",iVar1 + -1,0);
    uVar3 = 0;
  }
                    /* try { // try from 009558d0 to 00a5592b has its CatchHandler @ 009557d8 */
  return uVar3;
}

