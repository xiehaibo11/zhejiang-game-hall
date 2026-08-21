
/* WARNING: Type propagation algorithm not settling */
/* lua_cocos2dx_LayerRadialGradient_initWithColor(lua_State*) */

void lua_cocos2dx_LayerRadialGradient_initWithColor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  LayerRadialGradient *this;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  double local_80 [3];
  Color4B aCStack_68 [8];
  Color4B aCStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = (LayerRadialGradient *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 5) {
    cocos2d::Color4B::Color4B(aCStack_60);
    cocos2d::Color4B::Color4B(aCStack_68);
    local_80[1] = 0.0;
    uVar4 = luaval_to_color4b(param_1,2,aCStack_60,"cc.LayerRadialGradient:initWithColor");
    uVar5 = luaval_to_color4b(param_1,3,aCStack_68,"cc.LayerRadialGradient:initWithColor");
    uVar6 = luaval_to_number(param_1,4,local_80 + 2,"cc.LayerRadialGradient:initWithColor");
    uVar7 = luaval_to_vec2(param_1,5,(Vec2 *)(local_80 + 1),"cc.LayerRadialGradient:initWithColor");
    uVar8 = luaval_to_number(param_1,6,local_80,"cc.LayerRadialGradient:initWithColor");
    if (((((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) && ((uVar6 & 1) != 0)) &&
       (((uVar7 & 1) != 0 && ((uVar8 & 1) != 0)))) {
      uVar3 = cocos2d::LayerRadialGradient::initWithColor
                        (this,aCStack_60,aCStack_68,(float)local_80[2],(Vec2 *)(local_80 + 1),
                         (float)local_80[0]);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar9 = 1;
      goto LAB_00840508;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_LayerRadialGradient_initWithColor\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.LayerRadialGradient:initWithColor",iVar2 + -1,5);
  }
  uVar9 = 0;
LAB_00840508:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}

