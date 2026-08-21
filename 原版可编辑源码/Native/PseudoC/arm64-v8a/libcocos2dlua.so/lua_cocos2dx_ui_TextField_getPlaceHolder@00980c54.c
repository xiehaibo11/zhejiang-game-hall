
/* lua_cocos2dx_ui_TextField_getPlaceHolder(lua_State*) */

undefined8 lua_cocos2dx_ui_TextField_getPlaceHolder(lua_State *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  int iVar3;
  TextField *this;
  undefined8 uVar4;
  byte *pbVar5;
  
  this = (TextField *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 0) {
    pbVar5 = (byte *)cocos2d::ui::TextField::getPlaceHolder(this);
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
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TextField:getPlaceHolder",iVar3 + -1,0);
    uVar4 = 0;
  }
  return uVar4;
}

