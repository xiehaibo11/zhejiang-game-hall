
void FUN_0089d2dc(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isusertype(param_1,1,"CCArray",0,auStack_48);
  if ((iVar2 == 0) || (iVar2 = tolua_isnoobj(param_1,2,auStack_48), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'capacity\'.",auStack_48);
    uVar4 = 0;
  }
  else {
    lVar3 = tolua_tousertype(param_1,1,0);
    if (lVar3 == 0) {
      tolua_error(param_1,"invalid \'self\' in function \'capacity\'",0);
    }
    uVar4 = NEON_ucvtf((ulong)*(uint *)(*(long *)(lVar3 + 0x30) + 8));
    tolua_pushnumber(uVar4,param_1);
    uVar4 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

