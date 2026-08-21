
/* duDebugDrawArc(duDebugDraw*, float, float, float, float, float, float, float, float, float,
   unsigned int, float) */

void duDebugDrawArc(duDebugDraw *param_1,float param_2,float param_3,float param_4,float param_5,
                   float param_6,float param_7,float param_8,float param_9,float param_10,
                   uint param_11,float param_12)

{
  if (param_1 != (duDebugDraw *)0x0) {
    (**(code **)(*(long *)param_1 + 0x20))(param_12,param_1,1);
    duAppendArc(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                param_11);
                    /* WARNING: Could not recover jumptable at 0x011813e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x48))(param_1);
    return;
  }
  return;
}

