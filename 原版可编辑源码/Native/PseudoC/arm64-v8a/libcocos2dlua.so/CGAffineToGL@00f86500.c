
/* cocos2d::CGAffineToGL(cocos2d::AffineTransform const&, float*) */

void cocos2d::CGAffineToGL(AffineTransform *param_1,float *param_2)

{
  param_2[0xe] = 0.0;
  param_2[0xf] = 1.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[8] = 0.0;
  param_2[9] = 0.0;
  param_2[10] = 1.0;
  param_2[0xb] = 0.0;
  *param_2 = *(float *)param_1;
  param_2[4] = *(float *)(param_1 + 8);
  param_2[0xc] = *(float *)(param_1 + 0x10);
  param_2[1] = *(float *)(param_1 + 4);
  param_2[5] = *(float *)(param_1 + 0xc);
  param_2[0xd] = *(float *)(param_1 + 0x14);
  return;
}

