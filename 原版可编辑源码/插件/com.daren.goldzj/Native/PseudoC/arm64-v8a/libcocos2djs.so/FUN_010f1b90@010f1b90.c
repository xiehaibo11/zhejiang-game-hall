
void FUN_010f1b90(long param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (uint)*(byte *)(param_1 + 3) - *param_2;
  if ((uint)(iVar1 * 4 >> 2) < 0x100) {
    *(char *)(param_1 + 3) = (char)iVar1;
    *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) & 0x1fffffff;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","static_cast<unsigned>(value) < 256");
}

