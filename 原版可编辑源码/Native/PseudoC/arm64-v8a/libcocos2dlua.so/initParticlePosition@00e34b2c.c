
/* cocos2d::PUCircleEmitter::initParticlePosition(cocos2d::PUParticle3D*) */

void __thiscall
cocos2d::PUCircleEmitter::initParticlePosition(PUCircleEmitter *this,PUParticle3D *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float local_a0;
  float fStack_9c;
  Quaternion aQStack_98 [16];
  Quaternion local_88 [8];
  float local_80;
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x214] == (PUCircleEmitter)0x0) {
    fVar11 = *(float *)(this + 0x208) + *(float *)(this + 0x200);
    fVar10 = fVar11 + -6.2831855;
    if (fVar11 <= 6.2831855) {
      fVar10 = fVar11;
    }
    *(float *)(this + 0x200) = fVar10;
  }
  else {
    lVar2 = RandomHelper::getEngine();
    lVar4 = *(long *)(lVar2 + 0x1380);
    uVar7 = (lVar4 + 1U) % 0x270;
    lVar9 = uVar7 * 8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e34c08 with catch @ 00e34bb4
                        */
    *(ulong *)(lVar2 + lVar4 * 8) =
         (*(ulong *)(lVar2 + lVar9) & 1) * 0x9908b0df ^
         *(ulong *)(lVar2 + ((lVar4 + 0x18dU) % 0x270) * 8) ^
         (*(ulong *)(lVar2 + lVar9) & 0x7ffffffe |
         *(ulong *)(lVar2 + lVar4 * 8) & 0xffffffff80000000) >> 1;
                    /* try { // try from 00e34c00 to 00f34c07 has its CatchHandler @ 00e34d7c */
                    /* try { // try from 00e34c08 to 00f34d7f has its CatchHandler @ 00e34bb4 */
    uVar5 = (ulong)(((int)uVar7 + 1U) % 0x270);
    uVar6 = *(ulong *)(lVar2 + *(long *)(lVar2 + 0x1380) * 8);
    *(ulong *)(lVar2 + 0x1380) = uVar7;
    uVar8 = *(ulong *)(lVar2 + uVar5 * 8);
    uVar6 = uVar6 >> 0xb & 0xffffffff ^ uVar6;
    *(ulong *)(lVar2 + lVar9) =
         (uVar8 & 1) * 0x9908b0df ^ *(ulong *)(lVar2 + (ulong)(((int)uVar7 + 0x18dU) % 0x270) * 8) ^
         (uVar8 & 0x7ffffffe | *(ulong *)(lVar2 + lVar9) & 0xffffffff80000000) >> 1;
    uVar7 = *(ulong *)(lVar2 + *(long *)(lVar2 + 0x1380) * 8);
    uVar6 = ((uint)uVar6 & 0x13a58ad) << 7 ^ uVar6;
    uVar6 = (ulong)(uint)((int)uVar6 << 0xf) & 0xefc60000 ^ uVar6;
    uVar7 = uVar7 >> 0xb & 0xffffffff ^ uVar7;
    uVar7 = ((uint)uVar7 & 0x13a58ad) << 7 ^ uVar7;
    uVar7 = (ulong)(uint)((int)uVar7 << 0xf) & 0xefc60000 ^ uVar7;
    *(ulong *)(lVar2 + 0x1380) = uVar5;
    fVar10 = (float)(((double)(uVar7 ^ uVar7 >> 0x12) * 4294967296.0 +
                     (double)(uVar6 ^ uVar6 >> 0x12)) * 5.421010862427522e-20 * 6.283185307179586 +
                    0.0);
  }
  sincosf(fVar10,&fStack_9c,&local_a0);
  *(float *)(this + 0x20c) = local_a0;
  *(float *)(this + 0x210) = fStack_9c;
  Mat4::Mat4(aMStack_78);
  PUParticleSystem3D::getDerivedOrientation();
  Quaternion::Quaternion(local_88,aQStack_98);
  Quaternion::multiply(local_88,(Quaternion *)(this + 0x218));
  Mat4::createRotation(local_88,aMStack_78);
  Quaternion::~Quaternion(local_88);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e34c00 with catch @ 00e34d7c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e34dd8 with catch @ 00e34d80
                       catch(type#1 @ 00000000) { ... } // from try @ 00e34f98 with catch @ 00e34d80
                        */
  Quaternion::~Quaternion(aQStack_98);
  puVar3 = (undefined8 *)PUEmitter::getDerivedPosition();
  Vec3::Vec3((Vec3 *)aQStack_98,
             *(float *)(this + 0x20c) * *(float *)(this + 0x1fc) * *(float *)(this + 0x68),0.0,
             *(float *)(this + 0x1fc) * *(float *)(this + 0x210) * *(float *)(this + 0x70));
  Vec3::Vec3((Vec3 *)local_88);
                    /* try { // try from 00e34dd0 to 00f34dd7 has its CatchHandler @ 00e350a4 */
  Mat4::transformVector(aMStack_78,(Vec3 *)aQStack_98,(Vec3 *)local_88);
                    /* try { // try from 00e34dd8 to 00f34f2f has its CatchHandler @ 00e34d80 */
  fVar10 = *(float *)(puVar3 + 1);
  *(ulong *)(param_1 + 8) =
       CONCAT44(local_88._4_4_ + (float)((ulong)*puVar3 >> 0x20),local_88._0_4_ + (float)*puVar3);
  *(float *)(param_1 + 0x10) = local_80 + fVar10;
  Mat4::~Mat4(aMStack_78);
  *(undefined8 *)(param_1 + 0x94) = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

