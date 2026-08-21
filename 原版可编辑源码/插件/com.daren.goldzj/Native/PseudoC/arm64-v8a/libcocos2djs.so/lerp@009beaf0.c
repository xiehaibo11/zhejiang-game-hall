
/* cocos2d::Vec3::lerp(cocos2d::Vec3 const&, float) const */

void cocos2d::Vec3::lerp(Vec3 *param_1,float param_2)

{
  long lVar1;
  ulong uVar2;
  Vec3 *in_x1;
  Vec3 *in_x8;
  float fVar3;
  float local_58;
  float fStack_54;
  float local_50;
  undefined8 local_48;
  float local_40;
  long local_38;
  
                    /* try { // try from 009beb04 to 00abeb0f has its CatchHandler @ 009becb0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009beb10 to 00abeb1b has its CatchHandler @ 009becac */
                    /* try { // try from 009beb1c to 00abec37 has its CatchHandler @ 009becc4 */
  fVar3 = 1.0 - param_2;
  Vec3((Vec3 *)&local_48,param_1);
  local_48 = CONCAT44((float)((ulong)local_48 >> 0x20) * fVar3,(float)local_48 * fVar3);
  local_40 = fVar3 * local_40;
  Vec3((Vec3 *)&local_58,in_x1);
  uVar2 = (ulong)_local_58 >> 0x20;
  local_58 = (float)_local_58 * param_2;
  fStack_54 = (float)uVar2 * param_2;
  local_50 = local_50 * param_2;
  Vec3(in_x8,(Vec3 *)&local_48);
  *(ulong *)in_x8 =
       CONCAT44(fStack_54 + (float)((ulong)*(undefined8 *)in_x8 >> 0x20),
                local_58 + (float)*(undefined8 *)in_x8);
  *(float *)(in_x8 + 8) = local_50 + *(float *)(in_x8 + 8);
  ~Vec3((Vec3 *)&local_58);
  ~Vec3((Vec3 *)&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

