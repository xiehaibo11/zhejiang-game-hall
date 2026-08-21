
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf9b0c(byte *param_1,char *param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  char acStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = snprintf(acStack_18,0x10,"%u.%u.%u.%u",(ulong)*param_1,(ulong)param_1[1],(ulong)param_1[2]
                   ,(ulong)param_1[3]);
  if ((iVar1 < 1) || (param_3 <= (ulong)(long)iVar1)) {
    uVar2 = 0xffffffe4;
  }
  else {
    strncpy(param_2,acStack_18,param_3);
    uVar2 = 0;
    param_2[param_3 - 1] = '\0';
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

