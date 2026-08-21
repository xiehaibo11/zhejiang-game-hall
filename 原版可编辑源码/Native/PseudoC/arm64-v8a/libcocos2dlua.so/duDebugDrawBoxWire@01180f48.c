
/* duDebugDrawBoxWire(duDebugDraw*, float, float, float, float, float, float, unsigned int, float)
    */

void duDebugDrawBoxWire(duDebugDraw *param_1,float param_2,float param_3,float param_4,float param_5
                       ,float param_6,float param_7,uint param_8,float param_9)

{
  undefined4 in_register_000050c4;
  
  if (param_1 != (duDebugDraw *)0x0) {
    (**(code **)(*(long *)param_1 + 0x20))(CONCAT44(in_register_000050c4,param_9),param_1,1);
    duAppendBoxWire(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
                    /* WARNING: Could not recover jumptable at 0x01180fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x48))(param_1);
    return;
  }
  return;
}

