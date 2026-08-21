
/* cocos2d::Vec4::set(cocos2d::Vec4 const&, cocos2d::Vec4 const&) */

void __thiscall cocos2d::Vec4::set(Vec4 *this,Vec4 *param_1,Vec4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)param_1;
  *(ulong *)(this + 8) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) -
                (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20),
                (float)*(undefined8 *)(param_2 + 8) - (float)*(undefined8 *)(param_1 + 8));
  *(ulong *)this =
       CONCAT44((float)((ulong)uVar1 >> 0x20) - (float)((ulong)uVar2 >> 0x20),
                (float)uVar1 - (float)uVar2);
  return;
}

