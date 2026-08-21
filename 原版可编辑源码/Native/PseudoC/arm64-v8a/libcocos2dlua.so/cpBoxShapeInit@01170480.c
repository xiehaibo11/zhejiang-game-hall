
void cpBoxShapeInit(float param_1,float param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  float local_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  
  local_30 = param_1 * 0.5;
  fStack_24 = param_2 * 0.5;
  local_20 = param_1 * -0.5;
  fStack_2c = param_2 * -0.5;
  local_28 = local_30;
  fStack_1c = fStack_24;
  local_18 = local_20;
  fStack_14 = fStack_2c;
  cpPolyShapeInitRaw(param_3,param_4,param_5,4,&local_30);
  return;
}

