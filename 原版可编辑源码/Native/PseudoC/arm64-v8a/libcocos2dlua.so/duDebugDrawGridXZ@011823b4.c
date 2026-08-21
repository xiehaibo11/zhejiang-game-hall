
/* duDebugDrawGridXZ(duDebugDraw*, float, float, float, int, int, float, unsigned int, float) */

void duDebugDrawGridXZ(duDebugDraw *param_1,float param_2,float param_3,float param_4,int param_5,
                      int param_6,float param_7,uint param_8,float param_9)

{
  int iVar1;
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  undefined8 uVar2;
  undefined4 in_register_00005044;
  undefined4 in_register_00005084;
  float fVar3;
  
  uVar2 = CONCAT44(in_register_00005024,param_3);
  if (param_1 != (duDebugDraw *)0x0) {
    (**(code **)(*(long *)param_1 + 0x20))(CONCAT44(in_register_00005084,param_9),param_1,1);
    if (-1 < param_6) {
      iVar1 = 0;
      do {
        fVar3 = (float)iVar1 * param_7 + param_4;
        (**(code **)(*(long *)param_1 + 0x30))
                  (CONCAT44(in_register_00005004,param_2),uVar2,fVar3,param_1,param_8);
        (**(code **)(*(long *)param_1 + 0x30))
                  ((float)param_5 * param_7 + param_2,uVar2,fVar3,param_1,param_8);
        iVar1 = iVar1 + 1;
      } while (param_6 + 1 != iVar1);
    }
    if (-1 < param_5) {
      iVar1 = 0;
      do {
        fVar3 = (float)iVar1 * param_7 + param_2;
        (**(code **)(*(long *)param_1 + 0x30))
                  (fVar3,uVar2,CONCAT44(in_register_00005044,param_4),param_1,param_8);
        (**(code **)(*(long *)param_1 + 0x30))
                  (fVar3,uVar2,(float)param_6 * param_7 + param_4,param_1,param_8);
        iVar1 = iVar1 + 1;
      } while (param_5 + 1 != iVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x01182514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x48))(param_1);
    return;
  }
  return;
}

