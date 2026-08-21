
void cpBoxShapeNew(float param_1,float param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  
  pvVar1 = calloc(1,0x158);
  local_50 = param_1 * 0.5;
  fStack_44 = param_2 * 0.5;
  local_40 = param_1 * -0.5;
  fStack_4c = param_2 * -0.5;
  local_48 = local_50;
  fStack_3c = fStack_44;
  local_38 = local_40;
  fStack_34 = fStack_4c;
  cpPolyShapeInitRaw(param_3,pvVar1,param_4,4,&local_50);
  return;
}

