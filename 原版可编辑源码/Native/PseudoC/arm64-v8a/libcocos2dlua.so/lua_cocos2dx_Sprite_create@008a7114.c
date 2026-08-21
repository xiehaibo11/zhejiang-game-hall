
/* lua_cocos2dx_Sprite_create(lua_State*) */

void lua_cocos2dx_Sprite_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  void *pvVar5;
  PolygonInfo *pPVar6;
  undefined8 uVar7;
  int iVar8;
  Rect aRStack_60 [16];
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 0) {
    pvVar5 = (void *)cocos2d::Sprite::create();
    if (pvVar5 == (void *)0x0) {
LAB_008a72cc:
      lua_pushnil(param_1);
    }
    else {
LAB_008a7234:
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                 "cc.Sprite");
    }
LAB_008a72d4:
    uVar7 = 1;
  }
  else {
    if (iVar2 == 3) {
      local_48 = 0;
      local_40 = (void *)0x0;
      local_50 = 0;
      uVar4 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.Sprite:create");
      if ((uVar4 & 1) == 0) {
LAB_008a7254:
        iVar8 = 8;
        iVar3 = 8;
      }
      else {
        cocos2d::Rect::Rect(aRStack_60);
        uVar4 = luaval_to_rect(param_1,3,aRStack_60,"cc.Sprite:create");
        if ((uVar4 & 1) == 0) goto LAB_008a7254;
        pvVar5 = (void *)cocos2d::Sprite::create((basic_string *)&local_50,aRStack_60);
        if (pvVar5 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                     "cc.Sprite");
        }
        iVar8 = 1;
        iVar3 = 1;
      }
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
        iVar3 = iVar8;
      }
      if (iVar3 != 8) goto LAB_008a72d4;
    }
    else if (iVar2 == 2) {
      local_48 = 0;
      local_40 = (void *)0x0;
      local_50 = 0;
      uVar4 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.Sprite:create");
      if ((uVar4 & 1) != 0) {
        pvVar5 = (void *)cocos2d::Sprite::create((basic_string *)&local_50);
        if (pvVar5 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                     "cc.Sprite");
        }
        if ((local_50 & 1) != 0) {
          operator_delete(local_40);
        }
        goto LAB_008a72d4;
      }
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
      }
      if (((param_1 != (lua_State *)0x0) && (iVar3 = lua_gettop(param_1), 1 < iVar3)) &&
         (uVar4 = luaval_is_usertype(param_1,2,"cc.PolygonInfo",0), (uVar4 & 1) != 0)) {
        pPVar6 = (PolygonInfo *)tolua_tousertype(param_1,2,0);
        pvVar5 = (void *)cocos2d::Sprite::create(pPVar6);
        if (pvVar5 != (void *)0x0) goto LAB_008a7234;
        goto LAB_008a72cc;
      }
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d","cc.Sprite:create",
               iVar2 + -1,2);
    uVar7 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

