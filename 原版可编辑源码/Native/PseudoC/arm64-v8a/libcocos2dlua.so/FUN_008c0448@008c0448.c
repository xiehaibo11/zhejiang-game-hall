
void FUN_008c0448(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_isnoobj(param_1,1,auStack_38);
  if (iVar2 == 0) {
    tolua_error(param_1,"#ferror in function \'glCreateProgram\'.",auStack_38);
  }
  else {
    iVar3 = glCreateProgram();
    tolua_pushnumber((double)iVar3,param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != 0);
}

