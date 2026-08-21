
/* cocos2d::ParticleData::copyParticle(int, int) */

void __thiscall cocos2d::ParticleData::copyParticle(ParticleData *this,int param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = -(ulong)((uint)param_2 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_2 << 2;
  uVar2 = -(ulong)((uint)param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)param_1 << 2;
  *(undefined4 *)(*(long *)this + uVar2) = *(undefined4 *)(*(long *)this + uVar1);
  *(undefined4 *)(*(long *)(this + 8) + uVar2) = *(undefined4 *)(*(long *)(this + 8) + uVar1);
  *(undefined4 *)(*(long *)(this + 0x10) + uVar2) = *(undefined4 *)(*(long *)(this + 0x10) + uVar1);
  *(undefined4 *)(*(long *)(this + 0x18) + uVar2) = *(undefined4 *)(*(long *)(this + 0x18) + uVar1);
  *(undefined4 *)(*(long *)(this + 0x20) + uVar2) = *(undefined4 *)(*(long *)(this + 0x20) + uVar1);
  *(undefined4 *)(*(long *)(this + 0x28) + uVar2) = *(undefined4 *)(*(long *)(this + 0x28) + uVar1);
  *(undefined4 *)(*(long *)(this + 0x30) + uVar2) = *(undefined4 *)(*(long *)(this + 0x30) + uVar1);
  *(undefined4 *)(*(long *)(this + 0x38) + uVar2) = *(undefined4 *)(*(long *)(this + 0x38) + uVar1);
  *(undefined4 *)(*(long *)(this + 0x40) + uVar2) = *(undefined4 *)(*(long *)(this + 0x40) + uVar1);
  *(undefined4 *)(*(long *)(this + 0x48) + uVar2) = *(undefined4 *)(*(long *)(this + 0x48) + uVar1);
  *(undefined4 *)(*(long *)(this + 0x50) + uVar2) = *(undefined4 *)(*(long *)(this + 0x50) + uVar1);
  *(undefined4 *)(*(long *)(this + 0x58) + uVar2) = *(undefined4 *)(*(long *)(this + 0x58) + uVar1);
  *(undefined4 *)(*(long *)(this + 0x60) + uVar2) = *(undefined4 *)(*(long *)(this + 0x60) + uVar1);
  *(undefined4 *)(*(long *)(this + 0x68) + uVar2) = *(undefined4 *)(*(long *)(this + 0x68) + uVar1);
  *(undefined4 *)(*(long *)(this + 0x70) + uVar2) = *(undefined4 *)(*(long *)(this + 0x70) + uVar1);
  *(undefined4 *)(*(long *)(this + 0x78) + uVar2) = *(undefined4 *)(*(long *)(this + 0x78) + uVar1);
  *(undefined4 *)(*(long *)(this + 0x80) + uVar2) = *(undefined4 *)(*(long *)(this + 0x80) + uVar1);
  *(undefined4 *)(*(long *)(this + 0x88) + uVar2) = *(undefined4 *)(*(long *)(this + 0x88) + uVar1);
  *(undefined4 *)(*(long *)(this + 0x90) + uVar2) = *(undefined4 *)(*(long *)(this + 0x90) + uVar1);
  *(undefined4 *)(*(long *)(this + 0x98) + uVar2) = *(undefined4 *)(*(long *)(this + 0x98) + uVar1);
  *(undefined4 *)(*(long *)(this + 0xa0) + uVar2) = *(undefined4 *)(*(long *)(this + 0xa0) + uVar1);
  *(undefined4 *)(*(long *)(this + 0xa8) + uVar2) = *(undefined4 *)(*(long *)(this + 0xa8) + uVar1);
  *(undefined4 *)(*(long *)(this + 0xb0) + uVar2) = *(undefined4 *)(*(long *)(this + 0xb0) + uVar1);
  *(undefined4 *)(*(long *)(this + 0xb8) + uVar2) = *(undefined4 *)(*(long *)(this + 0xb8) + uVar1);
  *(undefined4 *)(*(long *)(this + 0xc0) + uVar2) = *(undefined4 *)(*(long *)(this + 0xc0) + uVar1);
  *(undefined4 *)(*(long *)(this + 200) + uVar2) = *(undefined4 *)(*(long *)(this + 200) + uVar1);
  return;
}

