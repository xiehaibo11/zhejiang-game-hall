
/* lua_cocos2dx_physics3d_Physics3DShape_getbtShape(lua_State*) */

undefined8 lua_cocos2dx_physics3d_Physics3DShape_getbtShape(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  btCollisionShape *pbVar5;
  
                    /* try { // try from 009b8024 to 00ab804b has its CatchHandler @ 009b7e9c */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pbVar5 = *(btCollisionShape **)(lVar2 + 0x28);
    if (pbVar5 == (btCollisionShape *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 009b8068 to 00ab812f has its CatchHandler @ 009b7e9c */
      pcVar4 = getLuaTypeName<btCollisionShape>(pbVar5,"btCollisionShape");
      tolua_pushusertype(param_1,pbVar5,pcVar4);
    }
    uVar3 = 1;
  }
  else {
                    /* try { // try from 009b804c to 00ab8067 has its CatchHandler @ 009b80f8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DShape:getbtShape",iVar1 + -1,0);
    uVar3 = 0;
  }
  return uVar3;
}

