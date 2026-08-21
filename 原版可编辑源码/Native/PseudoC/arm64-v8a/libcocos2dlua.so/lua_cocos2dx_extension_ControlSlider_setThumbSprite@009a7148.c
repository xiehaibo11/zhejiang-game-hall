
/* lua_cocos2dx_extension_ControlSlider_setThumbSprite(lua_State*) */

undefined4 lua_cocos2dx_extension_ControlSlider_setThumbSprite(lua_State *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
                    /* try { // try from 009a715c to 00aa7173 has its CatchHandler @ 009a735c */
  plVar2 = (long *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 009a7178 to 00aa719f has its CatchHandler @ 009a7350 */
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"cc.Sprite",0), (uVar3 & 1) != 0)) {
      uVar4 = tolua_tousertype(param_1,2,0);
                    /* try { // try from 009a71bc to 00aa71d3 has its CatchHandler @ 009a7358 */
      (**(code **)(*plVar2 + 0x720))(plVar2,uVar4);
                    /* try { // try from 009a71d8 to 00aa71f7 has its CatchHandler @ 009a7354 */
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,0x12e5d4e,0);
  }
  else {
                    /* try { // try from 009a71fc to 00aa7227 has its CatchHandler @ 009a734c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e5d2e,
               iVar1 + -1,1);
  }
                    /* try { // try from 009a7228 to 00aa7323 has its CatchHandler @ 009a7114 */
  return 0;
}

