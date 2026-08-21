
/* cocos2d::PUForceField::initialise(cocos2d::PUForceField::ForceFieldType, cocos2d::Vec3 const&,
   unsigned int, unsigned short, double, double, double, cocos2d::Vec3 const&) */

void cocos2d::PUForceField::initialise
               (long *param_1,undefined8 param_2,long *param_3,undefined4 param_4,undefined4 param_5
               ,undefined8 *param_6)

{
  long lVar1;
  
  (**(code **)(*param_1 + 0x18))(param_1,param_2,param_4,param_5,param_6);
  lVar1 = *param_3;
  *(int *)(param_1 + 9) = (int)param_3[1];
  param_1[8] = lVar1;
  param_1[8] = CONCAT44((float)((ulong)param_1[8] >> 0x20) + (float)((ulong)*param_6 >> 0x20) * -0.5
                        ,(float)param_1[8] + (float)*param_6 * -0.5);
  *(float *)(param_1 + 9) = *(float *)(param_1 + 9) + *(float *)(param_6 + 1) * -0.5;
  return;
}

