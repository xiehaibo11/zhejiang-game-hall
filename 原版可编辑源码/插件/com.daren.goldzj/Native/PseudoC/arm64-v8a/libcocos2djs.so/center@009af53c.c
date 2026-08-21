
/* cocos2d::TextRowSpace::center() const */

void cocos2d::TextRowSpace::center(void)

{
  undefined8 *in_x0;
  undefined8 *in_x8;
  
  *in_x8 = CONCAT44(((float)((ulong)*in_x0 >> 0x20) + (float)((ulong)in_x0[1] >> 0x20)) * 0.5,
                    ((float)*in_x0 + (float)in_x0[1]) * 0.5);
  return;
}

