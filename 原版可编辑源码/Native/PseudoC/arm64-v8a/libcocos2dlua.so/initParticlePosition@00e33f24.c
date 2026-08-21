
/* cocos2d::CCPUBoxEmitter::initParticlePosition(cocos2d::PUParticle3D*) */

void __thiscall
cocos2d::CCPUBoxEmitter::initParticlePosition(CCPUBoxEmitter *this,PUParticle3D *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  Vec3 aVStack_c8 [16];
  Quaternion local_b8 [8];
  float local_b0;
  Mat4 aMStack_a8 [64];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  Mat4::Mat4(aMStack_a8);
  PUParticleSystem3D::getDerivedOrientation();
  Mat4::createRotation(local_b8,aMStack_a8);
  Quaternion::~Quaternion(local_b8);
  puVar5 = (undefined8 *)PUEmitter::getDerivedPosition();
  iVar2 = rand();
  fVar7 = *(float *)(this + 0x208);
  fVar6 = *(float *)(this + 0x68);
  iVar3 = rand();
  fVar9 = *(float *)(this + 0x20c);
  fVar8 = *(float *)(this + 0x6c);
  iVar4 = rand();
  Vec3::Vec3(aVStack_c8,
             ((float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + -1.0) * fVar7 * fVar6,
             ((float)iVar3 * 4.656613e-10 + (float)iVar3 * 4.656613e-10 + -1.0) * fVar9 * fVar8,
             ((float)iVar4 * 4.656613e-10 + (float)iVar4 * 4.656613e-10 + -1.0) *
             *(float *)(this + 0x210) * *(float *)(this + 0x70));
  Vec3::Vec3((Vec3 *)local_b8);
  Mat4::transformVector(aMStack_a8,aVStack_c8,(Vec3 *)local_b8);
  fVar6 = *(float *)(puVar5 + 1);
  *(ulong *)(param_1 + 8) =
       CONCAT44(local_b8._4_4_ + (float)((ulong)*puVar5 >> 0x20),local_b8._0_4_ + (float)*puVar5);
  *(float *)(param_1 + 0x10) = local_b0 + fVar6;
  Mat4::~Mat4(aMStack_a8);
  *(undefined8 *)(param_1 + 0x94) = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

