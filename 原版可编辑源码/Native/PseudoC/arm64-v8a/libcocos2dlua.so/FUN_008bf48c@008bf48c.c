
undefined4 FUN_008bf48c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  double dVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isnumber(param_1,1,0,auStack_48);
  if ((iVar2 == 0) || (iVar2 = tolua_isnoobj(param_1,2,auStack_48), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'glCheckFramebufferStatus\'.",auStack_48);
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    dVar5 = (double)tolua_tonumber(0,param_1,1);
    uVar3 = glCheckFramebufferStatus((int)dVar5);
    tolua_pushnumber((double)uVar3,param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 008bf808 with catch @ 008bf544 */
  __stack_chk_fail();
}

