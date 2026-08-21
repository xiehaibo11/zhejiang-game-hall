
/* cocos2d::crossProduct2Vector(cocos2d::Vec2 const&, cocos2d::Vec2 const&, cocos2d::Vec2 const&,
   cocos2d::Vec2 const&) */

float cocos2d::crossProduct2Vector(Vec2 *param_1,Vec2 *param_2,Vec2 *param_3,Vec2 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = NEON_rev64(CONCAT44((float)((ulong)*(undefined8 *)param_4 >> 0x20) -
                              (float)((ulong)*(undefined8 *)param_3 >> 0x20),
                              (float)*(undefined8 *)param_4 - (float)*(undefined8 *)param_3),4);
  return (float)uVar1 * ((float)*(undefined8 *)param_2 - (float)*(undefined8 *)param_1) -
         (float)((ulong)uVar1 >> 0x20) *
         ((float)((ulong)*(undefined8 *)param_2 >> 0x20) -
         (float)((ulong)*(undefined8 *)param_1 >> 0x20));
}

