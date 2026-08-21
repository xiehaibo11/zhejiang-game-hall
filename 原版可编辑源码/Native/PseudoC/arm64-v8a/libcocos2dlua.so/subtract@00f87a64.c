
/* cocos2d::Vec4::subtract(cocos2d::Vec4 const&, cocos2d::Vec4 const&, cocos2d::Vec4*) */

void cocos2d::Vec4::subtract(Vec4 *param_1,Vec4 *param_2,Vec4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)param_1;
  uVar2 = *(undefined8 *)param_2;
  *(ulong *)(param_3 + 8) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) -
                (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20),
                (float)*(undefined8 *)(param_1 + 8) - (float)*(undefined8 *)(param_2 + 8));
  *(ulong *)param_3 =
       CONCAT44((float)((ulong)uVar1 >> 0x20) - (float)((ulong)uVar2 >> 0x20),
                (float)uVar1 - (float)uVar2);
  return;
}

