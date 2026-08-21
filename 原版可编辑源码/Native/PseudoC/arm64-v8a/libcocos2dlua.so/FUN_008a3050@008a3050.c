
void FUN_008a3050(lua_State *param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  FiniteTimeAction *pFVar4;
  FiniteTimeAction *pFVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = tolua_isusertable(param_1,1,"Sequence",0,auStack_48);
  if ((((iVar3 == 0) ||
       (iVar3 = tolua_isusertype(param_1,2,"FiniteTimeAction",0,auStack_48), iVar3 == 0)) ||
      (iVar3 = tolua_isusertype(param_1,3,"FiniteTimeAction",0,auStack_48), iVar3 == 0)) ||
     (iVar3 = tolua_isnoobj(param_1,4,auStack_48), iVar3 == 0)) {
    tolua_error(param_1,"#ferror in function \'createWithTwoActions\'.",auStack_48);
    uVar7 = 0;
  }
  else {
    pFVar4 = (FiniteTimeAction *)tolua_tousertype(param_1,2,0);
    pFVar5 = (FiniteTimeAction *)tolua_tousertype(param_1,3,0);
    pvVar6 = (void *)cocos2d::Sequence::createWithTwoActions(pFVar4,pFVar5);
    piVar1 = (int *)((long)pvVar6 + 0x10);
    if (pvVar6 == (void *)0x0) {
      iVar3 = -1;
      piVar1 = (int *)0x0;
    }
    else {
      iVar3 = *(int *)((long)pvVar6 + 0xc);
    }
    toluafix_pushusertype_ccobject(param_1,iVar3,piVar1,pvVar6,"cc.Sequence");
    uVar7 = 1;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

