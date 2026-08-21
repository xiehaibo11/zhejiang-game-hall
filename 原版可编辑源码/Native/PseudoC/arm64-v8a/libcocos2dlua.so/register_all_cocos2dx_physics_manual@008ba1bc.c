
/* register_all_cocos2dx_physics_manual(lua_State*) */

undefined8 register_all_cocos2dx_physics_manual(lua_State *param_1)

{
  int iVar1;
  
                    /* try { // try from 008ba1cc to 009ba1e3 has its CatchHandler @ 008ba234 */
  lua_pushstring(param_1,"cc.PhysicsBody");
  lua_rawget(param_1,0xffffd8f0);
                    /* try { // try from 008ba1e4 to 009ba24f has its CatchHandler @ 008ba174 */
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
    lua_pushstring(param_1,"getJoints");
    lua_pushcclosure(param_1,lua_cocos2dx_physics_PhysicsBody_getJoints,0);
    lua_rawset(param_1,0xfffffffd);
                    /* catch() { ... } // from try @ 008ba1cc with catch @ 008ba234 */
    lua_pushstring(param_1,"createPolygon");
    lua_pushcclosure(param_1,lua_cocos2dx_physics_PhysicsBody_createPolygon,0);
                    /* try { // try from 008ba250 to 009ba2a7 has its CatchHandler @ 008ba250
                       catch() { ... } // from try @ 008ba250 with catch @ 008ba250
                       catch() { ... } // from try @ 008ba2c0 with catch @ 008ba250 */
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"createEdgeChain");
    lua_pushcclosure(param_1,lua_cocos2dx_physics_PhysicsBody_createEdgeChain,0);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"createEdgePolygon");
                    /* try { // try from 008ba2a8 to 009ba2bf has its CatchHandler @ 008ba310 */
    lua_pushcclosure(param_1,lua_cocos2dx_physics_PhysicsBody_createEdgePolygon,0);
    lua_rawset(param_1,0xfffffffd);
  }
                    /* try { // try from 008ba2c0 to 009ba32b has its CatchHandler @ 008ba250 */
  lua_settop(param_1,0xfffffffe);
  lua_pushstring(param_1,"cc.PhysicsShape");
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
    lua_pushstring(param_1,"recenterPoints");
                    /* catch() { ... } // from try @ 008ba2a8 with catch @ 008ba310 */
    lua_pushcclosure(param_1,lua_cocos2dx_physics_PhysicsShape_recenterPoints,0);
    lua_rawset(param_1,0xfffffffd);
                    /* try { // try from 008ba32c to 009ba383 has its CatchHandler @ 008ba32c
                       catch() { ... } // from try @ 008ba32c with catch @ 008ba32c
                       catch() { ... } // from try @ 008ba39c with catch @ 008ba32c */
    lua_pushstring(param_1,"getPolygonCenter");
    lua_pushcclosure(param_1,lua_cocos2dx_physics_PhysicsShape_getPolygonCenter,0);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"getPolyonCenter");
    lua_pushcclosure(param_1,lua_cocos2dx_physics_PhysicsShape_getPolygonCenter,0);
    lua_rawset(param_1,0xfffffffd);
  }
                    /* try { // try from 008ba384 to 009ba39b has its CatchHandler @ 008ba3ec */
  lua_settop(param_1,0xfffffffe);
                    /* try { // try from 008ba39c to 009ba407 has its CatchHandler @ 008ba32c */
  lua_pushstring(param_1,"cc.PhysicsShapeBox");
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
    lua_pushstring(param_1,"getPoints");
    lua_pushcclosure(param_1,lua_cocos2dx_physics_PhysicsShapeBox_getPoints,0);
                    /* catch() { ... } // from try @ 008ba384 with catch @ 008ba3ec */
    lua_rawset(param_1,0xfffffffd);
  }
  lua_settop(param_1,0xfffffffe);
                    /* try { // try from 008ba408 to 009ba45f has its CatchHandler @ 008ba408
                       catch() { ... } // from try @ 008ba408 with catch @ 008ba408
                       catch() { ... } // from try @ 008ba478 with catch @ 008ba408 */
  lua_pushstring(param_1,"cc.PhysicsShapeEdgeBox");
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
    lua_pushstring(param_1,"getPoints");
    lua_pushcclosure(param_1,lua_cocos2dx_physics_PhysicsShapeEdgeBox_getPoints,0);
    lua_rawset(param_1,0xfffffffd);
  }
                    /* try { // try from 008ba460 to 009ba477 has its CatchHandler @ 008ba4c8 */
  lua_settop(param_1,0xfffffffe);
  lua_pushstring(param_1,"cc.PhysicsShapePolygon");
                    /* try { // try from 008ba478 to 009ba4e3 has its CatchHandler @ 008ba408 */
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
    lua_pushstring(param_1,"getPoints");
    lua_pushcclosure(param_1,lua_cocos2dx_physics_PhysicsShapePolygon_getPoints,0);
    lua_rawset(param_1,0xfffffffd);
                    /* catch() { ... } // from try @ 008ba460 with catch @ 008ba4c8 */
    lua_pushstring(param_1,"create");
                    /* try { // try from 008ba4e4 to 009ba53b has its CatchHandler @ 008ba4e4
                       catch() { ... } // from try @ 008ba4e4 with catch @ 008ba4e4
                       catch() { ... } // from try @ 008ba554 with catch @ 008ba4e4 */
    lua_pushcclosure(param_1,lua_cocos2dx_physics_PhysicsShapePolygon_create,0);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"calculateArea");
    lua_pushcclosure(param_1,lua_cocos2dx_physics_PhysicsShapePolygon_calculateArea,0);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"calculateMoment");
                    /* try { // try from 008ba53c to 009ba553 has its CatchHandler @ 008ba5a4 */
    lua_pushcclosure(param_1,lua_cocos2dx_physics_PhysicsShapePolygon_calculateMoment,0);
                    /* try { // try from 008ba554 to 009ba5bf has its CatchHandler @ 008ba4e4 */
    lua_rawset(param_1,0xfffffffd);
  }
  lua_settop(param_1,0xfffffffe);
  lua_pushstring(param_1,"cc.PhysicsShapeEdgePolygon");
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
    lua_pushstring(param_1,"getPoints");
                    /* catch() { ... } // from try @ 008ba53c with catch @ 008ba5a4 */
    lua_pushcclosure(param_1,lua_cocos2dx_physics_PhysicsShapeEdgePolygon_getPoints,0);
                    /* try { // try from 008ba5c0 to 009ba617 has its CatchHandler @ 008ba5c0
                       catch() { ... } // from try @ 008ba5c0 with catch @ 008ba5c0
                       catch() { ... } // from try @ 008ba630 with catch @ 008ba5c0 */
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"create");
    lua_pushcclosure(param_1,lua_cocos2dx_physics_PhysicsShapeEdgePolygon_create,0);
    lua_rawset(param_1,0xfffffffd);
  }
  lua_settop(param_1,0xfffffffe);
  lua_pushstring(param_1,"cc.PhysicsShapeEdgeChain");
                    /* try { // try from 008ba618 to 009ba62f has its CatchHandler @ 008ba680 */
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
                    /* try { // try from 008ba630 to 009ba69b has its CatchHandler @ 008ba5c0 */
    lua_pushstring(param_1,"getPoints");
    lua_pushcclosure(param_1,lua_cocos2dx_physics_PhysicsShapeEdgeChain_getPoints,0);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"create");
                    /* catch() { ... } // from try @ 008ba618 with catch @ 008ba680 */
    lua_pushcclosure(param_1,lua_cocos2dx_physics_PhysicsShapeEdgeChain_create,0);
    lua_rawset(param_1,0xfffffffd);
  }
  lua_settop(param_1,0xfffffffe);
                    /* try { // try from 008ba69c to 009ba6f3 has its CatchHandler @ 008ba69c
                       catch() { ... } // from try @ 008ba69c with catch @ 008ba69c
                       catch() { ... } // from try @ 008ba70c with catch @ 008ba69c */
  lua_pushstring(param_1,"cc.PhysicsWorld");
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
    lua_pushstring(param_1,"getScene");
    lua_pushcclosure(param_1,lua_cocos2dx_physics_PhysicsWorld_getScene,0);
                    /* try { // try from 008ba6f4 to 009ba70b has its CatchHandler @ 008ba75c */
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"queryPoint");
                    /* try { // try from 008ba70c to 009ba777 has its CatchHandler @ 008ba69c */
    lua_pushcclosure(param_1,lua_cocos2dx_physics_PhysicsWorld_queryPoint,0);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"queryRect");
    lua_pushcclosure(param_1,lua_cocos2dx_physics_PhysicsWorld_queryRect,0);
    lua_rawset(param_1,0xfffffffd);
                    /* catch() { ... } // from try @ 008ba6f4 with catch @ 008ba75c */
    lua_pushstring(param_1,"rayCast");
                    /* try { // try from 008ba778 to 009ba7cf has its CatchHandler @ 008ba778
                       catch() { ... } // from try @ 008ba778 with catch @ 008ba778
                       catch() { ... } // from try @ 008ba7e8 with catch @ 008ba778 */
    lua_pushcclosure(param_1,lua_cocos2dx_physics_PhysicsWorld_rayCast,0);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"DEBUGDRAW_NONE");
    lua_pushnumber(0,param_1);
    lua_rawset(param_1,0xfffffffd);
                    /* try { // try from 008ba7d0 to 009ba7e7 has its CatchHandler @ 008ba838 */
    lua_pushstring(param_1,"DEBUGDRAW_SHAPE");
                    /* try { // try from 008ba7e8 to 009ba853 has its CatchHandler @ 008ba778 */
    lua_pushnumber(0x3ff0000000000000,param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"DEBUGDRAW_JOINT");
    lua_pushnumber(0x4000000000000000,param_1);
    lua_rawset(param_1,0xfffffffd);
                    /* catch() { ... } // from try @ 008ba7d0 with catch @ 008ba838 */
    lua_pushstring(param_1,"DEBUGDRAW_CONTACT");
                    /* try { // try from 008ba854 to 009ba8ab has its CatchHandler @ 008ba854
                       catch() { ... } // from try @ 008ba854 with catch @ 008ba854
                       catch() { ... } // from try @ 008ba8c4 with catch @ 008ba854 */
    lua_pushnumber(0x4010000000000000,param_1);
    lua_rawset(param_1,0xfffffffd);
    lua_pushstring(param_1,"DEBUGDRAW_ALL");
    lua_pushnumber(0x401c000000000000,param_1);
    lua_rawset(param_1,0xfffffffd);
  }
                    /* try { // try from 008ba8ac to 009ba8c3 has its CatchHandler @ 008ba914 */
  lua_settop(param_1,0xfffffffe);
  lua_pushstring(param_1,"cc.EventListenerPhysicsContact");
                    /* try { // try from 008ba8c4 to 009ba92f has its CatchHandler @ 008ba854 */
  lua_rawget(param_1,0xffffd8f0);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
    tolua_function(param_1,"registerScriptHandler",FUN_008ba934);
  }
  lua_settop(param_1,0xfffffffe);
                    /* catch() { ... } // from try @ 008ba8ac with catch @ 008ba914 */
  tolua_constant(0x47efffffe0000000,param_1,"PHYSICS_INFINITY");
  return 0;
}

