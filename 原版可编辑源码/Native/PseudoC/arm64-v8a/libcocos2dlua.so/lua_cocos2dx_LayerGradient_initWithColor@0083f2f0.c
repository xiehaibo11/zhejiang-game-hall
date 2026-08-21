
/* lua_cocos2dx_LayerGradient_initWithColor(lua_State*) */

void lua_cocos2dx_LayerGradient_initWithColor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  LayerGradient *this;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_50;
  Color4B aCStack_48 [8];
  Color4B aCStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (LayerGradient *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    cocos2d::Color4B::Color4B((Color4B *)&local_50);
    uVar4 = luaval_to_color4b(param_1,2,(Color4B *)&local_50,"cc.LayerGradient:initWithColor");
    if ((uVar4 & 1) != 0) {
      cocos2d::Color4B::Color4B(aCStack_40);
      uVar4 = luaval_to_color4b(param_1,3,aCStack_40,"cc.LayerGradient:initWithColor");
      if ((uVar4 & 1) != 0) {
        uVar3 = cocos2d::LayerGradient::initWithColor(this,(Color4B *)&local_50,aCStack_40);
LAB_0083f418:
        tolua_pushboolean(param_1,uVar3 & 1);
        uVar5 = 1;
        goto LAB_0083f450;
      }
    }
  }
  else if (iVar2 == 4) {
    cocos2d::Color4B::Color4B(aCStack_40);
    uVar4 = luaval_to_color4b(param_1,2,aCStack_40,"cc.LayerGradient:initWithColor");
    if ((uVar4 & 1) != 0) {
      cocos2d::Color4B::Color4B(aCStack_48);
      uVar4 = luaval_to_color4b(param_1,3,aCStack_48,"cc.LayerGradient:initWithColor");
      if ((uVar4 & 1) != 0) {
        local_50 = 0;
        uVar4 = luaval_to_vec2(param_1,4,(Vec2 *)&local_50,"cc.LayerGradient:initWithColor");
        if ((uVar4 & 1) != 0) {
          uVar3 = cocos2d::LayerGradient::initWithColor
                            (this,aCStack_40,aCStack_48,(Vec2 *)&local_50);
          goto LAB_0083f418;
        }
      }
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.LayerGradient:initWithColor",iVar2 + -1,2);
  uVar5 = 0;
LAB_0083f450:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

