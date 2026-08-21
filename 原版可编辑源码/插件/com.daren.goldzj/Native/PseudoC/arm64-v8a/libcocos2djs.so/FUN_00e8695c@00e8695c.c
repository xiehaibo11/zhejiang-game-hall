
undefined8 FUN_00e8695c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(int *)(param_2 + 0x90) != 0x62697473) {
    return 0x12;
  }
  uVar2 = *param_1;
  puVar1 = param_1 + 6;
  param_1[5] = *(undefined8 *)(param_2 + 0xc0);
  if ((*(byte *)(*(long *)(param_2 + 0x128) + 8) & 1) == 0) {
    FT_Bitmap_Init(puVar1);
    uVar2 = FT_Bitmap_Copy(uVar2,param_2 + 0x98,puVar1);
    return uVar2;
  }
  uVar3 = *(undefined8 *)(param_2 + 0xa0);
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  uVar5 = *(undefined8 *)(param_2 + 0xb0);
  uVar4 = *(undefined8 *)(param_2 + 0xa8);
  param_1[10] = *(undefined8 *)(param_2 + 0xb8);
  param_1[7] = uVar3;
  *puVar1 = uVar2;
  param_1[9] = uVar5;
  param_1[8] = uVar4;
  *(uint *)(*(long *)(param_2 + 0x128) + 8) = *(uint *)(*(long *)(param_2 + 0x128) + 8) & 0xfffffffe
  ;
  return 0;
}

