
/* cocos2d::Vec4::subtract(cocos2d::Vec4 const&) */

void __thiscall cocos2d::Vec4::subtract(Vec4 *this,Vec4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(ulong *)(this + 8) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 8) >> 0x20) -
                (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20),
                (float)*(undefined8 *)(this + 8) - (float)*(undefined8 *)(param_1 + 8));
  *(ulong *)this =
       CONCAT44((float)((ulong)*(undefined8 *)this >> 0x20) - (float)((ulong)uVar1 >> 0x20),
                (float)*(undefined8 *)this - (float)uVar1);
  return;
}

