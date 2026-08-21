
void FUN_00c08c34(long param_1,undefined4 *param_2)

{
  uint uVar1;
  
  FUN_00c08060();
  if (param_2[2] == 0xc) {
    FUN_00c07f1c(param_1,*param_2);
  }
  uVar1 = *(int *)(param_1 + 0x34) + 1;
  if (*(byte *)(param_1 + 0x5a) < uVar1) {
    if (0xf9 < uVar1) {
                    /* WARNING: Subroutine does not return */
      entry(param_1);
    }
    *(char *)(param_1 + 0x5a) = (char)uVar1;
  }
  *(uint *)(param_1 + 0x34) = uVar1;
  FUN_00c08ac0(param_1,param_2);
  return;
}

