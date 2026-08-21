
undefined8 FUN_0089e1f0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  __Array *this;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isusertype(param_1,1,"CCArray",0,auStack_48);
  if ((iVar2 == 0) || (iVar2 = tolua_isnoobj(param_1,2,auStack_48), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'removeAllObjects\'.",auStack_48);
  }
  else {
    this = (__Array *)tolua_tousertype(param_1,1,0);
    if (this == (__Array *)0x0) {
      tolua_error(param_1,"invalid \'self\' in function \'removeAllObjects\'",0);
    }
    cocos2d::__Array::removeAllObjects(this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

