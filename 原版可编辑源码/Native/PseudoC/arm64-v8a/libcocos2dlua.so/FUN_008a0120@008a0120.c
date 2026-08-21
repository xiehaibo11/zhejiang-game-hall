
undefined8 FUN_008a0120(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  LabelBMFont *this;
  ulong uVar5;
  undefined8 local_58;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (LabelBMFont *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_50[1] = 0;
    local_40 = (void *)0x0;
    local_58 = 0;
    local_50[0] = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)local_50,"cc.LabelBMFont:setFntFile");
    uVar4 = luaval_to_vec2(param_1,3,(Vec2 *)&local_58,"cc.LabelBMFont:setFntFile");
    if ((uVar3 & uVar4 & 1) != 0) {
      cocos2d::LabelBMFont::setFntFile(this,(basic_string *)local_50,(Vec2 *)&local_58);
    }
  }
  else {
    if (iVar2 != 2) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.LabelBMFont:setFntFile",iVar2 + -1,1);
      goto LAB_008a0230;
    }
    local_50[1] = 0;
    local_40 = (void *)0x0;
    local_50[0] = 0;
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)local_50,"cc.LabelBMFont:setFntFile");
    if ((uVar5 & 1) != 0) {
      cocos2d::LabelBMFont::setFntFile(this,(basic_string *)local_50,(Vec2 *)&cocos2d::Vec2::ZERO);
    }
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
LAB_008a0230:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

