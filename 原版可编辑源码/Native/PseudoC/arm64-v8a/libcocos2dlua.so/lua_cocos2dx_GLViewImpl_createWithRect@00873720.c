
/* lua_cocos2dx_GLViewImpl_createWithRect(lua_State*) */

undefined4 lua_cocos2dx_GLViewImpl_createWithRect(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 uVar7;
  Rect aRStack_88 [16];
  double local_78;
  Rect aRStack_70 [16];
  Rect aRStack_60 [16];
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 4) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    cocos2d::Rect::Rect(aRStack_60);
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.GLViewImpl:createWithRect")
    ;
    uVar4 = luaval_to_rect(param_1,3,aRStack_60,"cc.GLViewImpl:createWithRect");
    uVar5 = luaval_to_number(param_1,4,&local_78,"cc.GLViewImpl:createWithRect");
    if ((uVar3 & uVar4 & uVar5 & 1) != 0) {
      cocos2d::Rect::Rect(aRStack_88,aRStack_60);
      pvVar6 = (void *)cocos2d::GLViewImpl::createWithRect((float)local_78,&local_50,aRStack_88);
      if (pvVar6 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                   "cc.GLViewImpl");
      }
      goto LAB_00873938;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_GLViewImpl_createWithRect\'",0
               );
LAB_008738e8:
    uVar7 = 0;
  }
  else {
    if (iVar2 != 3) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
                 "cc.GLViewImpl:createWithRect",iVar2 + -1,2);
      uVar7 = 0;
      goto LAB_008738fc;
    }
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    cocos2d::Rect::Rect(aRStack_60);
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.GLViewImpl:createWithRect")
    ;
    uVar4 = luaval_to_rect(param_1,3,aRStack_60,"cc.GLViewImpl:createWithRect");
    if ((uVar3 & uVar4 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_GLViewImpl_createWithRect\'"
                  ,0);
      goto LAB_008738e8;
    }
    cocos2d::Rect::Rect(aRStack_70,aRStack_60);
    pvVar6 = (void *)cocos2d::GLViewImpl::createWithRect(0x3f800000,&local_50,aRStack_70);
    if (pvVar6 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                 "cc.GLViewImpl");
    }
LAB_00873938:
    uVar7 = 1;
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
LAB_008738fc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

