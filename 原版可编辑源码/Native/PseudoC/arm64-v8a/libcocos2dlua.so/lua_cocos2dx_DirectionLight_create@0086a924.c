
/* lua_cocos2dx_DirectionLight_create(lua_State*) */

void lua_cocos2dx_DirectionLight_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 uVar6;
  Color3B aCStack_50 [8];
  Vec3 aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 2) {
    cocos2d::Vec3::Vec3(aVStack_48);
    cocos2d::Color3B::Color3B(aCStack_50);
    uVar3 = luaval_to_vec3(param_1,2,aVStack_48,"cc.DirectionLight:create");
    uVar4 = luaval_to_color3b(param_1,3,aCStack_50,"cc.DirectionLight:create");
    if (((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) {
      pvVar5 = (void *)cocos2d::DirectionLight::create(aVStack_48,aCStack_50);
      if (pvVar5 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar6 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                   "cc.DirectionLight");
        uVar6 = 1;
      }
      goto LAB_0086aa10;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_DirectionLight_create\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.DirectionLight:create",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_0086aa10:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

