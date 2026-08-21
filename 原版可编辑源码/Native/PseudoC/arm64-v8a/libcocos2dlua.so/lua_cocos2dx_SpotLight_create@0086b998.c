
/* lua_cocos2dx_SpotLight_create(lua_State*) */

void lua_cocos2dx_SpotLight_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  void *pvVar9;
  undefined8 uVar10;
  double local_98;
  double local_90;
  double dStack_88;
  Color3B aCStack_80 [8];
  Vec3 aVStack_78 [16];
  Vec3 aVStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 6) {
    cocos2d::Vec3::Vec3(aVStack_68);
    cocos2d::Vec3::Vec3(aVStack_78);
    cocos2d::Color3B::Color3B(aCStack_80);
    uVar3 = luaval_to_vec3(param_1,2,aVStack_68,"cc.SpotLight:create");
    uVar4 = luaval_to_vec3(param_1,3,aVStack_78,"cc.SpotLight:create");
    uVar5 = luaval_to_color3b(param_1,4,aCStack_80,"cc.SpotLight:create");
    uVar6 = luaval_to_number(param_1,5,&dStack_88,"cc.SpotLight:create");
    uVar7 = luaval_to_number(param_1,6,&local_90,"cc.SpotLight:create");
    uVar8 = luaval_to_number(param_1,7,&local_98,"cc.SpotLight:create");
    if (((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) &&
       ((((uVar6 & 1) != 0 && ((uVar7 & 1) != 0)) && ((uVar8 & 1) != 0)))) {
      pvVar9 = (void *)cocos2d::SpotLight::create
                                 (aVStack_68,aVStack_78,aCStack_80,(float)dStack_88,(float)local_90,
                                  (float)local_98);
      if (pvVar9 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar10 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar9 + 0xc),(int *)((long)pvVar9 + 0x10),pvVar9,
                   "cc.SpotLight");
        uVar10 = 1;
      }
      goto LAB_0086bb1c;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_SpotLight_create\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.SpotLight:create",iVar2 + -1,6);
  }
  uVar10 = 0;
LAB_0086bb1c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}

