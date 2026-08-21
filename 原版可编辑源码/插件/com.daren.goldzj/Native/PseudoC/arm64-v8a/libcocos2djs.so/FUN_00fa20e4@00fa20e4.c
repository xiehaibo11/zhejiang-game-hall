
void FUN_00fa20e4(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *param_2;
  **(int **)(param_1 + 8) = **(int **)(param_1 + 8) + 1;
  uVar1 = *(uint *)(lVar2 + 0xf);
  if ((uVar1 & 0x1c000000) == 0x8000000) {
    *(uint *)(lVar2 + 0xf) = uVar1 | 0x20000000;
    **(undefined1 **)(param_1 + 0x10) = 1;
  }
  return;
}

