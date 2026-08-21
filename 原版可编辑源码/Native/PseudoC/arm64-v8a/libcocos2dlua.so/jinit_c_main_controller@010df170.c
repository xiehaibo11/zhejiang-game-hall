
void jinit_c_main_controller(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  
  puVar1 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x70);
  param_1[0x3f] = puVar1;
  *puVar1 = FUN_010df24c;
  if (*(int *)(param_1 + 0x24) == 0) {
    if (param_2 != 0) {
      puVar1 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar1 + 5) = 3;
                    /* WARNING: Could not recover jumptable at 0x010df1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar1)(param_1);
      return;
    }
    if (0 < *(int *)((long)param_1 + 0x5c)) {
      lVar3 = 0;
      piVar4 = (int *)(param_1[0xd] + 0x28);
      do {
        uVar2 = (**(code **)(param_1[1] + 0x10))
                          (param_1,1,piVar4[-1] * piVar4[-3],*piVar4 * piVar4[-7]);
        puVar1[lVar3 + 4] = uVar2;
        lVar3 = lVar3 + 1;
        piVar4 = piVar4 + 0x18;
      } while (lVar3 < *(int *)((long)param_1 + 0x5c));
    }
  }
  return;
}

