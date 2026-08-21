
/* lua_cocos2dx_ui_Text_getString(lua_State*) */

undefined8 lua_cocos2dx_ui_Text_getString(lua_State *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  int iVar3;
  Text *this;
  undefined8 uVar4;
  byte *pbVar5;
  
                    /* try { // try from 00974394 to 00a743c3 has its CatchHandler @ 0097430c */
  this = (Text *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 0) {
    pbVar5 = (byte *)cocos2d::ui::Text::getString(this);
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
                    /* try { // try from 009743c4 to 00a743d7 has its CatchHandler @ 00974418 */
                    /* try { // try from 009743d8 to 00a74433 has its CatchHandler @ 0097430c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d9616,
               iVar3 + -1,0);
    uVar4 = 0;
  }
                    /* catch() { ... } // from try @ 0097435c with catch @ 00974418
                       catch() { ... } // from try @ 009743c4 with catch @ 00974418 */
  return uVar4;
}

