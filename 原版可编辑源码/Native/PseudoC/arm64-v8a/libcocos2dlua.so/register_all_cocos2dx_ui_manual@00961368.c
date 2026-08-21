
/* register_all_cocos2dx_ui_manual(lua_State*) */

undefined8 register_all_cocos2dx_ui_manual(lua_State *param_1)

{
  int iVar1;
  
  if (param_1 != (lua_State *)0x0) {
    lua_pushstring(param_1,"ccui.Widget");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"addTouchEventListener",FUN_009618b8);
      tolua_function(param_1,&DAT_012d4564,FUN_009619f0);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"ccui.CheckBox");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"addEventListener",FUN_00961d2c);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"ccui.RadioButton");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"addEventListener",FUN_00961f74);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"ccui.RadioButtonGroup");
    lua_rawget(param_1,0xffffd8f0);
                    /* try { // try from 009614a8 to 00a614f3 has its CatchHandler @ 009614a8
                       catch() { ... } // from try @ 009614a8 with catch @ 009614a8
                       catch() { ... } // from try @ 009614f8 with catch @ 009614a8 */
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"addEventListener",FUN_009621bc);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"ccui.Slider");
                    /* try { // try from 009614f4 to 00a614f7 has its CatchHandler @ 0096152c */
                    /* try { // try from 009614f8 to 00a6153f has its CatchHandler @ 009614a8 */
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"addEventListener",FUN_00962424);
    }
                    /* catch() { ... } // from try @ 009614f4 with catch @ 0096152c */
    lua_settop(param_1,0xfffffffe);
                    /* try { // try from 00961540 to 00a615f7 has its CatchHandler @ 00961540
                       catch() { ... } // from try @ 00961540 with catch @ 00961540
                       catch() { ... } // from try @ 00961678 with catch @ 00961540 */
    lua_pushstring(param_1,"ccui.TextField");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"addEventListener",FUN_0096266c);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"ccui.PageView");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"addEventListener",FUN_009628b4);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"ccui.ScrollView");
    lua_rawget(param_1,0xffffd8f0);
                    /* try { // try from 009615f8 to 00a6162b has its CatchHandler @ 009616f8 */
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"addEventListener",FUN_00962afc);
    }
                    /* try { // try from 0096162c to 00a6163f has its CatchHandler @ 009616c4 */
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,&DAT_012d48df);
                    /* try { // try from 00961644 to 00a61677 has its CatchHandler @ 009616c8 */
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      tolua_function(param_1,"addEventListener",FUN_00962d48);
                    /* try { // try from 00961678 to 00a61713 has its CatchHandler @ 00961540 */
      tolua_function(param_1,&DAT_012d48ed,FUN_00962e80);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"ccui.LayoutParameter");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
                    /* catch() { ... } // from try @ 0096162c with catch @ 009616c4 */
                    /* catch() { ... } // from try @ 00961644 with catch @ 009616c8 */
    if (iVar1 == 5) {
      tolua_function(param_1,"setMargin",FUN_009631e0);
                    /* catch() { ... } // from try @ 009615f8 with catch @ 009616f8 */
      tolua_function(param_1,"getMargin",FUN_009633cc);
    }
    lua_settop(param_1,0xfffffffe);
    lua_pushstring(param_1,"ccui.EditBox");
    lua_rawget(param_1,0xffffd8f0);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushstring(param_1,"registerScriptEditBoxHandler");
      lua_pushcclosure(param_1,FUN_00963530,0);
      lua_rawset(param_1,0xfffffffd);
      lua_pushstring(param_1,&DAT_012d4b1f);
      lua_pushcclosure(param_1,FUN_009635b4,0);
      lua_rawset(param_1,0xfffffffd);
    }
    lua_settop(param_1,0xfffffffe);
  }
  return 0;
}

