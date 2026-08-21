
void FUN_0089cedc(lua_State *param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  __Array *p_Var4;
  void *pvVar5;
  undefined8 uVar6;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  iVar3 = tolua_isusertable(param_1,1,"CCArray",0,auStack_38);
  if (((iVar3 == 0) || (iVar3 = tolua_isusertype(param_1,2,"CCArray",0,auStack_38), iVar3 == 0)) ||
     (iVar3 = tolua_isnoobj(param_1,3,auStack_38), iVar3 == 0)) {
    tolua_error(param_1,"#ferror in function \'createWithArray\'.",auStack_38);
    uVar6 = 0;
  }
  else {
    p_Var4 = (__Array *)tolua_tousertype(param_1,2,0);
    pvVar5 = (void *)cocos2d::__Array::createWithArray(p_Var4);
    piVar1 = (int *)((long)pvVar5 + 0x10);
    if (pvVar5 == (void *)0x0) {
      iVar3 = -1;
      piVar1 = (int *)0x0;
    }
    else {
      iVar3 = *(int *)((long)pvVar5 + 0xc);
    }
    toluafix_pushusertype_ccobject(param_1,iVar3,piVar1,pvVar5,"CCArray");
    uVar6 = 1;
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

