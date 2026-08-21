
void FUN_00d894dc(long *param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = param_1[0x40];
  if (param_2 != 0) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 3;
    (*(code *)*puVar2)(param_1);
  }
  uVar1 = *(undefined4 *)((long)param_1 + 0x34);
  *(undefined8 *)(lVar3 + 100) = 0;
  *(undefined4 *)(lVar3 + 0x60) = uVar1;
  *(int *)(lVar3 + 0x6c) = *(int *)((long)param_1 + 0x164) << 1;
  return;
}

