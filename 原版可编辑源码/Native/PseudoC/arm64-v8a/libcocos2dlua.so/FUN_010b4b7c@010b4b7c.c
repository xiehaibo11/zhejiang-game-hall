
void FUN_010b4b7c(ulong *param_1,undefined8 *param_2,uint param_3,int *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 local_80;
  undefined8 uStack_78;
  int local_70;
  undefined4 uStack_6c;
  long local_68;
  long lStack_60;
  int local_58;
  
  *param_4 = -1;
  FUN_010b4544(param_1,&local_68);
  if (local_58 == 3) {
    uVar1 = *param_1;
    uVar2 = param_1[2];
    *param_1 = local_68 + 1U;
    param_1[2] = lStack_60 - 1U;
    puVar3 = param_2;
    if (local_68 + 1U < lStack_60 - 1U) {
      if (param_2 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
        do {
          FUN_010b4544(param_1,&local_80);
          if (local_70 == 0) break;
          puVar3 = puVar3 + 3;
        } while (*param_1 < param_1[2]);
      }
      else {
        do {
          FUN_010b4544(param_1,&local_80);
          if (local_70 == 0) break;
          if (puVar3 < param_2 + (ulong)param_3 * 3) {
            puVar3[2] = CONCAT44(uStack_6c,local_70);
            puVar3[1] = uStack_78;
            *puVar3 = local_80;
          }
          puVar3 = puVar3 + 3;
        } while (*param_1 < param_1[2]);
      }
    }
    *param_4 = (int)((ulong)((long)puVar3 - (long)param_2) >> 3) * -0x55555555;
    *param_1 = uVar1;
    param_1[2] = uVar2;
  }
  return;
}

