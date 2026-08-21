
void FUN_0114faf4(undefined4 *param_1,int param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (0 < param_2) {
    puVar2 = param_1;
    do {
      puVar3 = puVar2 + 1;
      uVar1 = *puVar2;
      param_3[2] = (char)uVar1;
      *param_3 = (char)((uint)uVar1 >> 0x10);
      param_3[1] = (char)((uint)uVar1 >> 8);
      param_3 = param_3 + 3;
      puVar2 = puVar3;
    } while (puVar3 < param_1 + param_2);
  }
  return;
}

