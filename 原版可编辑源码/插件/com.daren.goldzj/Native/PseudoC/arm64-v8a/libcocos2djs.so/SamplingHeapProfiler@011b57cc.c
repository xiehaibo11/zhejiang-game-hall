
/* v8::internal::SamplingHeapProfiler::SamplingHeapProfiler(v8::internal::Heap*,
   v8::internal::StringsStorage*, unsigned long, int, v8::HeapProfiler::SamplingFlags) */

void __thiscall
v8::internal::SamplingHeapProfiler::SamplingHeapProfiler
          (SamplingHeapProfiler *this,long param_1,undefined8 param_2,long param_3,
          undefined4 param_4,undefined4 param_6)

{
  int iVar1;
  undefined8 uVar2;
  AllocationObserver *pAVar3;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(Isolate **)this = (Isolate *)(param_1 + -0x8850);
  *(long *)(this + 8) = param_1;
  *(undefined4 *)(this + 0x18) = 0;
  uVar2 = Isolate::random_number_generator((Isolate *)(param_1 + -0x8850));
  pAVar3 = (AllocationObserver *)(this + 0x20);
  *(undefined ***)pAVar3 = &PTR__AllocationObserver_01cb77f8;
  iVar1 = *(int *)(this + 0x18);
  *(SamplingHeapProfiler **)(this + 0x38) = this;
  *(long *)(this + 0x40) = param_1;
  *(long *)(this + 0x50) = param_3;
  *(undefined8 *)(this + 0x58) = param_2;
  *(long *)(this + 0x28) = param_3;
  *(long *)(this + 0x30) = param_3;
  *(undefined8 *)(this + 0x48) = uVar2;
  *(int *)(this + 0x18) = iVar1 + 1;
  *(undefined8 *)(this + 0x68) = 0;
  *(SamplingHeapProfiler **)(this + 0x60) = this + 0x68;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(char **)(this + 0xa0) = "(root)";
  *(int *)(this + 0xa8) = iVar1 + 1;
  this[0xac] = (SamplingHeapProfiler)0x0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xd0) = 0x3f800000;
  *(undefined4 *)(this + 0xd8) = param_4;
  *(long *)(this + 0xe0) = param_3;
  *(undefined8 *)(this + 0x70) = 0;
  *(SamplingHeapProfiler **)(this + 0x78) = this + 0x80;
  *(undefined4 *)(this + 0xe8) = param_6;
  if (param_3 != 0) {
    Heap::AddAllocationObserversToAllSpaces(*(Heap **)(this + 8),pAVar3,pAVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","rate_ > 0u");
}

