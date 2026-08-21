
/* register_all_cocos2dx_manual(lua_State*) */

undefined8 register_all_cocos2dx_manual(lua_State *param_1)

{
  int iVar1;
  
  if (param_1 != (lua_State *)0x0) {
    lua_pushstring(param_1,"cc.Node");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"registerScriptHandler");
      lua_pushcclosure(param_1,FUN_008abdb4,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"unregisterScriptHandler");
      lua_pushcclosure(param_1,FUN_008abe44,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"scheduleUpdateWithPriorityLua");
      lua_pushcclosure(param_1,FUN_008abeb8,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"unscheduleUpdate");
      lua_pushcclosure(param_1,FUN_008abf94,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"getPosition");
      lua_pushcclosure(param_1,FUN_008ac000,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"setContentSize");
      lua_pushcclosure(param_1,tolua_cocos2d_Node_setContentSize,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"setAnchorPoint");
      lua_pushcclosure(param_1,tolua_cocos2d_Node_setAnchorPoint,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"enumerateChildren");
      lua_pushcclosure(param_1,FUN_008ac108,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"setAdditionalTransform");
      lua_pushcclosure(param_1,lua_cocos2dx_Node_setAdditionalTransform,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"setRotationQuat");
      lua_pushcclosure(param_1,lua_cocos2dx_Node_setRotationQuat,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.Scene");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"getPhysics3DWorld",lua_cocos2dx_Scene_getPhysics3DWorld);
      tolua_function(param_1,"setPhysics3DDebugCamera",lua_cocos2dx_Scene_setPhysics3DDebugCamera);
      tolua_function(param_1,"setNavMeshDebugCamera",lua_cocos2dx_Scene_setNavMeshDebugCamera);
      tolua_function(param_1,"setNavMesh",lua_cocos2dx_Scene_setNavMesh);
      tolua_function(param_1,"getNavMesh",lua_cocos2dx_Scene_getNavMesh);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.Layer");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"registerScriptTouchHandler");
      lua_pushcclosure(param_1,FUN_008ac3d0,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"unregisterScriptTouchHandler");
      lua_pushcclosure(param_1,FUN_008ac918,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"registerScriptKeypadHandler");
      lua_pushcclosure(param_1,FUN_008aca88,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"unregisterScriptKeypadHandler");
      lua_pushcclosure(param_1,FUN_008acb18,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"registerScriptAccelerateHandler");
      lua_pushcclosure(param_1,FUN_008acc3c,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"unregisterScriptAccelerateHandler");
      lua_pushcclosure(param_1,FUN_008acccc,0);
      lua_rawset(param_1,0xfffffffd);
      tolua_function(param_1,"setTouchEnabled",FUN_008acdf0);
      tolua_function(param_1,"isTouchEnabled",FUN_008ace78);
      tolua_function(param_1,"setTouchMode",FUN_008acf8c);
      tolua_function(param_1,"getTouchMode",FUN_008ad1e0);
      tolua_function(param_1,"setSwallowsTouches",FUN_008ad2fc);
      tolua_function(param_1,"isSwallowsTouches",FUN_008ad544);
      tolua_function(param_1,"setKeyboardEnabled",FUN_008ad658);
      tolua_function(param_1,"isKeyboardEnabled",FUN_008ad92c);
      tolua_function(param_1,"setAccelerometerEnabled",FUN_008ada40);
      tolua_function(param_1,"isAccelerometerEnabled",FUN_008add14);
      tolua_function(param_1,"setAccelerometerInterval",FUN_008ade28);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.MenuItem");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"registerScriptTapHandler");
      lua_pushcclosure(param_1,FUN_008af518,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"unregisterScriptTapHandler");
      lua_pushcclosure(param_1,FUN_008af5a8,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.MenuItemImage");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"create");
      lua_pushcclosure(param_1,FUN_008af61c,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.MenuItemLabel");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"create");
      lua_pushcclosure(param_1,FUN_008af8ec,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.MenuItemFont");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"create");
      lua_pushcclosure(param_1,FUN_008af988,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.MenuItemSprite");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"create");
      lua_pushcclosure(param_1,FUN_008afa98,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.MenuItemToggle");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"create");
      lua_pushcclosure(param_1,FUN_008afb88,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,&DAT_0128a451);
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"create");
      lua_pushcclosure(param_1,FUN_008afc4c,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"alignItemsInRows");
      lua_pushcclosure(param_1,FUN_008afe50,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"alignItemsInColumns");
      lua_pushcclosure(param_1,FUN_008aff90,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.Scheduler");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"scheduleScriptFunc");
      lua_pushcclosure(param_1,FUN_008b00d0,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"unscheduleScriptEntry");
      lua_pushcclosure(param_1,FUN_008b01a8,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.Sequence");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"create");
      lua_pushcclosure(param_1,tolua_cocos2d_Sequence_create,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.CallFunc");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"create");
      lua_pushcclosure(param_1,FUN_008b022c,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.Spawn");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"create");
      lua_pushcclosure(param_1,FUN_008b0624,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.CardinalSplineBy");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"create");
      lua_pushcclosure(param_1,lua_cocos2d_CardinalSplineBy_create,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.CatmullRomBy");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"create");
      lua_pushcclosure(param_1,tolua_cocos2d_CatmullRomBy_create,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.CatmullRomTo");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"create");
      lua_pushcclosure(param_1,tolua_cocos2d_CatmullRomTo_create,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.BezierBy");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"create");
      lua_pushcclosure(param_1,tolua_cocos2d_BezierBy_create,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.BezierTo");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"create");
      lua_pushcclosure(param_1,tolua_cocos2d_BezierTo_create,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.DrawNode");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"drawPolygon");
      lua_pushcclosure(param_1,FUN_008b0830,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"drawSolidPoly");
      lua_pushcclosure(param_1,tolua_cocos2dx_DrawNode_drawSolidPoly,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"drawPoly");
      lua_pushcclosure(param_1,tolua_cocos2dx_DrawNode_drawPoly,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"drawCardinalSpline");
      lua_pushcclosure(param_1,tolua_cocos2dx_DrawNode_drawCardinalSpline,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"drawCatmullRom");
      lua_pushcclosure(param_1,tolua_cocos2dx_DrawNode_drawCatmullRom,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"drawPoints");
      lua_pushcclosure(param_1,tolua_cocos2dx_DrawNode_drawPoints,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"setBlendFunc");
      lua_pushcclosure(param_1,FUN_008b0a58,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.Sprite");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"setBlendFunc",FUN_008b0c1c);
      tolua_function(param_1,"initWithPolygon",lua_cocos2dx_Sprite_initWithPolygon);
      tolua_function(param_1,"setPolygonInfo",lua_cocos2dx_Sprite_setPolygonInfo);
      tolua_function(param_1,"create",lua_cocos2dx_Sprite_create);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.LayerColor");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"setBlendFunc");
      lua_pushcclosure(param_1,FUN_008b0de8,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.LayerMultiplex");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"create");
      lua_pushcclosure(param_1,FUN_008b0fb4,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.ParticleSystem");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"setBlendFunc");
      lua_pushcclosure(param_1,FUN_008b1250,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.FileUtils");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"getStringFromFile");
      lua_pushcclosure(param_1,FUN_008b141c,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"getDataFromFile");
      lua_pushcclosure(param_1,FUN_008b162c,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.UserDefault");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"getInstance");
      lua_pushcclosure(param_1,FUN_008b1800,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.GLProgram");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"create",FUN_008b186c);
      tolua_function(param_1,"getProgram",FUN_008b1af8);
      tolua_function(param_1,"setUniformLocationF32",FUN_008b1b70);
      tolua_function(param_1,"getUniform",FUN_008b1cec);
      tolua_function(param_1,"setUniformLocationWithMatrix2fv",
                     lua_cocos2dx_GLProgram_setUniformLocationWithMatrix2fv);
      tolua_function(param_1,"setUniformLocationWithMatrix3fv",
                     lua_cocos2dx_GLProgram_setUniformLocationWithMatrix3fv);
      tolua_function(param_1,"setUniformLocationWithMatrix4fv",
                     lua_cocos2dx_GLProgram_setUniformLocationWithMatrix4fv);
      tolua_function(param_1,"setUniformLocationWith2iv",
                     lua_cocos2dx_GLProgram_setUniformLocationWith2iv);
      tolua_function(param_1,"setUniformLocationWith3iv",
                     lua_cocos2dx_GLProgram_setUniformLocationWith3iv);
      tolua_function(param_1,"setUniformLocationWith4iv",
                     lua_cocos2dx_GLProgram_setUniformLocationWith4iv);
      tolua_function(param_1,"getVertexAttrib",lua_cocos2dx_GLProgram_getVertexAttrib);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.Texture2D");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"setTexParameters");
      lua_pushcclosure(param_1,FUN_008b1e14,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.SpriteBatchNode");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"getDescendants");
      lua_pushcclosure(param_1,FUN_008b1f10,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,"setBlendFunc");
      lua_pushcclosure(param_1,FUN_008b2078,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.EventListenerKeyboard");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"create",FUN_008b22ec);
      tolua_function(param_1,"registerScriptHandler",FUN_008b2364);
      tolua_function(param_1,"clone",FUN_008b24c4);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.EventListenerTouchOneByOne");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"create",FUN_008b2a88);
      tolua_function(param_1,"registerScriptHandler",FUN_008b2b00);
      tolua_function(param_1,"clone",FUN_008b2d6c);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.EventListenerTouchAllAtOnce");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"create",FUN_008b37a4);
      tolua_function(param_1,"registerScriptHandler",FUN_008b381c);
      tolua_function(param_1,"clone",FUN_008b3a88);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.EventListenerMouse");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"create",FUN_008b488c);
      tolua_function(param_1,"registerScriptHandler",FUN_008b4904);
      tolua_function(param_1,"clone",FUN_008b4b70);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.EventListenerCustom");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"create",FUN_008b56b4);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.EventListenerAcceleration");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"create",FUN_008b57fc);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.ActionCamera");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"reverse",FUN_008b58bc);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.GridAction");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"reverse",FUN_008b5950);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.MotionStreak");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"setBlendFunc");
      lua_pushcclosure(param_1,FUN_008b59e4,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.AtlasNode");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"setBlendFunc");
      lua_pushcclosure(param_1,FUN_008b5bb0,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.ParticleBatchNode");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"setBlendFunc");
      lua_pushcclosure(param_1,FUN_008b5d7c,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.Label");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"createWithTTF",FUN_008b5f48);
      tolua_function(param_1,"createWithTTF",FUN_008b61f4);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.TMXTiledMap");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"getPropertiesForGID",FUN_008b64a0);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.Console");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"wait",FUN_008b658c);
      tolua_function(param_1,"send",FUN_008b6654);
      tolua_function(param_1,"addCommand",FUN_008b6788);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.GLProgramState");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"setVertexAttribPointer",FUN_008b6f68);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.OrbitCamera");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"sphericalRadius",FUN_008b713c);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.TMXLayer");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"getTileGIDAt",lua_cocos2dx_TMXLayer_getTileGIDAt);
      tolua_function(param_1,"setTiles",lua_cocos2dx_TMXLayer_setTiles);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.Application");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"isIOS64bit",lua_cocos2dx_Application_isIOS64bit);
      tolua_function(param_1,"is64BitIOSDevice",lua_cocos2dx_Application_is64BitIOSDevice);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.TextureCache");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"addImageAsync",FUN_008b7264);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,&DAT_0127b187);
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"getAllTouches",lua_cocos2dx_GLView_getAllTouches);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.Camera");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"unproject",lua_cocos2dx_Camera_unproject);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.Properties");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"createNonRefCounted",lua_cocos2dx_Properties_createNonRefCounted);
    }
    lua_settop(param_1,0xfffffffe);
    lua_getfield(param_1,0xffffd8f0,"cc.Properties");
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,".collector",FUN_008b7500);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.AutoPolygon");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"generatePolygon",lua_cocos2dx_AutoPolygon_generatePolygon);
    }
    lua_settop(param_1,0xfffffffe);
    lua_getfield(param_1,0xffffd8f0,"cc.AutoPolygon");
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,".collector",FUN_008b753c);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"cc.PolygonInfo");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_variable(param_1,"rect",lua_cocos2dx_get_PolygonInfo_rect,
                     lua_cocos2dx_set_PolygonInfo_rect);
      tolua_variable(param_1,"filename",lua_cocos2dx_get_PolygonInfo_filename,
                     lua_cocos2dx_set_PolygonInfo_filename);
    }
    lua_settop(param_1,0xfffffffe);
    lua_getfield(param_1,0xffffd8f0,"cc.PolygonInfo");
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,".collector",FUN_008b7578);
    }
    lua_settop(param_1,0xfffffffe);
  }
  return 0;
}

