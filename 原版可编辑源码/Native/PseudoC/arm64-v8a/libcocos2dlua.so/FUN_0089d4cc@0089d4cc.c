
void FUN_0089d4cc(lua_State *param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  void *pvVar6;
  double dVar7;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = tolua_isusertype(param_1,1,"CCArray",0,auStack_48);
  if (((iVar3 == 0) || (iVar3 = tolua_isnumber(param_1,2,0,auStack_48), iVar3 == 0)) ||
     (iVar3 = tolua_isnoobj(param_1,3,auStack_48), iVar3 == 0)) {
    tolua_error(param_1,"#ferror in function \'objectAtIndex\'.",auStack_48);
    uVar5 = 0;
  }
  else {
    lVar4 = tolua_tousertype(param_1,1,0);
    dVar7 = (double)tolua_tonumber(0,param_1,2);
    if (lVar4 == 0) {
      tolua_error(param_1,"invalid \'self\' in function \'objectAtIndex\'",0);
    }
    pvVar6 = *(void **)(*(long *)(*(long *)(lVar4 + 0x30) + 0x10) + (ulong)(uint)(int)dVar7 * 8);
    piVar1 = (int *)((long)pvVar6 + 0x10);
    if (pvVar6 == (void *)0x0) {
      iVar3 = -1;
      piVar1 = (int *)0x0;
    }
    else {
      iVar3 = *(int *)((long)pvVar6 + 0xc);
    }
    toluafix_pushusertype_ccobject(param_1,iVar3,piVar1,pvVar6,"cc.Ref");
    uVar5 = 1;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

