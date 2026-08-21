
void FUN_00ef28d0(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  (**(code **)(*param_1 + 0x308))();
  plVar2 = (long *)(**(code **)(*param_1 + 0x240))(param_1);
  puVar1 = (undefined8 *)plVar2[1];
  for (puVar3 = (undefined8 *)*plVar2; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    FUN_00ef28d0(*puVar3,param_2);
  }
  return;
}

