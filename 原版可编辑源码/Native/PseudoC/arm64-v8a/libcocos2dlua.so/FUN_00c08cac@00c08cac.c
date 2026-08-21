
uint FUN_00c08cac(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  FUN_00c08060();
  if (param_2[2] == 0xc) {
    if (param_2[3] == param_2[4]) goto LAB_00c08d1c;
    if (*param_2 < *(uint *)(param_1 + 0x38)) {
      FUN_00c08060(param_1,param_2);
      uVar1 = param_2[2];
      uVar2 = *param_2;
      goto joined_r0x00c08d68;
    }
  }
  else {
    FUN_00c08060(param_1,param_2);
    uVar1 = param_2[2];
    uVar2 = *param_2;
joined_r0x00c08d68:
    if (uVar1 == 0xc) {
      FUN_00c07f1c(param_1,uVar2);
    }
    uVar2 = *(int *)(param_1 + 0x34) + 1;
    if (*(byte *)(param_1 + 0x5a) < uVar2) {
      if (0xf9 < uVar2) {
                    /* WARNING: Subroutine does not return */
        entry(param_1);
      }
      *(char *)(param_1 + 0x5a) = (char)uVar2;
    }
    *(uint *)(param_1 + 0x34) = uVar2;
  }
  FUN_00c08ac0(param_1,param_2);
LAB_00c08d1c:
  return *param_2;
}

