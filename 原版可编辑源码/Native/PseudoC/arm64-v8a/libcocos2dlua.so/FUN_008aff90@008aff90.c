
undefined8 FUN_008aff90(lua_State *param_1)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  int iVar4;
  Menu *this;
  ulong uVar5;
  Value *local_50;
  Value *local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != (lua_State *)0x0) {
    this = (Menu *)tolua_tousertype(param_1,1,0);
    iVar4 = lua_gettop(param_1);
    iVar4 = iVar4 + -1;
    if (iVar4 < 1) {
      luaL_error(param_1,
                 "\'alignItemsInColumns\' has wrong number of arguments in tolua_cocos2dx_Menu_alignItemsInColumns: %d, was expecting %d\n"
                 ,iVar4,1);
    }
    else {
      local_48 = (Value *)0x0;
      uStack_40 = 0;
      local_50 = (Value *)0x0;
      uVar5 = luavals_variadic_to_ccvaluevector(param_1,iVar4,(vector *)&local_50);
      if ((uVar5 & 1) != 0) {
        cocos2d::Menu::alignItemsInColumnsWithArray(this,(vector *)&local_50);
      }
      pVVar3 = local_50;
      pVVar2 = local_48;
      if (local_50 != (Value *)0x0) {
        while (pVVar2 != pVVar3) {
          cocos2d::Value::~Value(pVVar2 + -0x10);
          pVVar2 = pVVar2 + -0x10;
        }
        local_48 = pVVar3;
        operator_delete(local_50);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

