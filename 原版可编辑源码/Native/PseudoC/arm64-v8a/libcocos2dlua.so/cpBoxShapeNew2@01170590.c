
void cpBoxShapeNew2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  void *pvVar1;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  
  pvVar1 = calloc(1,0x158);
  local_60 = param_3;
  uStack_5c = param_2;
  local_58 = param_3;
  uStack_54 = param_4;
  local_50 = param_1;
  uStack_4c = param_4;
  local_48 = param_1;
  uStack_44 = param_2;
  cpPolyShapeInitRaw(param_5,pvVar1,param_6,4,&local_60);
  return;
}

