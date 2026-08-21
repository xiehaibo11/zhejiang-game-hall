
/* cocos2d::PUSphereSurfaceEmitter::initParticlePosition(cocos2d::PUParticle3D*) */

void __thiscall
cocos2d::PUSphereSurfaceEmitter::initParticlePosition
          (PUSphereSurfaceEmitter *this,PUParticle3D *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  Vec3 local_b8 [8];
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  Quaternion local_98 [8];
  float local_90;
  Mat4 aMStack_88 [64];
  long local_48;
  
                    /* catch() { ... } // from try @ 00e38ed0 with catch @ 00e39758 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00e38de0 with catch @ 00e39778 */
  iVar2 = rand();
  iVar3 = rand();
  uVar6 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
  fVar5 = (float)uVar6 * 4.656613e-10;
  fVar7 = (float)((ulong)uVar6 >> 0x20) * 4.656613e-10;
  uVar6 = NEON_fmov(0xbf800000,4);
  iVar2 = rand();
  *(ulong *)(this + 0x200) =
       CONCAT44(fVar7 + fVar7 + (float)((ulong)uVar6 >> 0x20),fVar5 + fVar5 + (float)uVar6);
  *(float *)(this + 0x208) = (float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + -1.0;
  Vec3::normalize((Vec3 *)(this + 0x200));
                    /* catch() { ... } // from try @ 00e38228 with catch @ 00e397dc */
  Mat4::Mat4(aMStack_88);
  PUParticleSystem3D::getDerivedOrientation();
  Mat4::createRotation(local_98,aMStack_88);
  Quaternion::~Quaternion(local_98);
                    /* catch() { ... } // from try @ 00e37e54 with catch @ 00e39804 */
  puVar4 = (undefined8 *)PUEmitter::getDerivedPosition();
                    /* catch() { ... } // from try @ 00e37e14 with catch @ 00e39818 */
                    /* catch() { ... } // from try @ 00e37df0 with catch @ 00e39828
                       catch() { ... } // from try @ 00e37e40 with catch @ 00e39828 */
  Vec3::Vec3(local_b8,*(float *)(this + 0x68) * *(float *)(this + 0x200),
             *(float *)(this + 0x6c) * *(float *)(this + 0x204),
             *(float *)(this + 0x70) * *(float *)(this + 0x208));
  local_a0 = *(float *)(this + 0x1fc);
  local_a8 = CONCAT44(local_b8._4_4_ * local_a0,local_b8._0_4_ * local_a0);
  local_a0 = local_a0 * local_b0;
  Vec3::Vec3((Vec3 *)local_98);
  Mat4::transformVector(aMStack_88,(Vec3 *)&local_a8,(Vec3 *)local_98);
  fVar5 = *(float *)(puVar4 + 1);
  *(ulong *)(param_1 + 8) =
       CONCAT44(local_98._4_4_ + (float)((ulong)*puVar4 >> 0x20),local_98._0_4_ + (float)*puVar4);
  *(float *)(param_1 + 0x10) = local_90 + fVar5;
  Mat4::~Mat4(aMStack_88);
  *(undefined8 *)(param_1 + 0x94) = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

