
/* cocos2d::Quaternion::getConjugated() const */

void cocos2d::Quaternion::getConjugated(void)

{
  undefined8 *in_x0;
  undefined8 *in_x8;
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = *in_x0;
  fVar2 = *(float *)(in_x0 + 1);
  *(undefined4 *)((long)in_x8 + 0xc) = *(undefined4 *)((long)in_x0 + 0xc);
  *in_x8 = CONCAT44(-(float)((ulong)uVar1 >> 0x20),-(float)uVar1);
  *(float *)(in_x8 + 1) = -fVar2;
  return;
}

