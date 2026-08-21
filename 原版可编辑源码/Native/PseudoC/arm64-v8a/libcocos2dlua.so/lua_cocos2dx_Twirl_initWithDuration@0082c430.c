
/* lua_cocos2dx_Twirl_initWithDuration(lua_State*) */

void lua_cocos2dx_Twirl_initWithDuration(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  Twirl *this;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  double local_80;
  uint local_74;
  undefined8 local_70;
  Size aSStack_68 [8];
  double local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = (Twirl *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 5) {
    cocos2d::Size::Size(aSStack_68);
    local_70 = 0;
    uVar4 = luaval_to_number(param_1,2,&local_60,"cc.Twirl:initWithDuration");
    uVar5 = luaval_to_size(param_1,3,aSStack_68,"cc.Twirl:initWithDuration");
    uVar6 = luaval_to_vec2(param_1,4,(Vec2 *)&local_70,"cc.Twirl:initWithDuration");
    uVar7 = luaval_to_uint32(param_1,5,&local_74,"cc.Twirl:initWithDuration");
    uVar8 = luaval_to_number(param_1,6,&local_80,"cc.Twirl:initWithDuration");
    if (((((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) && ((uVar6 & 1) != 0)) &&
       (((uVar7 & 1) != 0 && ((uVar8 & 1) != 0)))) {
      uVar3 = cocos2d::Twirl::initWithDuration
                        (this,(float)local_60,aSStack_68,(Vec2 *)&local_70,local_74,(float)local_80)
      ;
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar9 = 1;
      goto LAB_0082c58c;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Twirl_initWithDuration\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Twirl:initWithDuration",iVar2 + -1,5);
  }
  uVar9 = 0;
LAB_0082c58c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}

