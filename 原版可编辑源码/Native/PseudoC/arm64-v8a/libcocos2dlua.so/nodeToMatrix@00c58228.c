
/* cocostudio::TransformHelp::nodeToMatrix(cocostudio::BaseData const&, cocos2d::AffineTransform&)
    */

void cocostudio::TransformHelp::nodeToMatrix(BaseData *param_1,AffineTransform *param_2)

{
  float __x;
  float fVar1;
  float fVar2;
  float fVar3;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  
  __x = *(float *)(param_1 + 0x30);
  if (__x == -*(float *)(param_1 + 0x34)) {
    sincosf(__x,&fStack_54,&local_58);
    fVar2 = local_58 * *(float *)(param_1 + 0x38);
    fVar1 = -(fStack_54 * *(float *)(param_1 + 0x38));
    fStack_54 = fStack_54 * *(float *)(param_1 + 0x3c);
    local_58 = local_58 * *(float *)(param_1 + 0x3c);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x38);
    sincosf(*(float *)(param_1 + 0x34),&fStack_44,&local_48);
    fVar3 = *(float *)(param_1 + 0x3c);
    fVar2 = local_48 * fVar1;
    fVar1 = fStack_44 * fVar1;
    sincosf(__x,&fStack_4c,&local_50);
    fStack_54 = fStack_4c * fVar3;
    local_58 = local_50 * fVar3;
  }
  *(float *)param_2 = fVar2;
  *(float *)(param_2 + 4) = fVar1;
  *(float *)(param_2 + 8) = fStack_54;
  *(float *)(param_2 + 0xc) = local_58;
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x24);
  return;
}

