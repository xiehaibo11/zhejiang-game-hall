
/* lua_cocos2dx_ActionTween_create(lua_State*) */

undefined4 lua_cocos2dx_ActionTween_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  undefined4 uVar8;
  double local_78;
  double dStack_70;
  ulong local_68;
  undefined8 local_60;
  void *local_58;
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 4) {
    local_60 = 0;
    local_58 = (void *)0x0;
    local_68 = 0;
    uVar3 = luaval_to_number(param_1,2,&local_50,"cc.ActionTween:create");
    uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_68,"cc.ActionTween:create");
    uVar5 = luaval_to_number(param_1,4,&dStack_70,"cc.ActionTween:create");
    uVar6 = luaval_to_number(param_1,5,&local_78,"cc.ActionTween:create");
    if ((uVar3 & uVar4 & uVar5 & uVar6 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ActionTween_create\'",0);
      uVar8 = 0;
    }
    else {
      pvVar7 = (void *)cocos2d::ActionTween::create
                                 ((float)local_50,(basic_string *)&local_68,(float)dStack_70,
                                  (float)local_78);
      if (pvVar7 == (void *)0x0) {
        lua_pushnil(param_1);
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                   "cc.ActionTween");
      }
      uVar8 = 1;
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.ActionTween:create",iVar2 + -1,4);
    uVar8 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

