
void FUN_00dee1d4(int *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar1 = *(byte *)((long)param_1 + 0x1f);
  bVar2 = *(byte *)((long)param_1 + 0x3f);
  bVar3 = *(byte *)((long)param_1 + 0x5f);
  *param_1 = ((uint)*(byte *)((long)param_1 + -0x21) + (uint)*(byte *)((long)param_1 + -1) * 2 +
              (uint)bVar1 + 2 >> 2) * 0x1010101;
  param_1[8] = ((uint)*(byte *)((long)param_1 + -1) + (uint)bVar1 * 2 + (uint)bVar2 + 2 >> 2) *
               0x1010101;
  param_1[0x10] = ((uint)bVar1 + (uint)bVar2 * 2 + (uint)bVar3 + 2 >> 2) * 0x1010101;
  param_1[0x18] = ((uint)bVar2 + (uint)bVar3 + (uint)bVar3 * 2 + 2 >> 2) * 0x1010101;
  return;
}

