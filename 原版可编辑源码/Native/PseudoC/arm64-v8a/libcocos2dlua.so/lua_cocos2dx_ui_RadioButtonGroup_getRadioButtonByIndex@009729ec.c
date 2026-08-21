
/* lua_cocos2dx_ui_RadioButtonGroup_getRadioButtonByIndex(lua_State*) */

void lua_cocos2dx_ui_RadioButtonGroup_getRadioButtonByIndex(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  RadioButtonGroup *this;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (RadioButtonGroup *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"ccui.RadioButtonGroup:getRadioButtonByIndex");
    if ((uVar3 & 1) != 0) {
      pvVar4 = (void *)cocos2d::ui::RadioButtonGroup::getRadioButtonByIndex(this,local_3c);
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar5 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "ccui.RadioButton");
        uVar5 = 1;
      }
      goto LAB_00972abc;
    }
    tolua_error(param_1,0x12d90e2,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d90b6,
               iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00972abc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

