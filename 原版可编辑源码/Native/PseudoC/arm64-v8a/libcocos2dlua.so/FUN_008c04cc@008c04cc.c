
undefined4 FUN_008c04cc(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  double dVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isnumber(param_1,1,0,auStack_48);
  if ((iVar2 == 0) || (iVar2 = tolua_isnoobj(param_1,2,auStack_48), iVar2 == 0)) {
    tolua_error(param_1,"#ferror in function \'glCreateShader\'.",auStack_48);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    dVar4 = (double)tolua_tonumber(0,param_1,1);
    iVar2 = glCreateShader((int)dVar4);
    tolua_pushnumber((double)iVar2,param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

