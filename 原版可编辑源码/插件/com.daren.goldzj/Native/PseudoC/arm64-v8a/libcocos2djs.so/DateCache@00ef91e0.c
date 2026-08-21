
/* v8::internal::DateCache::DateCache() */

void __thiscall v8::internal::DateCache::DateCache(DateCache *this)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  
  *(undefined ***)this = &PTR__DateCache_01ca44c0;
  *(undefined8 *)(this + 8) = 0;
  plVar3 = (long *)base::OS::CreateTimezoneCache();
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0x800000017fffffff;
  *(long **)(this + 0x250) = plVar3;
  uVar1 = (*(int *)(this + 8) >> 1) + 1;
  uVar2 = 0;
  if (*(int *)(this + 8) < 0x7ffffffe) {
    uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
  }
  *(ulong *)(this + 8) = uVar2;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0x800000017fffffff;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0x800000017fffffff;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0x800000017fffffff;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0x800000017fffffff;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0x800000017fffffff;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0x800000017fffffff;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0x800000017fffffff;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0x800000017fffffff;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0x800000017fffffff;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0x800000017fffffff;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0x800000017fffffff;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0x800000017fffffff;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0x800000017fffffff;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0x800000017fffffff;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0x800000017fffffff;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x130) = 0x800000017fffffff;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0x800000017fffffff;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0x800000017fffffff;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x120) = 0x800000017fffffff;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x170) = 0x800000017fffffff;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x180) = 0x800000017fffffff;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0x800000017fffffff;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x160) = 0x800000017fffffff;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0x800000017fffffff;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0x800000017fffffff;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 400) = 0x800000017fffffff;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1a0) = 0x800000017fffffff;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0x800000017fffffff;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x200) = 0x800000017fffffff;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0x800000017fffffff;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0x800000017fffffff;
  *(undefined4 *)(this + 0x210) = 0;
  *(DateCache **)(this + 0x218) = this + 0x10;
  this[0x22c] = (DateCache)0x0;
  *(DateCache **)(this + 0x220) = this + 0x20;
  *(undefined4 *)(this + 0x228) = 0x7fffffff;
  (**(code **)(*plVar3 + 0x18))(plVar3,0);
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  return;
}

