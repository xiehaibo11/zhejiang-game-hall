
/* cocos2d::TEMPNAMEPLACEHOLDERVALUE(cocos2d::Color4F&, cocos2d::Color4F const&) */

void cocos2d::operator-=(Color4F *param_1,Color4F *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_2;
  *(ulong *)(param_1 + 8) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) -
                (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20),
                (float)*(undefined8 *)(param_1 + 8) - (float)*(undefined8 *)(param_2 + 8));
  *(ulong *)param_1 =
       CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) - (float)((ulong)uVar1 >> 0x20),
                (float)*(undefined8 *)param_1 - (float)uVar1);
  return;
}

