
/* cocostudio::TransformHelp::matrixToNode(cocos2d::Mat4 const&, cocostudio::BaseData&) */

void cocostudio::TransformHelp::matrixToNode(Mat4 *param_1,BaseData *param_2)

{
  float fVar1;
  float fVar2;
  float in_s1;
  float fVar3;
  float fVar4;
  
  helpPoint1 = 0x3f80000000000000;
  fVar1 = (float)cocos2d::PointApplyTransform((Vec2 *)&helpPoint1,param_1);
  helpPoint1._0_4_ = fVar1 - (float)*(undefined8 *)(param_1 + 0x30);
  helpPoint1._4_4_ = in_s1 - (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  helpPoint2 = 0x3f800000;
  fVar1 = (float)cocos2d::PointApplyTransform((Vec2 *)&helpPoint2,param_1);
  fVar3 = *(float *)(param_1 + 0x30);
  fVar4 = *(float *)(param_1 + 0x34);
  helpPoint2 = CONCAT44(in_s1 - fVar4,fVar1 - fVar3);
  fVar2 = atan2f(helpPoint1._4_4_,(float)helpPoint1);
  *(float *)(param_2 + 0x30) = -(fVar2 + -1.5707964);
  fVar1 = atan2f(in_s1 - fVar4,fVar1 - fVar3);
  *(float *)(param_2 + 0x34) = fVar1;
  *(float *)(param_2 + 0x38) =
       SQRT(*(float *)param_1 * *(float *)param_1 +
            *(float *)(param_1 + 4) * *(float *)(param_1 + 4));
  *(float *)(param_2 + 0x3c) =
       SQRT(*(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10) +
            *(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x14));
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x34);
  return;
}

