
void FUN_0089cd1c(lua_State *param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  iVar3 = tolua_isusertable(param_1,1,"CCArray",0,auStack_38);
  if ((iVar3 == 0) || (iVar3 = tolua_isnoobj(param_1,2,auStack_38), iVar3 == 0)) {
    tolua_error(param_1,"#ferror in function \'create\'.",auStack_38);
    uVar5 = 0;
  }
  else {
    pvVar4 = (void *)cocos2d::__Array::create();
    piVar1 = (int *)((long)pvVar4 + 0x10);
    if (pvVar4 == (void *)0x0) {
      iVar3 = -1;
      piVar1 = (int *)0x0;
    }
    else {
      iVar3 = *(int *)((long)pvVar4 + 0xc);
    }
    toluafix_pushusertype_ccobject(param_1,iVar3,piVar1,pvVar4,"CCArray");
    uVar5 = 1;
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

