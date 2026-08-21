
void cpPolyShapeNew(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                   undefined8 *param_5)

{
  void *pvVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  pvVar1 = calloc(1,0x158);
  local_50 = param_5[2];
  uStack_58 = param_5[1];
  local_60 = *param_5;
  cpPolyShapeInit(param_1,pvVar1,param_2,param_3,param_4,&local_60);
  return;
}

