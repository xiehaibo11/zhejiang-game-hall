
/* cocos2d::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Color4F&, float) */

void cocos2d::operator/=(Color4F *param_1,float param_2)

{
  *(ulong *)(param_1 + 8) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) / param_2,
                (float)*(undefined8 *)(param_1 + 8) / param_2);
  *(ulong *)param_1 =
       CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) / param_2,
                (float)*(undefined8 *)param_1 / param_2);
  return;
}

