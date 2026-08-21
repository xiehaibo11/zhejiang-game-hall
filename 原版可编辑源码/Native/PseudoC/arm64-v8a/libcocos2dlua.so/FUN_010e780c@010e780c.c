
undefined8 FUN_010e780c(long *param_1)

{
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)param_1[5];
  sVar1 = fwrite((void *)puVar3[6],1,0x1000,(FILE *)puVar3[5]);
  if (sVar1 != 0x1000) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0x26;
    (*(code *)*puVar2)(param_1);
  }
  *puVar3 = puVar3[6];
  puVar3[1] = 0x1000;
  return 1;
}

