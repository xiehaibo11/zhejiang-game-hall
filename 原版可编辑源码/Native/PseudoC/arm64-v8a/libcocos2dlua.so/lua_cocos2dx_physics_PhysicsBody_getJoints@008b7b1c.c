
/* lua_cocos2dx_physics_PhysicsBody_getJoints(lua_State*) */

undefined8 lua_cocos2dx_physics_PhysicsBody_getJoints(lua_State *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  long *plVar6;
  long lVar7;
  PhysicsJoint *pPVar8;
  
                    /* try { // try from 008b7b20 to 009b7b37 has its CatchHandler @ 008b7b88 */
                    /* try { // try from 008b7b38 to 009b7ba3 has its CatchHandler @ 008b7ac8 */
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 0) {
    lua_createtable(param_1,0,0,0);
                    /* catch() { ... } // from try @ 008b7b20 with catch @ 008b7b88 */
    plVar1 = *(long **)(lVar3 + 0x50);
    plVar6 = *(long **)(lVar3 + 0x58);
    if (plVar1 != plVar6) {
      iVar2 = 1;
      lVar7 = *plVar1;
      while( true ) {
                    /* try { // try from 008b7ba4 to 009b7bfb has its CatchHandler @ 008b7ba4
                       catch() { ... } // from try @ 008b7ba4 with catch @ 008b7ba4
                       catch() { ... } // from try @ 008b7c14 with catch @ 008b7ba4 */
        if (lVar7 != 0) {
          lua_pushnumber((double)iVar2,param_1);
          pPVar8 = (PhysicsJoint *)*plVar1;
          pcVar5 = getLuaTypeName<cocos2d::PhysicsJoint>(pPVar8,"cc.PhysicsJoint");
          tolua_pushusertype(param_1,pPVar8,pcVar5);
          lua_rawset(param_1,0xfffffffd);
          plVar6 = *(long **)(lVar3 + 0x58);
          iVar2 = iVar2 + 1;
                    /* try { // try from 008b7bfc to 009b7c13 has its CatchHandler @ 008b7c64 */
        }
        plVar1 = plVar1 + 1;
        if (plVar1 == plVar6) break;
        lVar7 = *plVar1;
      }
    }
    uVar4 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","getJoints",
               iVar2 + -1,0);
    uVar4 = 0;
  }
                    /* try { // try from 008b7c14 to 009b7c7f has its CatchHandler @ 008b7ba4 */
  return uVar4;
}

