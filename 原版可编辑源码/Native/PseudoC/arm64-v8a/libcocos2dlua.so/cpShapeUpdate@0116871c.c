
void cpShapeUpdate(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5,undefined8 *param_6)

{
  undefined4 uVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_30 = param_6[2];
  uStack_38 = param_6[1];
  local_40 = *param_6;
  uVar1 = (**(code **)(*param_5 + 8))(param_5,&local_40);
  *(undefined4 *)((long)param_5 + 0x2c) = uVar1;
  *(undefined4 *)(param_5 + 6) = param_2;
  *(undefined4 *)((long)param_5 + 0x34) = param_3;
  *(undefined4 *)(param_5 + 7) = param_4;
  return;
}

