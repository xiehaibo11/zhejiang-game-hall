
void FUN_00c1a220(long param_1,undefined8 *param_2)

{
  byte bVar1;
  
  param_2[2] = *(undefined8 *)param_2[4];
  *(undefined1 *)((long)param_2 + 10) = 1;
  param_2[4] = param_2 + 2;
  *param_2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 **)(param_1 + 0x38) = param_2;
  bVar1 = *(byte *)(param_2 + 1);
  if ((bVar1 & 7) == 0) {
    if ((byte)(*(char *)(param_1 + 0x31) - 1U) < 2) {
      *(byte *)(param_2 + 1) = bVar1 | 4;
      if (0xfffffff6 < (int)((long)param_2[2] >> 0x2f) + 4U) {
        if ((*(byte *)((param_2[2] & 0x7fffffffffff) + 8) & 3) != 0) {
          FUN_00c1a1ac();
          return;
        }
      }
    }
    else {
      *(byte *)(param_2 + 1) = *(byte *)(param_1 + 0x30) & 3 | bVar1 & 0xf8;
    }
  }
  return;
}

