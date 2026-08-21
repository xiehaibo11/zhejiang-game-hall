
/* v8::internal::wasm::LiftoffAssembler::CacheState::Steal(v8::internal::wasm::LiftoffAssembler::CacheState
   const&) */

void __thiscall
v8::internal::wasm::LiftoffAssembler::CacheState::Steal(CacheState *this,CacheState *param_1)

{
  CacheState *__ptr;
  void *__src;
  long lVar1;
  size_t __size;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (this != param_1) {
    __src = *(void **)param_1;
    __ptr = *(CacheState **)this;
    __size = *(long *)(param_1 + 8) - (long)__src;
    lVar1 = (long)__size >> 2;
    if ((ulong)((*(long *)(this + 0x10) - (long)__ptr >> 2) * -0x5555555555555555) <
        (ulong)(lVar1 * -0x5555555555555555)) {
      if (__ptr != this + 0x18) {
        free(__ptr);
      }
      __ptr = malloc(__size);
      *(CacheState **)this = __ptr;
      *(CacheState **)(this + 0x10) = __ptr + lVar1 * 4;
      __src = *(void **)param_1;
    }
    memcpy(__ptr,__src,__size);
    *(long *)(this + 8) = *(long *)this + lVar1 * 4;
  }
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  uVar6 = *(undefined8 *)(param_1 + 0x90);
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  uVar8 = *(undefined8 *)(param_1 + 0x80);
  uVar7 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(this + 0xb0) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(this + 0xa8) = uVar2;
  *(undefined8 *)(this + 0xa0) = uVar4;
  *(undefined8 *)(this + 0x98) = uVar3;
  *(undefined8 *)(this + 0x90) = uVar6;
  *(undefined8 *)(this + 0x88) = uVar5;
  *(undefined8 *)(this + 0x80) = uVar8;
  *(undefined8 *)(this + 0x78) = uVar7;
  uVar2 = *(undefined8 *)(param_1 + 0xe8);
  uVar4 = *(undefined8 *)(param_1 + 0xe0);
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  uVar6 = *(undefined8 *)(param_1 + 0xd0);
  uVar5 = *(undefined8 *)(param_1 + 200);
  uVar8 = *(undefined8 *)(param_1 + 0xc0);
  uVar7 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(this + 0xf0) = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(this + 0xe8) = uVar2;
  *(undefined8 *)(this + 0xe0) = uVar4;
  *(undefined8 *)(this + 0xd8) = uVar3;
  *(undefined8 *)(this + 0xd0) = uVar6;
  *(undefined8 *)(this + 200) = uVar5;
  *(undefined8 *)(this + 0xc0) = uVar8;
  *(undefined8 *)(this + 0xb8) = uVar7;
  uVar6 = *(undefined8 *)(param_1 + 0x118);
  uVar3 = *(undefined8 *)(param_1 + 0x130);
  uVar2 = *(undefined8 *)(param_1 + 0x128);
  uVar5 = *(undefined8 *)(param_1 + 0x110);
  uVar4 = *(undefined8 *)(param_1 + 0x108);
  uVar8 = *(undefined8 *)(param_1 + 0x100);
  uVar7 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(this + 0x120) = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(this + 0x118) = uVar6;
  *(undefined8 *)(this + 0x130) = uVar3;
  *(undefined8 *)(this + 0x128) = uVar2;
  *(undefined8 *)(this + 0x110) = uVar5;
  *(undefined8 *)(this + 0x108) = uVar4;
  *(undefined8 *)(this + 0x100) = uVar8;
  *(undefined8 *)(this + 0xf8) = uVar7;
  uVar2 = *(undefined8 *)(param_1 + 0x158);
  uVar4 = *(undefined8 *)(param_1 + 0x170);
  uVar3 = *(undefined8 *)(param_1 + 0x168);
  uVar6 = *(undefined8 *)(param_1 + 0x140);
  uVar5 = *(undefined8 *)(param_1 + 0x138);
  uVar8 = *(undefined8 *)(param_1 + 0x150);
  uVar7 = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(this + 0x160) = *(undefined8 *)(param_1 + 0x160);
  *(undefined8 *)(this + 0x158) = uVar2;
  *(undefined8 *)(this + 0x170) = uVar4;
  *(undefined8 *)(this + 0x168) = uVar3;
  *(undefined8 *)(this + 0x140) = uVar6;
  *(undefined8 *)(this + 0x138) = uVar5;
  *(undefined8 *)(this + 0x150) = uVar8;
  *(undefined8 *)(this + 0x148) = uVar7;
  return;
}

