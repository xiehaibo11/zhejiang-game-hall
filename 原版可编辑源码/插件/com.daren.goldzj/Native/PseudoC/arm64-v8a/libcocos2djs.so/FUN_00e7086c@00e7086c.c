
void FUN_00e7086c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[3];
  uVar1 = param_1[7];
  if (puVar2 != (undefined8 *)0x0) {
    inflateEnd(puVar2 + 3);
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 7) = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[0xb] = 0;
    FUN_00e139fc(uVar1,puVar2);
    param_1[3] = 0;
  }
  if (param_1[5] != 0) {
    return;
  }
  FUN_00e139fc(uVar1,*param_1);
  *param_1 = 0;
  return;
}

