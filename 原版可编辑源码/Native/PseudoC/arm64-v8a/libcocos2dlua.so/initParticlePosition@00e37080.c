
/* cocos2d::PUMeshSurfaceEmitter::initParticlePosition(cocos2d::PUParticle3D*) */

void __thiscall
cocos2d::PUMeshSurfaceEmitter::initParticlePosition
          (PUMeshSurfaceEmitter *this,PUParticle3D *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  Vec3 aVStack_b0 [16];
  Quaternion local_a0 [8];
  float local_98;
  undefined8 local_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined8 local_78 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Vec3::Vec3((Vec3 *)&local_90);
  Vec3::Vec3((Vec3 *)&fStack_84);
  fStack_88 = 0.0;
  fStack_84 = 0.0;
  fStack_80 = 0.0;
  fStack_7c = 0.0;
  local_90 = 0;
  plVar3 = *(long **)(this + 0x238);
  this[0x248] = (PUMeshSurfaceEmitter)0x0;
                    /* try { // try from 00e370d4 to 00f370df has its CatchHandler @ 00e37418 */
  if ((plVar3 != (long *)0x0) && (plVar3[1] != *plVar3)) {
    PUEmitter::getDerivedPosition();
    uVar2 = MeshInfo::getRandomTriangleIndex(*(MeshInfo **)(this + 0x238));
    *(undefined8 *)(this + 0x240) = uVar2;
    MeshInfo::getRandomPositionAndNormal(*(ulong *)(this + 0x238));
    fStack_88 = (float)local_78[1];
    fStack_84 = (float)((ulong)local_78[1] >> 0x20);
    local_90 = local_78[0];
    fStack_80 = (float)local_78[2];
    fStack_7c = (float)((ulong)local_78[2] >> 0x20);
    if (this[0x1a5] == (PUMeshSurfaceEmitter)0x0) {
      Mat4::Mat4((Mat4 *)local_78);
                    /* try { // try from 00e37228 to 00f3723b has its CatchHandler @ 00e373cc */
      PUParticleSystem3D::getDerivedOrientation();
      Mat4::createRotation(local_a0,(Mat4 *)local_78);
      Quaternion::~Quaternion(local_a0);
                    /* try { // try from 00e37258 to 00f3725f has its CatchHandler @ 00e373b4 */
      Vec3::Vec3(aVStack_b0,*(float *)(this + 0x68) * (float)local_90,
                 *(float *)(this + 0x6c) * local_90._4_4_,*(float *)(this + 0x70) * fStack_88);
      Vec3::Vec3((Vec3 *)local_a0);
      Mat4::transformVector((Mat4 *)local_78,aVStack_b0,(Vec3 *)local_a0);
      fVar7 = *(float *)(this + 100);
      *(ulong *)(param_1 + 8) =
           CONCAT44(local_a0._4_4_ + (float)((ulong)*(undefined8 *)(this + 0x5c) >> 0x20),
                    local_a0._0_4_ + (float)*(undefined8 *)(this + 0x5c));
      *(float *)(param_1 + 0x10) = local_98 + fVar7;
      Mat4::~Mat4((Mat4 *)local_78);
    }
    else if (((fStack_84 != 0.0) || (fStack_80 != 0.0)) || (fStack_7c != 0.0)) {
                    /* try { // try from 00e3715c to 00f37167 has its CatchHandler @ 00e373d0 */
      Mat4::Mat4((Mat4 *)local_78);
      PUParticleSystem3D::getDerivedOrientation();
      Mat4::createRotation(local_a0,(Mat4 *)local_78);
      Quaternion::~Quaternion(local_a0);
      Vec3::Vec3(aVStack_b0,*(float *)(this + 0x68) * (float)local_90,
                 *(float *)(this + 0x6c) * local_90._4_4_,*(float *)(this + 0x70) * fStack_88);
      Vec3::Vec3((Vec3 *)local_a0);
      Mat4::transformVector((Mat4 *)local_78,aVStack_b0,(Vec3 *)local_a0);
      uVar2 = *(undefined8 *)(this + 0x5c);
      fVar7 = *(float *)(this + 100);
      *(ulong *)(param_1 + 8) =
           CONCAT44(local_a0._4_4_ + (float)((ulong)uVar2 >> 0x20),local_a0._0_4_ + (float)uVar2);
      *(float *)(param_1 + 0x10) = local_98 + fVar7;
                    /* try { // try from 00e371e0 to 00f37227 has its CatchHandler @ 00e37478 */
      Mat4::~Mat4((Mat4 *)local_78);
      uVar6 = (undefined4)uVar2;
      uVar5 = 0;
      fVar7 = (float)PUDynamicAttributeHelper::calculate
                               ((PUDynamicAttributeHelper *)(this + 0x194),
                                *(PUDynamicAttribute **)(this + 0xf8),
                                *(float *)(*(long *)(this + 0x28) + 0x440),0.0);
      if (fVar7 == 0.0) {
        *(float *)(param_1 + 0xb4) = fStack_7c;
        *(ulong *)(param_1 + 0xac) = CONCAT44(fStack_80,fStack_84);
      }
      else {
        uVar4 = PUUtil::randomDeviant((Vec3 *)&fStack_84,fVar7,(Vec3 *)(this + 0x184));
        *(undefined4 *)(param_1 + 0xac) = uVar4;
        *(undefined4 *)(param_1 + 0xb0) = uVar5;
        *(undefined4 *)(param_1 + 0xb4) = uVar6;
      }
      *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0xac);
      *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xb4);
      this[0x248] = (PUMeshSurfaceEmitter)0x1;
    }
                    /* try { // try from 00e372d8 to 00f372ef has its CatchHandler @ 00e3740c */
    *(undefined8 *)(param_1 + 0x94) = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

