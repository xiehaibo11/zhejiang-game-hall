
void TIFFSwabArrayOfDouble(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  
  if (0 < param_2) {
    param_2 = param_2 + 1;
    puVar3 = (undefined1 *)(param_1 + 3);
    do {
      uVar1 = puVar3[4];
      param_2 = param_2 + -1;
      puVar3[4] = puVar3[-3];
      uVar2 = puVar3[3];
      puVar3[-3] = uVar1;
      puVar3[3] = puVar3[-2];
      uVar1 = puVar3[2];
      puVar3[-2] = uVar2;
      puVar3[2] = puVar3[-1];
      uVar2 = puVar3[1];
      puVar3[-1] = uVar1;
      puVar3[1] = *puVar3;
      *puVar3 = uVar2;
      puVar3 = puVar3 + 8;
    } while (1 < param_2);
  }
  return;
}

