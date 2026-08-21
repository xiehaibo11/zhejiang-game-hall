
/* duDebugDrawCircle(duDebugDraw*, float, float, float, float, unsigned int, float) */

void duDebugDrawCircle(duDebugDraw *param_1,float param_2,float param_3,float param_4,float param_5,
                      uint param_6,float param_7)

{
  undefined4 in_register_00005084;
  
  if (param_1 != (duDebugDraw *)0x0) {
    (**(code **)(*(long *)param_1 + 0x20))(CONCAT44(in_register_00005084,param_7),param_1,1);
    duAppendCircle(param_1,param_2,param_3,param_4,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x011819e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x48))(param_1);
    return;
  }
  return;
}

