
void FUN_0121ce34(float param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  long *plVar1;
  undefined8 local_50;
  undefined4 *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  float local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  plVar1 = *(long **)(param_2 + 0xe0);
  if (param_1 <= *(float *)(plVar1 + 1)) {
    local_50 = *(undefined8 *)(param_2 + 0xe8);
    puStack_48 = &local_18;
    uStack_38 = param_3[1];
    local_40 = *param_3;
    uStack_28 = param_4[1];
    local_30 = *param_4;
    local_20 = param_1;
    local_18 = param_5;
    uStack_14 = param_6;
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_50,0);
  }
  return;
}

