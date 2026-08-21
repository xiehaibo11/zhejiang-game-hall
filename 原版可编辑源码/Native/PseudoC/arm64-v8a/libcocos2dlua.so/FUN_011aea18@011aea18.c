
void FUN_011aea18(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = uv_now(*(undefined8 *)(param_1 + -0x10));
  *(undefined8 *)(param_1 + -0x18) = uVar2;
  iVar1 = uv_fs_stat(*(undefined8 *)(param_1 + -0x10),param_1 + 0x98,param_1 + 0x2f0,FUN_011ae670);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

