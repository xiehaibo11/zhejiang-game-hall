
/* cocos2d::AffineTransformEqualToTransform(cocos2d::AffineTransform const&,
   cocos2d::AffineTransform const&) */

bool cocos2d::AffineTransformEqualToTransform(AffineTransform *param_1,AffineTransform *param_2)

{
  if ((((*(float *)param_1 == *(float *)param_2) &&
       (*(float *)(param_1 + 4) == *(float *)(param_2 + 4))) &&
      (*(float *)(param_1 + 8) == *(float *)(param_2 + 8))) &&
     ((*(float *)(param_1 + 0xc) == *(float *)(param_2 + 0xc) &&
      (*(float *)(param_1 + 0x10) == *(float *)(param_2 + 0x10))))) {
    return *(float *)(param_1 + 0x14) == *(float *)(param_2 + 0x14);
  }
  return false;
}

