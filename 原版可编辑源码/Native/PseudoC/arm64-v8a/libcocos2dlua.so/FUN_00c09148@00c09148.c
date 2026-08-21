
void FUN_00c09148(long param_1,int param_2,int param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  
  param_2 = param_2 - param_3;
  if (param_4[2] == 0xd) {
    if (param_2 + 1 < 0) {
      *(undefined1 *)(*(long *)(param_1 + 0x48) + (ulong)*param_4 * 8 + 3) = 1;
    }
    else {
      *(char *)(*(long *)(param_1 + 0x48) + (ulong)*param_4 * 8 + 3) = (char)param_2 + '\x02';
      if (1 < param_2 + 1) {
        FUN_00c07f38(param_1,param_2);
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + param_2;
        return;
      }
    }
  }
  else {
    if (param_4[2] != 0xe) {
      FUN_00c08060(param_1,param_4);
      if (param_4[2] == 0xc) {
        FUN_00c07f1c(param_1,*param_4);
      }
      uVar1 = *(int *)(param_1 + 0x34) + 1;
      if (*(byte *)(param_1 + 0x5a) < uVar1) {
        if (0xf9 < uVar1) goto LAB_00c09280;
        *(char *)(param_1 + 0x5a) = (char)uVar1;
      }
      *(uint *)(param_1 + 0x34) = uVar1;
      FUN_00c08ac0(param_1,param_4);
    }
    if (0 < param_2) {
      iVar2 = *(int *)(param_1 + 0x34);
      uVar1 = param_2 + iVar2;
      if (*(byte *)(param_1 + 0x5a) < uVar1) {
        if (0xf9 < uVar1) {
LAB_00c09280:
                    /* WARNING: Subroutine does not return */
          entry(param_1);
        }
        *(char *)(param_1 + 0x5a) = (char)uVar1;
      }
      *(uint *)(param_1 + 0x34) = uVar1;
      FUN_00c081ac(param_1,iVar2,param_2);
      return;
    }
  }
  return;
}

