
undefined8 FUN_008a3bbc(undefined8 param_1)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  int iVar4;
  Menu *this;
  __Array *p_Var5;
  Value *local_60;
  Value *local_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar4 = tolua_isusertype(param_1,1,&DAT_0128a454,0,auStack_48);
  if (((iVar4 == 0) || (iVar4 = tolua_isusertype(param_1,2,"CCArray",0,auStack_48), iVar4 == 0)) ||
     (iVar4 = tolua_isnoobj(param_1,3,auStack_48), iVar4 == 0)) {
    tolua_error(param_1,"#ferror in function \'alignItemsInColumnsWithArray\'.",auStack_48);
  }
  else {
    this = (Menu *)tolua_tousertype(param_1,1,0);
    p_Var5 = (__Array *)tolua_tousertype(param_1,2,0);
    if (this == (Menu *)0x0) {
      tolua_error(param_1,"invalid \'self\' in function \'alignItemsInColumnsWithArray\'",0);
    }
    local_58 = (Value *)0x0;
    uStack_50 = 0;
    local_60 = (Value *)0x0;
    array_to_valuevector_deprecated(p_Var5,(vector *)&local_60);
    cocos2d::Menu::alignItemsInColumnsWithArray(this,(vector *)&local_60);
    pVVar3 = local_60;
    pVVar2 = local_58;
    if (local_60 != (Value *)0x0) {
      while (pVVar2 != pVVar3) {
        cocos2d::Value::~Value(pVVar2 + -0x10);
        pVVar2 = pVVar2 + -0x10;
      }
      local_58 = pVVar3;
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

