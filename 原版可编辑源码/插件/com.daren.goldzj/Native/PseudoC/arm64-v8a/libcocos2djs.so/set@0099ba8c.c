
/* cocos2d::Quaternion::set(cocos2d::Vec3 const&, float) */

void __thiscall cocos2d::Quaternion::set(Quaternion *this,Vec3 *param_1,float param_2)

{
  long lVar1;
  float fVar2;
  Vec3 local_48 [8];
  float local_40;
  long local_38;
  
                    /* try { // try from 0099ba98 to 00a9badb has its CatchHandler @ 0099ba98
                       catch() { ... } // from try @ 0099ba98 with catch @ 0099ba98
                       catch() { ... } // from try @ 0099bb08 with catch @ 0099ba98
                       catch() { ... } // from try @ 0099bb24 with catch @ 0099ba98 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar2 = sinf(param_2 * 0.5);
  Vec3::Vec3(local_48,param_1);
                    /* try { // try from 0099badc to 00a9bb07 has its CatchHandler @ 0099bb54 */
  Vec3::normalize(local_48);
  *(ulong *)this = CONCAT44(local_48._4_4_ * fVar2,local_48._0_4_ * fVar2);
  *(float *)(this + 8) = fVar2 * local_40;
  fVar2 = cosf(param_2 * 0.5);
                    /* try { // try from 0099bb08 to 00a9bb17 has its CatchHandler @ 0099ba98 */
  *(float *)(this + 0xc) = fVar2;
  Vec3::~Vec3(local_48);
                    /* try { // try from 0099bb18 to 00a9bb23 has its CatchHandler @ 0099bb54 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0099bb24 to 00a9bb67 has its CatchHandler @ 0099ba98 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

