
/* WARNING: Type propagation algorithm not settling */
/* lua_cocos2dx_LayerRadialGradient_create(lua_State*) */

void lua_cocos2dx_LayerRadialGradient_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  ulong uVar5;
  double local_60 [3];
  Color4B aCStack_48 [8];
  Color4B aCStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 6) {
    cocos2d::Color4B::Color4B(aCStack_40);
    uVar5 = luaval_to_color4b(param_1,2,aCStack_40,"cc.LayerRadialGradient:create");
    if ((uVar5 & 1) != 0) {
      cocos2d::Color4B::Color4B(aCStack_48);
      uVar5 = luaval_to_color4b(param_1,3,aCStack_48,"cc.LayerRadialGradient:create");
      if (((uVar5 & 1) != 0) &&
         (uVar5 = luaval_to_number(param_1,4,local_60 + 2,"cc.LayerRadialGradient:create"),
         (uVar5 & 1) != 0)) {
        local_60[1] = 0.0;
        uVar5 = luaval_to_vec2(param_1,5,(Vec2 *)(local_60 + 1),"cc.LayerRadialGradient:create");
        if (((uVar5 & 1) != 0) &&
           (uVar5 = luaval_to_number(param_1,6,local_60,"cc.LayerRadialGradient:create"),
           (uVar5 & 1) != 0)) {
          pvVar3 = (void *)cocos2d::LayerRadialGradient::create
                                     (aCStack_40,aCStack_48,(float)local_60[2],
                                      (Vec2 *)(local_60 + 1),(float)local_60[0]);
          if (pvVar3 == (void *)0x0) {
            lua_pushnil(param_1);
          }
          else {
            toluafix_pushusertype_ccobject
                      (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                       "cc.LayerRadialGradient");
          }
          uVar4 = 1;
          goto LAB_00840c60;
        }
      }
    }
  }
  else if (iVar2 == 1) {
    pvVar3 = (void *)cocos2d::LayerRadialGradient::create();
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
      uVar4 = 1;
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                 "cc.LayerRadialGradient");
      uVar4 = 1;
    }
    goto LAB_00840c60;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "cc.LayerRadialGradient:create",iVar2 + -1,5);
  uVar4 = 0;
LAB_00840c60:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

