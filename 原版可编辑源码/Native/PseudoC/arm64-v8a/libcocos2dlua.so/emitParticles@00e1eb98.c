
/* cocos2d::PUParticleSystem3D::emitParticles(cocos2d::DataPool<cocos2d::Particle3D>&,
   cocos2d::PUEmitter*, unsigned int, float) */

void cocos2d::PUParticleSystem3D::emitParticles
               (DataPool *param_1,PUEmitter *param_2,uint param_3,float param_4)

{
  PUEmitter *pPVar1;
  long lVar2;
  long *plVar3;
  uint in_w3;
  long lVar4;
  PUEmitter *pPVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  long *plVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float in_s1;
  float in_s2;
  float fVar16;
  float fVar17;
  Vec3 aVStack_e0 [16];
  undefined8 local_d0;
  undefined4 local_c8;
  Mat4 aMStack_c0 [64];
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  fVar13 = (float)getDerivedScale((PUParticleSystem3D *)param_1);
  Mat4::Mat4(aMStack_c0);
  getDerivedOrientation();
  Mat4::createRotation((Quaternion *)&local_d0,aMStack_c0);
  Quaternion::~Quaternion((Quaternion *)&local_d0);
  if (in_w3 != 0) {
    uVar10 = 0;
    pPVar1 = param_2 + 8;
    fVar17 = 0.0;
    lVar4 = *(long *)(param_2 + 0x30);
    if (lVar4 != 0) {
      while( true ) {
        pPVar5 = *(PUEmitter **)(param_2 + 0x28);
        lVar7 = *(long *)(pPVar5 + 0x10);
        if ((pPVar1 != pPVar5) && (*(PUEmitter **)(pPVar5 + 8) != pPVar1)) {
          lVar6 = *(long *)pPVar5;
          *(PUEmitter **)(lVar6 + 8) = *(PUEmitter **)(pPVar5 + 8);
          **(long **)(pPVar5 + 8) = lVar6;
          lVar6 = *(long *)(param_2 + 8);
          *(PUEmitter **)(lVar6 + 8) = pPVar5;
          *(long *)pPVar5 = lVar6;
          *(PUEmitter **)(param_2 + 8) = pPVar5;
          *(PUEmitter **)(pPVar5 + 8) = pPVar1;
          *(long *)(param_2 + 0x30) = lVar4 + -1;
          *(long *)(param_2 + 0x18) = *(long *)(param_2 + 0x18) + 1;
        }
        if (lVar7 == 0) break;
        puVar9 = *(undefined8 **)(lVar7 + 0x108);
        puVar12 = *(undefined8 **)(lVar7 + 0x110);
        *(undefined4 *)(lVar7 + 0x134) = 0;
        *(undefined4 *)(lVar7 + 0x124) = 2;
        *(undefined1 *)(lVar7 + 0x128) = 0;
        for (; puVar9 != puVar12; puVar9 = puVar9 + 1) {
          (**(code **)(*(long *)*puVar9 + 0x30))((long *)*puVar9,lVar7);
        }
        (**(code **)(*(long *)(ulong)param_3 + 200))((long *)(ulong)param_3,lVar7);
        Vec3::Vec3(aVStack_e0,*(float *)(lVar7 + 0xac),*(float *)(lVar7 + 0xb0),
                   *(float *)(lVar7 + 0xb4));
        Vec3::Vec3((Vec3 *)&local_d0);
        Mat4::transformVector(aMStack_c0,aVStack_e0,(Vec3 *)&local_d0);
        *(undefined8 *)(lVar7 + 0xac) = local_d0;
        *(undefined4 *)(lVar7 + 0xb4) = local_c8;
        Vec3::Vec3(aVStack_e0,*(float *)(lVar7 + 0xb8),*(float *)(lVar7 + 0xbc),
                   *(float *)(lVar7 + 0xc0));
        Vec3::Vec3((Vec3 *)&local_d0);
        Mat4::transformVector(aMStack_c0,aVStack_e0,(Vec3 *)&local_d0);
                    /* try { // try from 00e1edb0 to 00f1eddb has its CatchHandler @ 00e1f690 */
        *(undefined8 *)(lVar7 + 0xb8) = local_d0;
        *(undefined4 *)(lVar7 + 0xc0) = local_c8;
        plVar8 = *(long **)(param_1 + 0x318);
        for (plVar11 = *(long **)(param_1 + 0x310); plVar11 != plVar8; plVar11 = plVar11 + 1) {
          plVar3 = (long *)*plVar11;
          if ((char)plVar3[6] != '\0') {
            (**(code **)(*plVar3 + 0x70))(plVar3,lVar7);
          }
        }
        puVar12 = *(undefined8 **)(param_1 + 0x428);
        for (puVar9 = *(undefined8 **)(param_1 + 0x420); puVar9 != puVar12; puVar9 = puVar9 + 1) {
                    /* try { // try from 00e1ee1c to 00f1ee23 has its CatchHandler @ 00e1f64c */
          (**(code **)(*(long *)*puVar9 + 0x10))((long *)*puVar9,param_1,lVar7);
        }
        fVar16 = *(float *)(param_1 + 0x43c);
        fVar14 = fVar13 * (float)*(undefined8 *)(lVar7 + 0xac) * fVar16 * fVar17;
        fVar15 = in_s1 * (float)((ulong)*(undefined8 *)(lVar7 + 0xac) >> 0x20) * fVar16 * fVar17;
        uVar10 = uVar10 + 1;
        fVar16 = fVar17 * fVar16 * in_s2 * *(float *)(lVar7 + 0xb4);
        fVar17 = param_4 / (float)in_w3 + fVar17;
        *(ulong *)(lVar7 + 8) =
             CONCAT44(fVar15 + (float)((ulong)*(undefined8 *)(lVar7 + 8) >> 0x20),
                      fVar14 + (float)*(undefined8 *)(lVar7 + 8));
        *(float *)(lVar7 + 0x10) = fVar16 + *(float *)(lVar7 + 0x10);
        if ((in_w3 <= (uVar10 & 0xffff)) || (lVar4 = *(long *)(param_2 + 0x30), lVar4 == 0)) break;
      }
    }
  }
  Mat4::~Mat4(aMStack_c0);
  if (*(long *)(lVar2 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

