
/* cocos2d::Quaternion::lerp(cocos2d::Quaternion const&, cocos2d::Quaternion const&, float,
   cocos2d::Quaternion*) */

void cocos2d::Quaternion::lerp
               (Quaternion *param_1,Quaternion *param_2,float param_3,Quaternion *param_4)

{
  undefined8 uVar1;
  float fVar2;
  undefined8 uVar3;
  
                    /* try { // try from 0099c33c to 00a9c347 has its CatchHandler @ 0099c498 */
  if (param_3 == 0.0) {
    uVar1 = *(undefined8 *)param_1;
    *(undefined8 *)(param_4 + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)param_4 = uVar1;
                    /* try { // try from 0099c348 to 00a9c423 has its CatchHandler @ 0099c4b0 */
    return;
  }
  if (param_3 == 1.0) {
    uVar1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_4 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)param_4 = uVar1;
    return;
  }
  uVar1 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)param_2;
  fVar2 = 1.0 - param_3;
  *(ulong *)(param_4 + 8) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) * fVar2 +
                (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) * param_3,
                (float)*(undefined8 *)(param_1 + 8) * fVar2 +
                (float)*(undefined8 *)(param_2 + 8) * param_3);
  *(ulong *)param_4 =
       CONCAT44((float)((ulong)uVar1 >> 0x20) * fVar2 + (float)((ulong)uVar3 >> 0x20) * param_3,
                (float)uVar1 * fVar2 + (float)uVar3 * param_3);
  return;
}

