
void FUN_00c29260(long param_1)

{
  undefined4 uVar1;
  undefined1 auStack_9a0 [2464];
  
  FUN_00c27ec4(param_1,auStack_9a0,0);
  FUN_00c263c4(param_1,auStack_9a0);
  uVar1 = FUN_00c25220(param_1,auStack_9a0);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  if (*(int *)(param_1 + 4) == 0x103) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00c258bc(param_1,0x103);
}

