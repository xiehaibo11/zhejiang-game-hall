
undefined8 FUN_0113407c(long param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x350);
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(undefined4 *)(lVar3 + 0x50) = 0;
  uVar1 = TIFFGetBitRevTable(*(short *)(param_1 + 0x7e) != 2);
  puVar2 = *(undefined4 **)(lVar3 + 0x68);
  *(undefined8 *)(lVar3 + 0x40) = uVar1;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *(undefined4 *)(lVar3 + 0x10);
    puVar2[1] = 0;
  }
  *(undefined4 *)(lVar3 + 0x90) = 0;
  return 1;
}

