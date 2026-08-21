
/* cocos2d::PhysicsBody::afterSimulation(cocos2d::Mat4 const&, float) */

void __thiscall cocos2d::PhysicsBody::afterSimulation(PhysicsBody *this,Mat4 *param_1,float param_2)

{
  long lVar1;
  long *plVar2;
  float fVar3;
  float in_s1;
  double dVar4;
  float local_98;
  float local_94;
  float local_90;
  Mat4 aMStack_88 [64];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 01001524 to 0110153b has its CatchHandler @ 0100188c */
  fVar3 = (float)cpBodyGetPosition(*(undefined8 *)(this + 0x88));
                    /* try { // try from 0100153c to 0110154f has its CatchHandler @ 01001828 */
  Vec3::Vec3((Vec3 *)&local_98,fVar3 - *(float *)(this + 0xc4),in_s1 - *(float *)(this + 200),0.0);
                    /* try { // try from 01001554 to 0110157b has its CatchHandler @ 01001878 */
  if ((*(float *)(this + 0xfc) != local_98) || (*(float *)(this + 0x100) != local_94)) {
    Mat4::getInversed();
    Mat4::transformVector(aMStack_88,local_98,local_94,local_90,1.0,(Vec3 *)&local_98);
    Mat4::~Mat4(aMStack_88);
                    /* try { // try from 0100159c to 011015a7 has its CatchHandler @ 01001808 */
    (**(code **)(**(long **)(this + 0x28) + 200))
              (local_98 - *(float *)(this + 0xec),local_94 - *(float *)(this + 0xf0));
  }
  plVar2 = *(long **)(this + 0x28);
  dVar4 = *(double *)(this + 0xd8);
  fVar3 = (float)cpBodyGetAngle(*(undefined8 *)(this + 0x88));
  if (dVar4 == (double)fVar3) {
    fVar3 = *(float *)(this + 0xd0);
  }
  else {
    fVar3 = (float)cpBodyGetAngle(*(undefined8 *)(this + 0x88));
                    /* try { // try from 010015e0 to 011015f3 has its CatchHandler @ 01001804 */
                    /* try { // try from 010015f8 to 0110161b has its CatchHandler @ 01001858 */
    *(double *)(this + 0xd8) = (double)fVar3;
    fVar3 = (float)(((double)fVar3 * -180.0) / 3.141592653589793 - (double)*(float *)(this + 0xcc));
    *(float *)(this + 0xd0) = fVar3;
  }
  (**(code **)(*plVar2 + 0x180))(fVar3 - param_2,plVar2);
                    /* try { // try from 01001630 to 01101643 has its CatchHandler @ 01001800 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 01001648 to 0110166b has its CatchHandler @ 01001854 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

