
void FUN_015cb6b0(undefined8 *param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(param_2 + 0x18);
  uVar3 = *puVar6;
  pvVar2 = (void *)puVar6[2];
  *puVar6 = 0;
  puVar6[2] = uVar3;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  puVar6[3] = puVar6[1];
  if (param_3 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = operator_new__((long)param_3);
  }
  puVar6 = *(undefined8 **)(param_2 + 0x18);
  pvVar4 = (void *)*puVar6;
  *puVar6 = pvVar2;
  if (pvVar4 != (void *)0x0) {
    operator_delete__(pvVar4);
  }
  puVar6[1] = (long)param_3;
  puVar5 = *(undefined8 **)(param_2 + 0x18);
  uVar3 = *puVar5;
  uVar1 = puVar5[1];
  puVar6 = operator_new(0x20);
  puVar6[2] = uVar1;
  puVar6[3] = puVar5;
  *puVar6 = &PTR_FUN_01cc9730;
  puVar6[1] = uVar3;
  *param_1 = puVar6;
  return;
}

