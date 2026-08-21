
/* cocos2d::Sprite::getCenterRect() const */

void cocos2d::Sprite::getCenterRect(void)

{
  long *in_x0;
  undefined8 *in_x8;
  float fVar1;
  float fVar2;
  
  (**(code **)(*in_x0 + 0x578))();
  fVar1 = (float)in_x0[0x82];
  fVar2 = (float)((ulong)in_x0[0x82] >> 0x20);
  in_x8[1] = CONCAT44(fVar2 * (float)((ulong)in_x8[1] >> 0x20),fVar1 * (float)in_x8[1]);
  *in_x8 = CONCAT44(fVar2 * (float)((ulong)*in_x8 >> 0x20),fVar1 * (float)*in_x8);
  return;
}

