
/* cocos2d::PULineAffector::updatePUAffector(cocos2d::PUParticle3D*, float) */

void cocos2d::PULineAffector::updatePUAffector(PUParticle3D *param_1,float param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long in_x1;
  Vec3 *pVVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  Vec3 aVStack_78 [16];
  Vec3 local_68 [8];
  float local_60;
  long local_58;
  
                    /* try { // try from 00e294b4 to 00f294bb has its CatchHandler @ 00e29b80 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00e294bc to 00f294d3 has its CatchHandler @ 00e29ba8 */
  PUParticleSystem3D::rotationOffset
            (*(PUParticleSystem3D **)(param_1 + 0x28),(Vec3 *)(in_x1 + 0x94));
  if (((param_1[0xd0] != (PUParticle3D)0x0) && (iVar2 = rand(), 0.5 < (float)iVar2 * 4.656613e-10))
     && (param_1[0xd1] == (PUParticle3D)0x0)) {
    Vec3::Vec3(local_68);
    iVar2 = rand();
                    /* try { // try from 00e29528 to 00f2954b has its CatchHandler @ 00e29ba4 */
    iVar3 = rand();
    iVar4 = rand();
                    /* try { // try from 00e2954c to 00f296af has its CatchHandler @ 00e29444 */
    Vec3::Vec3(aVStack_78,(float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + -1.0,
               (float)iVar3 * 4.656613e-10 + (float)iVar3 * 4.656613e-10 + -1.0,
               (float)iVar4 * 4.656613e-10 + (float)iVar4 * 4.656613e-10 + -1.0);
    Vec3::cross((Vec3 *)(param_1 + 0xb4),aVStack_78,local_68);
    Vec3::normalize(local_68);
    fVar8 = *(float *)(param_1 + 0xb0);
    iVar2 = rand();
    pVVar5 = (Vec3 *)(in_x1 + 8);
    fVar8 = fVar8 * (float)iVar2 * 4.656613e-10;
    fVar6 = *(float *)(param_1 + 200);
    fVar7 = *(float *)(param_1 + 0xcc);
    *(ulong *)pVVar5 =
         CONCAT44(((float)((ulong)*(undefined8 *)(in_x1 + 0x94) >> 0x20) + local_68._4_4_ * fVar8) *
                  fVar6 + (float)((ulong)*(undefined8 *)pVVar5 >> 0x20) * fVar7,
                  ((float)*(undefined8 *)(in_x1 + 0x94) + local_68._0_4_ * fVar8) * fVar6 +
                  (float)*(undefined8 *)pVVar5 * fVar7);
    *(float *)(in_x1 + 0x10) =
         (local_60 * fVar8 + *(float *)(in_x1 + 0x9c)) * fVar6 + fVar7 * *(float *)(in_x1 + 0x10);
    PUParticleSystem3D::rotationOffset(*(PUParticleSystem3D **)(param_1 + 0x28),pVVar5);
  }
  param_1[0xd1] = (PUParticle3D)0x0;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

