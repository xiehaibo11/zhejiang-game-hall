
/* cocostudio::TransformHelp::matrixToNode(cocos2d::AffineTransform const&, cocostudio::BaseData&)
    */

void cocostudio::TransformHelp::matrixToNode(AffineTransform *param_1,BaseData *param_2)

{
  float fVar1;
  float fVar2;
  float in_s1;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  helpPoint1 = 0x3f80000000000000;
  fVar1 = (float)cocos2d::__CCPointApplyAffineTransform((Vec2 *)&helpPoint1,param_1);
  helpPoint1._0_4_ = fVar1 - (float)*(undefined8 *)(param_1 + 0x10);
  helpPoint1._4_4_ = in_s1 - (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  helpPoint2 = 0x3f800000;
  fVar1 = (float)cocos2d::__CCPointApplyAffineTransform((Vec2 *)&helpPoint2,param_1);
  fVar5 = *(float *)(param_1 + 0x10);
  fVar6 = *(float *)(param_1 + 0x14);
  fVar1 = fVar1 - fVar5;
  in_s1 = in_s1 - fVar6;
  helpPoint2 = CONCAT44(in_s1,fVar1);
  fVar2 = atan2f(helpPoint1._4_4_,(float)helpPoint1);
  *(float *)(param_2 + 0x30) = -(fVar2 + -1.5707964);
  fVar1 = atan2f(in_s1,fVar1);
  *(float *)(param_2 + 0x34) = fVar1;
  fVar1 = *(float *)param_1;
  fVar3 = *(float *)(param_1 + 4);
  fVar2 = *(float *)(param_1 + 8);
  fVar4 = *(float *)(param_1 + 0xc);
  *(float *)(param_2 + 0x24) = fVar5;
  *(float *)(param_2 + 0x28) = fVar6;
  *(ulong *)(param_2 + 0x38) =
       CONCAT44(SQRT(fVar2 * fVar2 + fVar4 * fVar4),SQRT(fVar1 * fVar1 + fVar3 * fVar3));
  return;
}

