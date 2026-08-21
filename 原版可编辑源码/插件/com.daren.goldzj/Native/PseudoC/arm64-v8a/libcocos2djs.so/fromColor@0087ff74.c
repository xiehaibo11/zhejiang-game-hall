
/* cocos2d::Vec4::fromColor(unsigned int) */

void __thiscall cocos2d::Vec4::fromColor(Vec4 *this,uint param_1)

{
  uint uVar1;
  float *in_x8;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = (uint)this;
  uVar2 = NEON_ushl(CONCAT44(uVar1,uVar1),0xfffffff8fffffff0,4);
  *in_x8 = (float)(uVar1 >> 0x18) / 255.0;
  uVar3 = NEON_scvtf(uVar2 & 0xff000000ff,4);
  *(ulong *)(in_x8 + 1) = CONCAT44((float)((ulong)uVar3 >> 0x20) / 255.0,(float)uVar3 / 255.0);
  in_x8[3] = (float)(uVar1 & 0xff) / 255.0;
  return;
}

