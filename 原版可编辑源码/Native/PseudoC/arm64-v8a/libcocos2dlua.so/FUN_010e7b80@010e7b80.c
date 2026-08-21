
undefined8 FUN_010e7b80(long *param_1)

{
  size_t sVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_1[5];
  sVar1 = fread((void *)puVar4[8],1,0x1000,(FILE *)puVar4[7]);
  if (sVar1 == 0) {
    if (*(int *)(puVar4 + 9) != 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x2b;
      (*(code *)*puVar2)(param_1);
    }
    lVar3 = *param_1;
    *(undefined4 *)(lVar3 + 0x28) = 0x7b;
    (**(code **)(lVar3 + 8))(param_1,0xffffffff);
    *(undefined1 *)puVar4[8] = 0xff;
    *(undefined1 *)(puVar4[8] + 1) = 0xd9;
    sVar1 = 2;
  }
  *(undefined4 *)(puVar4 + 9) = 0;
  *puVar4 = puVar4[8];
  puVar4[1] = sVar1;
  return 1;
}

