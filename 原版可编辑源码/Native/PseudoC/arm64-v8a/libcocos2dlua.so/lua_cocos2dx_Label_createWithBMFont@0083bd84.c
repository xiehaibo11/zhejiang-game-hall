
/* lua_cocos2dx_Label_createWithBMFont(lua_State*) */

undefined4 lua_cocos2dx_Label_createWithBMFont(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  undefined4 uVar9;
  ulong local_88;
  int local_80;
  int local_7c;
  ulong local_78;
  undefined8 uStack_70;
  void *local_68;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  switch(iVar2) {
  case 3:
    local_58 = 0;
    local_50 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"cc.Label:createWithBMFont");
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_78,"cc.Label:createWithBMFont");
    if ((uVar3 & uVar4 & 1) != 0) {
      local_88 = local_88 & 0xffffffff00000000;
      pvVar8 = (void *)cocos2d::Label::createWithBMFont
                                 ((basic_string *)&local_60,(basic_string *)&local_78,
                                  (TextHAlignment *)&local_88,0,(Vec2 *)&cocos2d::Vec2::ZERO);
      if (pvVar8 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar8 + 0xc),(int *)((long)pvVar8 + 0x10),pvVar8,
                   "cc.Label");
      }
      break;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Label_createWithBMFont\'",0);
LAB_0083c13c:
    uVar9 = 0;
    goto joined_r0x0083c1c0;
  case 4:
    local_58 = 0;
    local_50 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"cc.Label:createWithBMFont");
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_78,"cc.Label:createWithBMFont");
    uVar5 = luaval_to_int32(param_1,4,(int *)&local_88,"cc.Label:createWithBMFont");
    if ((uVar3 & uVar4 & uVar5 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Label_createWithBMFont\'",0)
      ;
      goto LAB_0083c13c;
    }
    pvVar8 = (void *)cocos2d::Label::createWithBMFont
                               ((basic_string *)&local_60,(basic_string *)&local_78,
                                (TextHAlignment *)&local_88,0,(Vec2 *)&cocos2d::Vec2::ZERO);
    if (pvVar8 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar8 + 0xc),(int *)((long)pvVar8 + 0x10),pvVar8,"cc.Label"
                );
    }
    break;
  case 5:
    local_58 = 0;
    local_50 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"cc.Label:createWithBMFont");
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_78,"cc.Label:createWithBMFont");
    uVar5 = luaval_to_int32(param_1,4,(int *)&local_88,"cc.Label:createWithBMFont");
    uVar6 = luaval_to_int32(param_1,5,&local_7c,"cc.Label:createWithBMFont");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Label_createWithBMFont\'",0)
      ;
      goto LAB_0083c13c;
    }
    pvVar8 = (void *)cocos2d::Label::createWithBMFont
                               ((basic_string *)&local_60,(basic_string *)&local_78,
                                (TextHAlignment *)&local_88,local_7c,(Vec2 *)&cocos2d::Vec2::ZERO);
    if (pvVar8 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar8 + 0xc),(int *)((long)pvVar8 + 0x10),pvVar8,"cc.Label"
                );
    }
    break;
  case 6:
    local_58 = 0;
    local_50 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"cc.Label:createWithBMFont");
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_78,"cc.Label:createWithBMFont");
    uVar5 = luaval_to_int32(param_1,4,&local_7c,"cc.Label:createWithBMFont");
    uVar6 = luaval_to_int32(param_1,5,&local_80,"cc.Label:createWithBMFont");
    uVar7 = luaval_to_vec2(param_1,6,(Vec2 *)&local_88,"cc.Label:createWithBMFont");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Label_createWithBMFont\'",0)
      ;
      goto LAB_0083c13c;
    }
    pvVar8 = (void *)cocos2d::Label::createWithBMFont
                               ((basic_string *)&local_60,(basic_string *)&local_78,
                                (TextHAlignment *)&local_7c,local_80,(Vec2 *)&local_88);
    if (pvVar8 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar8 + 0xc),(int *)((long)pvVar8 + 0x10),pvVar8,"cc.Label"
                );
    }
    break;
  default:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.Label:createWithBMFont",iVar2 + -1,2);
    uVar9 = 0;
    goto LAB_0083c160;
  }
  uVar9 = 1;
joined_r0x0083c1c0:
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_0083c160:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

