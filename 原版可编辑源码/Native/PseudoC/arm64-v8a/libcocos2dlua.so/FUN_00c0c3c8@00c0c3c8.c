
void FUN_00c0c3c8(long *param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 local_18 [2];
  int local_10;
  
  FUN_00c0ad38(param_1,local_18,0);
  lVar2 = *param_1;
  FUN_00c08060(lVar2,local_18);
  if (local_10 == 0xc) {
    FUN_00c07f1c(lVar2,local_18[0]);
  }
  uVar1 = *(int *)(lVar2 + 0x34) + 1;
  if (*(byte *)(lVar2 + 0x5a) < uVar1) {
    if (0xf9 < uVar1) {
                    /* WARNING: Subroutine does not return */
      entry(lVar2);
    }
    *(char *)(lVar2 + 0x5a) = (char)uVar1;
  }
  *(uint *)(lVar2 + 0x34) = uVar1;
  FUN_00c08ac0(lVar2,local_18);
  return;
}

