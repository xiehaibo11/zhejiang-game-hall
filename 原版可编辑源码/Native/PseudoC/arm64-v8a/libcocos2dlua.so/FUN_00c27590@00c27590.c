
void FUN_00c27590(long param_1,int *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  int local_4;
  
  if (*(int *)(param_1 + 4) == 0x28) {
    FUN_00c2593c();
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 - 0x10dU < 0x1d) {
LAB_00c27670:
      iVar1 = FUN_00c267d0(param_1);
      param_2[1] = iVar1;
    }
    else {
      if (iVar1 == 0x100) {
        if (**(uint **)(param_1 + 0x18) >> 0x1c == 7) goto LAB_00c27670;
      }
      else if (iVar1 == 0x24) goto LAB_00c27670;
      FUN_00c26d04(param_1,param_2);
    }
    if (*(int *)(param_1 + 4) != 0x29) {
                    /* WARNING: Subroutine does not return */
      FUN_00c258bc(param_1,0x29);
    }
    FUN_00c2593c();
    uVar2 = FUN_00c0ecb0(*(undefined8 *)(param_1 + 0x50),param_2[1],&local_4);
    if (param_3 == 0) goto LAB_00c2764c;
LAB_00c275cc:
    if (local_4 == -1) {
      if (param_2[1] != 0x14) {
                    /* WARNING: Subroutine does not return */
        FUN_00c2520c(param_1,0xb92);
      }
      goto LAB_00c275dc;
    }
  }
  else {
    FUN_00c26828();
    uVar2 = FUN_00c0ecb0(*(undefined8 *)(param_1 + 0x50),param_2[1],&local_4);
    if (param_3 != 0) goto LAB_00c275cc;
LAB_00c2764c:
    local_4 = 1 << (uVar2 >> 0x10 & 0xf);
  }
  *param_2 = local_4;
LAB_00c275dc:
  param_2[1] = 10;
  return;
}

