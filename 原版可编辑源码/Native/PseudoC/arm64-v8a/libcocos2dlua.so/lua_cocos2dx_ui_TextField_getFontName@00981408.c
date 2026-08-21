
/* lua_cocos2dx_ui_TextField_getFontName(lua_State*) */

undefined8 lua_cocos2dx_ui_TextField_getFontName(lua_State *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  int iVar3;
  TextField *this;
  undefined8 uVar4;
  byte *pbVar5;
  
  this = (TextField *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00981424 to 00a8144b has its CatchHandler @ 009813a8 */
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 0) {
    pbVar5 = (byte *)cocos2d::ui::TextField::getFontName(this);
    uVar1 = *(ulong *)(pbVar5 + 8);
    pbVar2 = *(byte **)(pbVar5 + 0x10);
    if ((*pbVar5 & 1) == 0) {
      pbVar2 = pbVar5 + 1;
      uVar1 = (ulong)(*pbVar5 >> 1);
    }
    lua_pushlstring(param_1,pbVar2,uVar1);
    uVar4 = 1;
  }
  else {
                    /* try { // try from 0098144c to 00a8145f has its CatchHandler @ 009814b8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TextField:getFontName",iVar3 + -1,0);
    uVar4 = 0;
  }
  return uVar4;
}

