
/* cocos2d::ParticleSimulator::emitParticle(cocos2d::Vec3&) */

void __thiscall cocos2d::ParticleSimulator::emitParticle(ParticleSimulator *this,Vec3 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Vec3 *this_00;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_b8;
  float fStack_b4;
  Vec3 *local_b0;
  long local_a8;
  
  lVar1 = tpidr_el0;
  local_a8 = *(long *)(lVar1 + 0x28);
  if (DAT_01d3c4c8 == DAT_01d3c4c0) {
    this_00 = operator_new(0x80);
    *(undefined8 *)(this_00 + 0x68) = 0;
    *(undefined8 *)(this_00 + 0x60) = 0;
    *(undefined8 *)(this_00 + 0x78) = 0;
    *(undefined8 *)(this_00 + 0x70) = 0;
    *(undefined8 *)(this_00 + 0x48) = 0;
    *(undefined8 *)(this_00 + 0x40) = 0;
    *(undefined8 *)(this_00 + 0x58) = 0;
    *(undefined8 *)(this_00 + 0x50) = 0;
    *(undefined8 *)(this_00 + 0x28) = 0;
    *(undefined8 *)(this_00 + 0x20) = 0;
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(undefined8 *)(this_00 + 0x30) = 0;
    *(undefined8 *)(this_00 + 8) = 0;
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)(this_00 + 0x18) = 0;
    *(undefined8 *)(this_00 + 0x10) = 0;
    Vec3::Vec3(this_00);
    Vec3::Vec3(this_00 + 0xc);
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(undefined8 *)(this_00 + 0x40) = 0;
    *(undefined4 *)(this_00 + 0x48) = 0;
    uVar3 = Color4F::BLACK._8_8_;
    uVar2 = Color4F::BLACK._0_8_;
    *(undefined8 *)(this_00 + 0x20) = Color4F::BLACK._8_8_;
    *(undefined8 *)(this_00 + 0x18) = uVar2;
    *(undefined8 *)(this_00 + 0x30) = uVar3;
    *(undefined8 *)(this_00 + 0x28) = uVar2;
    Vec3::Vec3(this_00 + 0x4c);
    Vec3::Vec3(this_00 + 0x58);
    *(undefined8 *)(this_00 + 0x6c) = 0;
    *(undefined8 *)(this_00 + 100) = 0;
    this_00[0x7c] = (Vec3)0x0;
    *(undefined8 *)(this_00 + 0x74) = 0;
  }
  else {
    DAT_01d3c4c8 = DAT_01d3c4c8 + -1;
    this_00 = (Vec3 *)*DAT_01d3c4c8;
    this_00[0x7c] = (Vec3)0x0;
  }
  local_b0 = this_00;
  if (*(undefined8 **)(this + 0x20) < *(undefined8 **)(this + 0x28)) {
    **(undefined8 **)(this + 0x20) = this_00;
    *(long *)(this + 0x20) = *(long *)(this + 0x20) + 8;
  }
  else {
    std::__ndk1::vector<cocos2d::Particle*,std::__ndk1::allocator<cocos2d::Particle*>>::
    __push_back_slow_path<cocos2d::Particle*>
              ((vector<cocos2d::Particle*,std::__ndk1::allocator<cocos2d::Particle*>> *)
               (this + 0x18),(Particle **)&local_b0);
  }
  fVar9 = *(float *)(this + 0x128);
  fVar12 = *(float *)(this + 300);
  lVar4 = RandomHelper::getEngine();
  lVar5 = *(long *)(lVar4 + 0x1380);
  uVar6 = (lVar5 + 1U) % 0x270;
  uVar7 = *(ulong *)(lVar4 + uVar6 * 8);
  *(ulong *)(lVar4 + lVar5 * 8) =
       (uVar7 & 1) * 0x9908b0df ^ *(ulong *)(lVar4 + ((lVar5 + 0x18dU) % 0x270) * 8) ^
       (uVar7 & 0x7ffffffe | *(ulong *)(lVar4 + lVar5 * 8) & 0xffffffff80000000) >> 1;
  uVar7 = *(ulong *)(lVar4 + *(long *)(lVar4 + 0x1380) * 8);
  *(ulong *)(lVar4 + 0x1380) = uVar6;
  uVar7 = uVar7 >> 0xb & 0xffffffff ^ uVar7;
  uVar7 = (uVar7 & 0x13a58ad) << 7 ^ uVar7;
  uVar7 = (uVar7 & 0x1df8c) << 0xf ^ uVar7;
  fVar8 = (float)(uVar7 ^ uVar7 >> 0x12) * 2.3283064e-10;
  fVar9 = fVar9 + fVar12 * (fVar8 + fVar8 + -1.0);
  *(float *)(this_00 + 0x48) = fVar9;
  fVar12 = *(float *)(this + 0xe4);
  fVar13 = *(float *)(this + 0xf0);
  lVar4 = RandomHelper::getEngine();
  lVar5 = *(long *)(lVar4 + 0x1380);
  uVar6 = (lVar5 + 1U) % 0x270;
  uVar7 = *(ulong *)(lVar4 + uVar6 * 8);
  *(ulong *)(lVar4 + lVar5 * 8) =
       (uVar7 & 1) * 0x9908b0df ^ *(ulong *)(lVar4 + ((lVar5 + 0x18dU) % 0x270) * 8) ^
       (uVar7 & 0x7ffffffe | *(ulong *)(lVar4 + lVar5 * 8) & 0xffffffff80000000) >> 1;
  uVar7 = *(ulong *)(lVar4 + *(long *)(lVar4 + 0x1380) * 8);
  *(ulong *)(lVar4 + 0x1380) = uVar6;
  uVar7 = uVar7 >> 0xb & 0xffffffff ^ uVar7;
  uVar7 = (uVar7 & 0x13a58ad) << 7 ^ uVar7;
  uVar7 = (uVar7 & 0x1df8c) << 0xf ^ uVar7;
  fVar8 = (float)(uVar7 ^ uVar7 >> 0x12) * 2.3283064e-10;
  *(float *)this_00 = fVar12 + fVar13 * (fVar8 + fVar8 + -1.0);
  fVar12 = *(float *)(this + 0xe8);
  fVar13 = *(float *)(this + 0xf4);
  lVar4 = RandomHelper::getEngine();
  lVar5 = *(long *)(lVar4 + 0x1380);
  uVar6 = (lVar5 + 1U) % 0x270;
  uVar7 = *(ulong *)(lVar4 + uVar6 * 8);
  *(ulong *)(lVar4 + lVar5 * 8) =
       (uVar7 & 1) * 0x9908b0df ^ *(ulong *)(lVar4 + ((lVar5 + 0x18dU) % 0x270) * 8) ^
       (uVar7 & 0x7ffffffe | *(ulong *)(lVar4 + lVar5 * 8) & 0xffffffff80000000) >> 1;
  uVar7 = *(ulong *)(lVar4 + *(long *)(lVar4 + 0x1380) * 8);
  *(ulong *)(lVar4 + 0x1380) = uVar6;
  uVar7 = uVar7 >> 0xb & 0xffffffff ^ uVar7;
  uVar7 = (uVar7 & 0x13a58ad) << 7 ^ uVar7;
  uVar7 = (uVar7 & 0x1df8c) << 0xf ^ uVar7;
  fVar8 = (float)(uVar7 ^ uVar7 >> 0x12) * 2.3283064e-10;
  *(float *)(this_00 + 4) = fVar12 + fVar13 * (fVar8 + fVar8 + -1.0);
  fVar12 = (float)NEON_ucvtf((uint)(byte)this[0xfc]);
  fVar13 = (float)NEON_ucvtf((uint)(byte)this[0x100]);
  lVar4 = RandomHelper::getEngine();
  lVar5 = *(long *)(lVar4 + 0x1380);
  fVar10 = 0.0;
  uVar6 = (lVar5 + 1U) % 0x270;
  uVar7 = *(ulong *)(lVar4 + uVar6 * 8);
  *(ulong *)(lVar4 + lVar5 * 8) =
       (uVar7 & 1) * 0x9908b0df ^ *(ulong *)(lVar4 + ((lVar5 + 0x18dU) % 0x270) * 8) ^
       (uVar7 & 0x7ffffffe | *(ulong *)(lVar4 + lVar5 * 8) & 0xffffffff80000000) >> 1;
  uVar7 = *(ulong *)(lVar4 + *(long *)(lVar4 + 0x1380) * 8);
  *(ulong *)(lVar4 + 0x1380) = uVar6;
  uVar7 = uVar7 >> 0xb & 0xffffffff ^ uVar7;
  uVar7 = (uVar7 & 0x13a58ad) << 7 ^ uVar7;
  uVar7 = (uVar7 & 0x1df8c) << 0xf ^ uVar7;
  fVar8 = (float)(uVar7 ^ uVar7 >> 0x12) * 2.3283064e-10;
  fVar12 = (fVar8 + fVar8 + -1.0) * fVar13 + fVar12;
  fVar13 = (float)NEON_fminnm(fVar12,0x437f0000);
  fVar8 = fVar10;
  if (0.0 <= fVar12) {
    fVar8 = fVar13;
  }
  *(float *)(this_00 + 0x18) = (float)(uint)(int)fVar8;
  fVar13 = (float)NEON_ucvtf((uint)(byte)this[0xfd]);
  fVar15 = (float)NEON_ucvtf((uint)(byte)this[0x101]);
  lVar4 = RandomHelper::getEngine();
  lVar5 = *(long *)(lVar4 + 0x1380);
  uVar6 = (lVar5 + 1U) % 0x270;
  uVar7 = *(ulong *)(lVar4 + uVar6 * 8);
  *(ulong *)(lVar4 + lVar5 * 8) =
       (uVar7 & 1) * 0x9908b0df ^ *(ulong *)(lVar4 + ((lVar5 + 0x18dU) % 0x270) * 8) ^
       (uVar7 & 0x7ffffffe | *(ulong *)(lVar4 + lVar5 * 8) & 0xffffffff80000000) >> 1;
  uVar7 = *(ulong *)(lVar4 + *(long *)(lVar4 + 0x1380) * 8);
  *(ulong *)(lVar4 + 0x1380) = uVar6;
  uVar7 = uVar7 >> 0xb & 0xffffffff ^ uVar7;
  uVar7 = (uVar7 & 0x13a58ad) << 7 ^ uVar7;
  uVar7 = (uVar7 & 0x1df8c) << 0xf ^ uVar7;
  fVar12 = (float)(uVar7 ^ uVar7 >> 0x12) * 2.3283064e-10;
  fVar13 = (fVar12 + fVar12 + -1.0) * fVar15 + fVar13;
  fVar15 = (float)NEON_fminnm(fVar13,0x437f0000);
  fVar12 = fVar10;
  if (0.0 <= fVar13) {
    fVar12 = fVar15;
  }
  *(float *)(this_00 + 0x1c) = (float)(uint)(int)fVar12;
  fVar15 = (float)NEON_ucvtf((uint)(byte)this[0xfe]);
  fVar16 = (float)NEON_ucvtf((uint)(byte)this[0x102]);
  lVar4 = RandomHelper::getEngine();
  lVar5 = *(long *)(lVar4 + 0x1380);
  uVar6 = (lVar5 + 1U) % 0x270;
  uVar7 = *(ulong *)(lVar4 + uVar6 * 8);
  *(ulong *)(lVar4 + lVar5 * 8) =
       (uVar7 & 1) * 0x9908b0df ^ *(ulong *)(lVar4 + ((lVar5 + 0x18dU) % 0x270) * 8) ^
       (uVar7 & 0x7ffffffe | *(ulong *)(lVar4 + lVar5 * 8) & 0xffffffff80000000) >> 1;
  uVar7 = *(ulong *)(lVar4 + *(long *)(lVar4 + 0x1380) * 8);
  *(ulong *)(lVar4 + 0x1380) = uVar6;
  uVar7 = uVar7 >> 0xb & 0xffffffff ^ uVar7;
  uVar7 = (uVar7 & 0x13a58ad) << 7 ^ uVar7;
  uVar7 = (uVar7 & 0x1df8c) << 0xf ^ uVar7;
  fVar13 = (float)(uVar7 ^ uVar7 >> 0x12) * 2.3283064e-10;
  fVar15 = (fVar13 + fVar13 + -1.0) * fVar16 + fVar15;
  fVar16 = (float)NEON_fminnm(fVar15,0x437f0000);
  fVar13 = fVar10;
  if (0.0 <= fVar15) {
    fVar13 = fVar16;
  }
  *(float *)(this_00 + 0x20) = (float)(uint)(int)fVar13;
  fVar16 = (float)NEON_ucvtf((uint)(byte)this[0xff]);
  fVar11 = (float)NEON_ucvtf((uint)(byte)this[0x103]);
  lVar4 = RandomHelper::getEngine();
  lVar5 = *(long *)(lVar4 + 0x1380);
  uVar6 = (lVar5 + 1U) % 0x270;
  uVar7 = *(ulong *)(lVar4 + uVar6 * 8);
  *(ulong *)(lVar4 + lVar5 * 8) =
       (uVar7 & 1) * 0x9908b0df ^ *(ulong *)(lVar4 + ((lVar5 + 0x18dU) % 0x270) * 8) ^
       (uVar7 & 0x7ffffffe | *(ulong *)(lVar4 + lVar5 * 8) & 0xffffffff80000000) >> 1;
  uVar7 = *(ulong *)(lVar4 + *(long *)(lVar4 + 0x1380) * 8);
  *(ulong *)(lVar4 + 0x1380) = uVar6;
  uVar7 = uVar7 >> 0xb & 0xffffffff ^ uVar7;
  uVar7 = (uVar7 & 0x13a58ad) << 7 ^ uVar7;
  uVar7 = (uVar7 & 0x1df8c) << 0xf ^ uVar7;
  fVar15 = (float)(uVar7 ^ uVar7 >> 0x12) * 2.3283064e-10;
  fVar16 = (fVar15 + fVar15 + -1.0) * fVar11 + fVar16;
  fVar11 = (float)NEON_fminnm(fVar16,0x437f0000);
  fVar15 = fVar10;
  if (0.0 <= fVar16) {
    fVar15 = fVar11;
  }
  *(float *)(this_00 + 0x24) = (float)(uint)(int)fVar15;
  fVar11 = (float)NEON_ucvtf((uint)(byte)this[0x104]);
  fVar14 = (float)NEON_ucvtf((uint)(byte)this[0x108]);
  lVar4 = RandomHelper::getEngine();
  lVar5 = *(long *)(lVar4 + 0x1380);
  uVar6 = (lVar5 + 1U) % 0x270;
  uVar7 = *(ulong *)(lVar4 + uVar6 * 8);
  *(ulong *)(lVar4 + lVar5 * 8) =
       (uVar7 & 1) * 0x9908b0df ^ *(ulong *)(lVar4 + ((lVar5 + 0x18dU) % 0x270) * 8) ^
       (uVar7 & 0x7ffffffe | *(ulong *)(lVar4 + lVar5 * 8) & 0xffffffff80000000) >> 1;
  uVar7 = *(ulong *)(lVar4 + *(long *)(lVar4 + 0x1380) * 8);
  *(ulong *)(lVar4 + 0x1380) = uVar6;
  uVar7 = uVar7 >> 0xb & 0xffffffff ^ uVar7;
  uVar7 = (uVar7 & 0x13a58ad) << 7 ^ uVar7;
  uVar7 = (uVar7 & 0x1df8c) << 0xf ^ uVar7;
  fVar16 = (float)(uVar7 ^ uVar7 >> 0x12) * 2.3283064e-10;
  fVar11 = (fVar16 + fVar16 + -1.0) * fVar14 + fVar11;
  fVar14 = (float)NEON_fminnm(fVar11,0x437f0000);
  fVar16 = fVar10;
  if (0.0 <= fVar11) {
    fVar16 = fVar14;
  }
  *(float *)(this_00 + 0x28) = (fVar16 - (float)(uint)(int)fVar8) / fVar9;
  fVar16 = (float)NEON_ucvtf((uint)(byte)this[0x105]);
  fVar11 = (float)NEON_ucvtf((uint)(byte)this[0x109]);
  lVar4 = RandomHelper::getEngine();
  lVar5 = *(long *)(lVar4 + 0x1380);
  uVar6 = (lVar5 + 1U) % 0x270;
  uVar7 = *(ulong *)(lVar4 + uVar6 * 8);
  *(ulong *)(lVar4 + lVar5 * 8) =
       (uVar7 & 1) * 0x9908b0df ^ *(ulong *)(lVar4 + ((lVar5 + 0x18dU) % 0x270) * 8) ^
       (uVar7 & 0x7ffffffe | *(ulong *)(lVar4 + lVar5 * 8) & 0xffffffff80000000) >> 1;
  uVar7 = *(ulong *)(lVar4 + *(long *)(lVar4 + 0x1380) * 8);
  *(ulong *)(lVar4 + 0x1380) = uVar6;
  uVar7 = uVar7 >> 0xb & 0xffffffff ^ uVar7;
  uVar7 = (uVar7 & 0x13a58ad) << 7 ^ uVar7;
  uVar7 = (uVar7 & 0x1df8c) << 0xf ^ uVar7;
  fVar8 = (float)(uVar7 ^ uVar7 >> 0x12) * 2.3283064e-10;
  fVar16 = (fVar8 + fVar8 + -1.0) * fVar11 + fVar16;
  fVar11 = (float)NEON_fminnm(fVar16,0x437f0000);
  fVar8 = fVar10;
  if (0.0 <= fVar16) {
    fVar8 = fVar11;
  }
  *(float *)(this_00 + 0x2c) = (fVar8 - (float)(uint)(int)fVar12) / fVar9;
  fVar12 = (float)NEON_ucvtf((uint)(byte)this[0x106]);
  fVar16 = (float)NEON_ucvtf((uint)(byte)this[0x10a]);
  lVar4 = RandomHelper::getEngine();
  lVar5 = *(long *)(lVar4 + 0x1380);
  uVar6 = (lVar5 + 1U) % 0x270;
  uVar7 = *(ulong *)(lVar4 + uVar6 * 8);
  *(ulong *)(lVar4 + lVar5 * 8) =
       (uVar7 & 1) * 0x9908b0df ^ *(ulong *)(lVar4 + ((lVar5 + 0x18dU) % 0x270) * 8) ^
       (uVar7 & 0x7ffffffe | *(ulong *)(lVar4 + lVar5 * 8) & 0xffffffff80000000) >> 1;
  uVar7 = *(ulong *)(lVar4 + *(long *)(lVar4 + 0x1380) * 8);
  *(ulong *)(lVar4 + 0x1380) = uVar6;
  uVar7 = uVar7 >> 0xb & 0xffffffff ^ uVar7;
  uVar7 = (uVar7 & 0x13a58ad) << 7 ^ uVar7;
  uVar7 = (uVar7 & 0x1df8c) << 0xf ^ uVar7;
  fVar8 = (float)(uVar7 ^ uVar7 >> 0x12) * 2.3283064e-10;
  fVar12 = (fVar8 + fVar8 + -1.0) * fVar16 + fVar12;
  fVar16 = (float)NEON_fminnm(fVar12,0x437f0000);
  fVar8 = fVar10;
  if (0.0 <= fVar12) {
    fVar8 = fVar16;
  }
  *(float *)(this_00 + 0x30) = (fVar8 - (float)(uint)(int)fVar13) / fVar9;
  fVar12 = (float)NEON_ucvtf((uint)(byte)this[0x107]);
  fVar13 = (float)NEON_ucvtf((uint)(byte)this[0x10b]);
  lVar4 = RandomHelper::getEngine();
  lVar5 = *(long *)(lVar4 + 0x1380);
  uVar6 = (lVar5 + 1U) % 0x270;
  uVar7 = *(ulong *)(lVar4 + uVar6 * 8);
  *(ulong *)(lVar4 + lVar5 * 8) =
       (uVar7 & 1) * 0x9908b0df ^ *(ulong *)(lVar4 + ((lVar5 + 0x18dU) % 0x270) * 8) ^
       (uVar7 & 0x7ffffffe | *(ulong *)(lVar4 + lVar5 * 8) & 0xffffffff80000000) >> 1;
  uVar7 = *(ulong *)(lVar4 + *(long *)(lVar4 + 0x1380) * 8);
  *(ulong *)(lVar4 + 0x1380) = uVar6;
  uVar7 = uVar7 >> 0xb & 0xffffffff ^ uVar7;
  uVar7 = (uVar7 & 0x13a58ad) << 7 ^ uVar7;
  uVar7 = (uVar7 & 0x1df8c) << 0xf ^ uVar7;
  fVar8 = (float)(uVar7 ^ uVar7 >> 0x12) * 2.3283064e-10;
  fVar12 = (fVar8 + fVar8 + -1.0) * fVar13 + fVar12;
  fVar13 = (float)NEON_fminnm(fVar12,0x437f0000);
  fVar8 = fVar10;
  if (0.0 <= fVar12) {
    fVar8 = fVar13;
  }
  *(float *)(this_00 + 0x34) = (fVar8 - (float)(uint)(int)fVar15) / fVar9;
  fVar8 = *(float *)(this + 0x130);
  fVar13 = *(float *)(this + 0x134);
  lVar4 = RandomHelper::getEngine();
  lVar5 = *(long *)(lVar4 + 0x1380);
  uVar6 = (lVar5 + 1U) % 0x270;
  uVar7 = *(ulong *)(lVar4 + uVar6 * 8);
  *(ulong *)(lVar4 + lVar5 * 8) =
       (uVar7 & 1) * 0x9908b0df ^ *(ulong *)(lVar4 + ((lVar5 + 0x18dU) % 0x270) * 8) ^
       (uVar7 & 0x7ffffffe | *(ulong *)(lVar4 + lVar5 * 8) & 0xffffffff80000000) >> 1;
  uVar7 = *(ulong *)(lVar4 + *(long *)(lVar4 + 0x1380) * 8);
  *(ulong *)(lVar4 + 0x1380) = uVar6;
  uVar7 = uVar7 >> 0xb & 0xffffffff ^ uVar7;
  uVar7 = (uVar7 & 0x13a58ad) << 7 ^ uVar7;
  uVar7 = (uVar7 & 0x1df8c) << 0xf ^ uVar7;
  fVar12 = (float)(uVar7 ^ uVar7 >> 0x12) * 2.3283064e-10;
  fVar8 = fVar8 + fVar13 * (fVar12 + fVar12 + -1.0);
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  *(float *)(this_00 + 0x38) = fVar8;
  fVar12 = *(float *)(this + 0x138);
  if (fVar12 != -1.0) {
    fVar10 = *(float *)(this + 0x13c);
    lVar4 = RandomHelper::getEngine();
    lVar5 = *(long *)(lVar4 + 0x1380);
    uVar6 = (lVar5 + 1U) % 0x270;
    uVar7 = *(ulong *)(lVar4 + uVar6 * 8);
    *(ulong *)(lVar4 + lVar5 * 8) =
         (uVar7 & 1) * 0x9908b0df ^ *(ulong *)(lVar4 + ((lVar5 + 0x18dU) % 0x270) * 8) ^
         (uVar7 & 0x7ffffffe | *(ulong *)(lVar4 + lVar5 * 8) & 0xffffffff80000000) >> 1;
    uVar7 = *(ulong *)(lVar4 + *(long *)(lVar4 + 0x1380) * 8);
    *(ulong *)(lVar4 + 0x1380) = uVar6;
    uVar7 = uVar7 >> 0xb & 0xffffffff ^ uVar7;
    uVar7 = (uVar7 & 0x13a58ad) << 7 ^ uVar7;
    uVar7 = (uVar7 & 0x1df8c) << 0xf ^ uVar7;
    fVar13 = (float)(uVar7 ^ uVar7 >> 0x12) * 2.3283064e-10;
    fVar12 = fVar12 + fVar10 * (fVar13 + fVar13 + -1.0);
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    fVar10 = (fVar12 - fVar8) / fVar9;
  }
  *(float *)(this_00 + 0x3c) = fVar10;
  fVar12 = *(float *)(this + 0x140);
  fVar13 = *(float *)(this + 0x144);
  lVar4 = RandomHelper::getEngine();
  lVar5 = *(long *)(lVar4 + 0x1380);
  uVar6 = (lVar5 + 1U) % 0x270;
  uVar7 = *(ulong *)(lVar4 + uVar6 * 8);
  *(ulong *)(lVar4 + lVar5 * 8) =
       (uVar7 & 1) * 0x9908b0df ^ *(ulong *)(lVar4 + ((lVar5 + 0x18dU) % 0x270) * 8) ^
       (uVar7 & 0x7ffffffe | *(ulong *)(lVar4 + lVar5 * 8) & 0xffffffff80000000) >> 1;
  uVar7 = *(ulong *)(lVar4 + *(long *)(lVar4 + 0x1380) * 8);
  *(ulong *)(lVar4 + 0x1380) = uVar6;
  fVar10 = *(float *)(this + 0x148);
  fVar15 = *(float *)(this + 0x14c);
  uVar7 = uVar7 >> 0xb & 0xffffffff ^ uVar7;
  uVar7 = (uVar7 & 0x13a58ad) << 7 ^ uVar7;
  uVar7 = (uVar7 & 0x1df8c) << 0xf ^ uVar7;
  fVar8 = (float)(uVar7 ^ uVar7 >> 0x12) * 2.3283064e-10;
  fVar12 = fVar12 + fVar13 * (fVar8 + fVar8 + -1.0);
  lVar4 = RandomHelper::getEngine();
  lVar5 = *(long *)(lVar4 + 0x1380);
  uVar6 = (lVar5 + 1U) % 0x270;
  uVar7 = *(ulong *)(lVar4 + uVar6 * 8);
  *(ulong *)(lVar4 + lVar5 * 8) =
       (uVar7 & 1) * 0x9908b0df ^ *(ulong *)(lVar4 + ((lVar5 + 0x18dU) % 0x270) * 8) ^
       (uVar7 & 0x7ffffffe | *(ulong *)(lVar4 + lVar5 * 8) & 0xffffffff80000000) >> 1;
  uVar7 = *(ulong *)(lVar4 + *(long *)(lVar4 + 0x1380) * 8);
  *(ulong *)(lVar4 + 0x1380) = uVar6;
  uVar7 = uVar7 >> 0xb & 0xffffffff ^ uVar7;
  uVar7 = (uVar7 & 0x13a58ad) << 7 ^ uVar7;
  uVar7 = (uVar7 & 0x1df8c) << 0xf ^ uVar7;
  fVar8 = (float)(uVar7 ^ uVar7 >> 0x12) * 2.3283064e-10;
  *(float *)(this_00 + 0x40) = fVar12;
  *(float *)(this_00 + 0x44) = ((fVar10 + fVar15 * (fVar8 + fVar8 + -1.0)) - fVar12) / fVar9;
  *(undefined8 *)(this_00 + 0xc) = *(undefined8 *)param_1;
  fVar8 = *(float *)(this + 0x150);
  fVar13 = *(float *)(this + 0x3c);
  fVar10 = *(float *)(this + 0x154);
  lVar4 = RandomHelper::getEngine();
  lVar5 = *(long *)(lVar4 + 0x1380);
  uVar6 = (lVar5 + 1U) % 0x270;
  uVar7 = *(ulong *)(lVar4 + uVar6 * 8);
  *(ulong *)(lVar4 + lVar5 * 8) =
       (uVar7 & 1) * 0x9908b0df ^ *(ulong *)(lVar4 + ((lVar5 + 0x18dU) % 0x270) * 8) ^
       (uVar7 & 0x7ffffffe | *(ulong *)(lVar4 + lVar5 * 8) & 0xffffffff80000000) >> 1;
  uVar7 = *(ulong *)(lVar4 + *(long *)(lVar4 + 0x1380) * 8);
  *(ulong *)(lVar4 + 0x1380) = uVar6;
  uVar7 = uVar7 >> 0xb & 0xffffffff ^ uVar7;
  uVar7 = (uVar7 & 0x13a58ad) << 7 ^ uVar7;
  uVar7 = (uVar7 & 0x1df8c) << 0xf ^ uVar7;
  fVar12 = (float)(uVar7 ^ uVar7 >> 0x12) * 2.3283064e-10;
  fVar8 = (fVar8 + fVar13 + fVar10 * (fVar12 + fVar12 + -1.0)) * 0.017453292;
  if (*(int *)(this + 0x124) == 0) {
    fVar9 = *(float *)(this + 0x158);
    fVar13 = *(float *)(this + 0x15c);
    lVar4 = RandomHelper::getEngine();
    lVar5 = *(long *)(lVar4 + 0x1380);
    uVar6 = (lVar5 + 1U) % 0x270;
    uVar7 = *(ulong *)(lVar4 + uVar6 * 8);
    *(ulong *)(lVar4 + lVar5 * 8) =
         (uVar7 & 1) * 0x9908b0df ^ *(ulong *)(lVar4 + ((lVar5 + 0x18dU) % 0x270) * 8) ^
         (uVar7 & 0x7ffffffe | *(ulong *)(lVar4 + lVar5 * 8) & 0xffffffff80000000) >> 1;
    uVar7 = *(ulong *)(lVar4 + *(long *)(lVar4 + 0x1380) * 8);
    *(ulong *)(lVar4 + 0x1380) = uVar6;
    uVar7 = uVar7 >> 0xb & 0xffffffff ^ uVar7;
    uVar7 = (uVar7 & 0x13a58ad) << 7 ^ uVar7;
    uVar7 = (uVar7 & 0x1df8c) << 0xf ^ uVar7;
    fVar12 = (float)(uVar7 ^ uVar7 >> 0x12) * 2.3283064e-10;
    fVar9 = fVar9 + fVar13 * (fVar12 + fVar12 + -1.0);
    sincosf(fVar8,&fStack_b4,&local_b8);
    *(float *)(this_00 + 0x58) = local_b8 * fVar9;
    *(float *)(this_00 + 0x5c) = fStack_b4 * fVar9;
    *(float *)(this_00 + 0x60) = *(float *)(this_00 + 0x60) * fVar9;
    fVar12 = *(float *)(this + 0x160);
    fVar9 = *(float *)(this + 0x164);
    lVar4 = RandomHelper::getEngine();
    lVar5 = *(long *)(lVar4 + 0x1380);
    uVar6 = (lVar5 + 1U) % 0x270;
    uVar7 = *(ulong *)(lVar4 + uVar6 * 8);
    *(ulong *)(lVar4 + lVar5 * 8) =
         (uVar7 & 1) * 0x9908b0df ^ *(ulong *)(lVar4 + ((lVar5 + 0x18dU) % 0x270) * 8) ^
         (uVar7 & 0x7ffffffe | *(ulong *)(lVar4 + lVar5 * 8) & 0xffffffff80000000) >> 1;
    uVar7 = *(ulong *)(lVar4 + *(long *)(lVar4 + 0x1380) * 8);
    *(ulong *)(lVar4 + 0x1380) = uVar6;
    uVar7 = uVar7 >> 0xb & 0xffffffff ^ uVar7;
    uVar7 = (uVar7 & 0x13a58ad) << 7 ^ uVar7;
    uVar7 = (uVar7 & 0x1df8c) << 0xf ^ uVar7;
    fVar8 = (float)(uVar7 ^ uVar7 >> 0x12) * 2.3283064e-10;
    *(float *)(this_00 + 100) = fVar12 + fVar9 * (fVar8 + fVar8 + -1.0);
    fVar12 = *(float *)(this + 0x168);
    fVar9 = *(float *)(this + 0x16c);
    lVar4 = RandomHelper::getEngine();
    lVar5 = *(long *)(lVar4 + 0x1380);
    uVar6 = (lVar5 + 1U) % 0x270;
    uVar7 = *(ulong *)(lVar4 + uVar6 * 8);
    *(ulong *)(lVar4 + lVar5 * 8) =
         (uVar7 & 1) * 0x9908b0df ^ *(ulong *)(lVar4 + ((lVar5 + 0x18dU) % 0x270) * 8) ^
         (uVar7 & 0x7ffffffe | *(ulong *)(lVar4 + lVar5 * 8) & 0xffffffff80000000) >> 1;
    uVar7 = *(ulong *)(lVar4 + *(long *)(lVar4 + 0x1380) * 8);
    *(ulong *)(lVar4 + 0x1380) = uVar6;
    uVar7 = uVar7 >> 0xb & 0xffffffff ^ uVar7;
    uVar7 = (uVar7 & 0x13a58ad) << 7 ^ uVar7;
    uVar7 = (uVar7 & 0x1df8c) << 0xf ^ uVar7;
    fVar8 = (float)(uVar7 ^ uVar7 >> 0x12) * 2.3283064e-10;
    *(float *)(this_00 + 0x68) = fVar12 + fVar9 * (fVar8 + fVar8 + -1.0);
    if (this[0x170] != (ParticleSimulator)0x0) {
      fVar8 = atan2f(*(float *)(this_00 + 0x5c),*(float *)(this_00 + 0x58));
      *(float *)(this_00 + 0x40) = fVar8 * -57.29578;
    }
  }
  else {
    fVar13 = *(float *)(this + 0x174);
    fVar15 = *(float *)(this + 0x178);
    lVar4 = RandomHelper::getEngine();
    lVar5 = *(long *)(lVar4 + 0x1380);
    uVar6 = (lVar5 + 1U) % 0x270;
    uVar7 = *(ulong *)(lVar4 + uVar6 * 8);
    *(ulong *)(lVar4 + lVar5 * 8) =
         (uVar7 & 1) * 0x9908b0df ^ *(ulong *)(lVar4 + ((lVar5 + 0x18dU) % 0x270) * 8) ^
         (uVar7 & 0x7ffffffe | *(ulong *)(lVar4 + lVar5 * 8) & 0xffffffff80000000) >> 1;
    uVar7 = *(ulong *)(lVar4 + *(long *)(lVar4 + 0x1380) * 8);
    *(ulong *)(lVar4 + 0x1380) = uVar6;
    fVar10 = *(float *)(this + 0x17c);
    fVar16 = *(float *)(this + 0x180);
    uVar7 = uVar7 >> 0xb & 0xffffffff ^ uVar7;
    uVar7 = (uVar7 & 0x13a58ad) << 7 ^ uVar7;
    uVar7 = (uVar7 & 0x1df8c) << 0xf ^ uVar7;
    fVar12 = (float)(uVar7 ^ uVar7 >> 0x12) * 2.3283064e-10;
    fVar13 = fVar13 + fVar15 * (fVar12 + fVar12 + -1.0);
    lVar4 = RandomHelper::getEngine();
    lVar5 = *(long *)(lVar4 + 0x1380);
    uVar6 = (lVar5 + 1U) % 0x270;
    uVar7 = *(ulong *)(lVar4 + uVar6 * 8);
    *(ulong *)(lVar4 + lVar5 * 8) =
         (uVar7 & 1) * 0x9908b0df ^ *(ulong *)(lVar4 + ((lVar5 + 0x18dU) % 0x270) * 8) ^
         (uVar7 & 0x7ffffffe | *(ulong *)(lVar4 + lVar5 * 8) & 0xffffffff80000000) >> 1;
    uVar7 = *(ulong *)(lVar4 + *(long *)(lVar4 + 0x1380) * 8);
    *(ulong *)(lVar4 + 0x1380) = uVar6;
    *(float *)(this_00 + 0x74) = fVar13;
    fVar12 = 0.0;
    if (*(float *)(this + 0x17c) != -1.0) {
      uVar7 = uVar7 >> 0xb & 0xffffffff ^ uVar7;
      uVar7 = (uVar7 & 0x13a58ad) << 7 ^ uVar7;
      uVar7 = (uVar7 & 0x1df8c) << 0xf ^ uVar7;
      fVar12 = (float)(uVar7 ^ uVar7 >> 0x12) * 2.3283064e-10;
      fVar12 = ((fVar10 + fVar16 * (fVar12 + fVar12 + -1.0)) - fVar13) / fVar9;
    }
    *(float *)(this_00 + 0x78) = fVar12;
    *(float *)(this_00 + 0x6c) = fVar8;
    fVar12 = *(float *)(this + 0x184);
    fVar9 = *(float *)(this + 0x188);
    lVar4 = RandomHelper::getEngine();
    lVar5 = *(long *)(lVar4 + 0x1380);
    uVar6 = (lVar5 + 1U) % 0x270;
    uVar7 = *(ulong *)(lVar4 + uVar6 * 8);
    *(ulong *)(lVar4 + lVar5 * 8) =
         (uVar7 & 1) * 0x9908b0df ^ *(ulong *)(lVar4 + ((lVar5 + 0x18dU) % 0x270) * 8) ^
         (uVar7 & 0x7ffffffe | *(ulong *)(lVar4 + lVar5 * 8) & 0xffffffff80000000) >> 1;
    uVar7 = *(ulong *)(lVar4 + *(long *)(lVar4 + 0x1380) * 8);
    *(ulong *)(lVar4 + 0x1380) = uVar6;
    uVar7 = uVar7 >> 0xb & 0xffffffff ^ uVar7;
    uVar7 = (uVar7 & 0x13a58ad) << 7 ^ uVar7;
    uVar7 = (uVar7 & 0x1df8c) << 0xf ^ uVar7;
    fVar8 = (float)(uVar7 ^ uVar7 >> 0x12) * 2.3283064e-10;
    *(float *)(this_00 + 0x70) = (fVar12 + fVar9 * (fVar8 + fVar8 + -1.0)) * 0.017453292;
  }
  if (*(long *)(lVar1 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

