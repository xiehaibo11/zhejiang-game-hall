
/* lua_cocos2dx_LayerGradient_create(lua_State*) */

void lua_cocos2dx_LayerGradient_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 local_50;
  Color4B aCStack_48 [8];
  Color4B aCStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 0) {
    pvVar4 = (void *)cocos2d::LayerGradient::create();
joined_r0x0083f77c:
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
      uVar5 = 1;
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "cc.LayerGradient");
      uVar5 = 1;
    }
  }
  else {
    if (iVar2 == 4) {
      cocos2d::Color4B::Color4B(aCStack_40);
      uVar3 = luaval_to_color4b(param_1,2,aCStack_40,"cc.LayerGradient:create");
      if ((uVar3 & 1) != 0) {
        cocos2d::Color4B::Color4B(aCStack_48);
        uVar3 = luaval_to_color4b(param_1,3,aCStack_48,"cc.LayerGradient:create");
        if ((uVar3 & 1) != 0) {
          local_50 = 0;
          uVar3 = luaval_to_vec2(param_1,4,(Vec2 *)&local_50,"cc.LayerGradient:create");
          if ((uVar3 & 1) != 0) {
            pvVar4 = (void *)cocos2d::LayerGradient::create(aCStack_40,aCStack_48,(Vec2 *)&local_50)
            ;
            goto joined_r0x0083f77c;
          }
        }
      }
    }
    else if (iVar2 == 3) {
      cocos2d::Color4B::Color4B((Color4B *)&local_50);
      uVar3 = luaval_to_color4b(param_1,2,(Color4B *)&local_50,"cc.LayerGradient:create");
      if ((uVar3 & 1) != 0) {
        cocos2d::Color4B::Color4B(aCStack_40);
        uVar3 = luaval_to_color4b(param_1,3,aCStack_40,"cc.LayerGradient:create");
        if ((uVar3 & 1) != 0) {
          pvVar4 = (void *)cocos2d::LayerGradient::create((Color4B *)&local_50,aCStack_40);
          goto joined_r0x0083f77c;
        }
      }
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
               "cc.LayerGradient:create",iVar2 + -1,3);
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

