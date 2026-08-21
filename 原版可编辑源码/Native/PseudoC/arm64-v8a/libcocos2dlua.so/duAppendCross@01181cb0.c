
/* duAppendCross(duDebugDraw*, float, float, float, float, unsigned int) */

void duAppendCross(duDebugDraw *param_1,float param_2,float param_3,float param_4,float param_5,
                  uint param_6)

{
  undefined4 in_register_00005004;
  undefined8 uVar1;
  undefined4 in_register_00005024;
  undefined8 uVar2;
  undefined4 in_register_00005044;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(in_register_00005044,param_4);
  uVar2 = CONCAT44(in_register_00005024,param_3);
  uVar1 = CONCAT44(in_register_00005004,param_2);
  if (param_1 != (duDebugDraw *)0x0) {
    (**(code **)(*(long *)param_1 + 0x30))(param_2 - param_5);
    (**(code **)(*(long *)param_1 + 0x30))(param_2 + param_5,uVar2,uVar3,param_1,param_6);
    (**(code **)(*(long *)param_1 + 0x30))(uVar1,param_3 - param_5,uVar3,param_1,param_6);
    (**(code **)(*(long *)param_1 + 0x30))(uVar1,param_3 + param_5,uVar3,param_1,param_6);
    (**(code **)(*(long *)param_1 + 0x30))(uVar1,uVar2,param_4 - param_5,param_1,param_6);
                    /* WARNING: Could not recover jumptable at 0x01181d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x30))(uVar1,uVar2,param_4 + param_5,param_1,param_6);
    return;
  }
  return;
}

