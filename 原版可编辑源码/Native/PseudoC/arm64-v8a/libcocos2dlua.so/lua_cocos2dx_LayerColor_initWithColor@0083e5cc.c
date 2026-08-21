
/* lua_cocos2dx_LayerColor_initWithColor(lua_State*) */

void lua_cocos2dx_LayerColor_initWithColor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  LayerColor *this;
  ulong uVar4;
  undefined8 uVar5;
  double local_50;
  double dStack_48;
  Color4B aCStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (LayerColor *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 4) {
    cocos2d::Color4B::Color4B(aCStack_40);
    uVar4 = luaval_to_color4b(param_1,2,aCStack_40,"cc.LayerColor:initWithColor");
    if ((((uVar4 & 1) != 0) &&
        (uVar4 = luaval_to_number(param_1,3,&dStack_48,"cc.LayerColor:initWithColor"),
        (uVar4 & 1) != 0)) &&
       (uVar4 = luaval_to_number(param_1,4,&local_50,"cc.LayerColor:initWithColor"),
       (uVar4 & 1) != 0)) {
      uVar3 = cocos2d::LayerColor::initWithColor(this,aCStack_40,(float)dStack_48,(float)local_50);
LAB_0083e6c4:
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar5 = 1;
      goto LAB_0083e6fc;
    }
  }
  else if (iVar2 == 2) {
    cocos2d::Color4B::Color4B((Color4B *)&dStack_48);
    uVar4 = luaval_to_color4b(param_1,2,(Color4B *)&dStack_48,"cc.LayerColor:initWithColor");
    if ((uVar4 & 1) != 0) {
      uVar3 = cocos2d::LayerColor::initWithColor(this,(Color4B *)&dStack_48);
      goto LAB_0083e6c4;
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.LayerColor:initWithColor",iVar2 + -1,3);
  uVar5 = 0;
LAB_0083e6fc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

