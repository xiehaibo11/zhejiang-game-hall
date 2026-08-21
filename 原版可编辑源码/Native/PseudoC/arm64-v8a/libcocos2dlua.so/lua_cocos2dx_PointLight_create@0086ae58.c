
/* lua_cocos2dx_PointLight_create(lua_State*) */

void lua_cocos2dx_PointLight_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 uVar7;
  double local_68;
  Color3B aCStack_60 [8];
  Vec3 aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 3) {
    cocos2d::Vec3::Vec3(aVStack_58);
    cocos2d::Color3B::Color3B(aCStack_60);
    uVar3 = luaval_to_vec3(param_1,2,aVStack_58,"cc.PointLight:create");
    uVar4 = luaval_to_color3b(param_1,3,aCStack_60,"cc.PointLight:create");
    uVar5 = luaval_to_number(param_1,4,&local_68,"cc.PointLight:create");
    if ((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) {
      pvVar6 = (void *)cocos2d::PointLight::create(aVStack_58,aCStack_60,(float)local_68);
      if (pvVar6 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar7 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                   "cc.PointLight");
        uVar7 = 1;
      }
      goto LAB_0086af6c;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_PointLight_create\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.PointLight:create",iVar2 + -1,3);
  }
  uVar7 = 0;
LAB_0086af6c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

