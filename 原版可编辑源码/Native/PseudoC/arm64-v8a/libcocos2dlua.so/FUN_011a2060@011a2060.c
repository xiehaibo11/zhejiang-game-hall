
uint FUN_011a2060(long param_1)

{
  long lVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint local_60;
  uint local_5c;
  char acStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x1f8) != -1) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return 0;
    }
    goto LAB_011a222c;
  }
  if ((DAT_01793628 & 1) == 0) {
    uVar2 = FUN_011ae118(0,0x80800);
    if (uVar2 == 0xffffffff) {
      piVar3 = (int *)__errno();
      iVar4 = *piVar3;
      if (iVar4 == 0x26) {
        DAT_01793628 = 1;
        goto joined_r0x011a2140;
      }
LAB_011a2164:
      uVar2 = -iVar4;
    }
joined_r0x011a2110:
    if (-1 < (int)uVar2) {
      local_5c = 0xffffffff;
      local_60 = uVar2;
      goto LAB_011a21d0;
    }
    if (uVar2 == 0xffffffda) goto LAB_011a2174;
  }
  else {
joined_r0x011a2140:
    if ((DAT_0179362c & 1) == 0) {
      uVar2 = FUN_011ae0f4(0);
      if (uVar2 != 0xffffffff) {
        FUN_011a2cfc(uVar2,1);
        FUN_011a2ca0(uVar2,1);
        goto joined_r0x011a2110;
      }
      piVar3 = (int *)__errno();
      iVar4 = *piVar3;
      if (iVar4 != 0x26) goto LAB_011a2164;
      DAT_0179362c = 1;
    }
LAB_011a2174:
    uVar2 = FUN_011a6068(&local_60,0x800);
    if (uVar2 == 0) {
      snprintf(acStack_58,0x20,"/proc/self/fd/%d",(ulong)local_60);
      uVar2 = FUN_011a2e68(acStack_58,2);
      if (-1 < (int)uVar2) {
        FUN_011a2d5c(local_60);
        FUN_011a2d5c(local_5c);
        local_60 = uVar2;
        local_5c = uVar2;
      }
    }
    else if ((int)uVar2 < 0) goto LAB_011a2204;
LAB_011a21d0:
    FUN_011a366c(param_1 + 0x1c8,FUN_011a2438,local_60);
    FUN_011a3688(param_1,param_1 + 0x1c8,1);
    uVar2 = 0;
    *(uint *)(param_1 + 0x200) = local_5c;
  }
LAB_011a2204:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
LAB_011a222c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

