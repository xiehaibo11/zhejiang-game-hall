
void FUN_0089d708(lua_State *param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  __Array *this;
  void *pvVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = tolua_isusertype(param_1,1,"CCArray",0,auStack_48);
  if ((iVar3 == 0) || (iVar3 = tolua_isnoobj(param_1,2,auStack_48), iVar3 == 0)) {
    tolua_error(param_1,"#ferror in function \'randomObject\'.",auStack_48);
    uVar5 = 0;
  }
  else {
    this = (__Array *)tolua_tousertype(param_1,1,0);
    if (this == (__Array *)0x0) {
      tolua_error(param_1,"invalid \'self\' in function \'randomObject\'",0);
    }
    pvVar4 = (void *)cocos2d::__Array::getRandomObject(this);
    piVar1 = (int *)((long)pvVar4 + 0x10);
    if (pvVar4 == (void *)0x0) {
      iVar3 = -1;
      piVar1 = (int *)0x0;
    }
    else {
      iVar3 = *(int *)((long)pvVar4 + 0xc);
    }
    toluafix_pushusertype_ccobject(param_1,iVar3,piVar1,pvVar4,"cc.Ref");
    uVar5 = 1;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

