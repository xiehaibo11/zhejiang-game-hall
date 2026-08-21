
void FUN_0089d5f8(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  void *pvVar6;
  long lVar7;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isusertype(param_1,1,"CCArray",0,auStack_48);
  if ((iVar2 == 0) || (iVar2 = tolua_isnoobj(param_1,2,auStack_48), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'lastObject\'.",auStack_48);
    uVar4 = 0;
    goto LAB_0089d6e0;
  }
  lVar3 = tolua_tousertype(param_1,1,0);
  if (lVar3 == 0) {
    tolua_error(param_1,"invalid \'self\' in function \'lastObject\'",0);
  }
  lVar7 = **(long **)(lVar3 + 0x30);
  if (lVar7 < 1) {
    pvVar6 = (void *)0x0;
LAB_0089d6c4:
    piVar5 = (int *)0x0;
    iVar2 = -1;
  }
  else {
    pvVar6 = *(void **)((*(long **)(lVar3 + 0x30))[2] + lVar7 * 8 + -8);
    if (pvVar6 == (void *)0x0) goto LAB_0089d6c4;
    iVar2 = *(int *)((long)pvVar6 + 0xc);
    piVar5 = (int *)((long)pvVar6 + 0x10);
  }
  toluafix_pushusertype_ccobject(param_1,iVar2,piVar5,pvVar6,"cc.Ref");
  uVar4 = 1;
LAB_0089d6e0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

