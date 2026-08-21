
/* v8::internal::Handle<v8::internal::Object>
   v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>(double) */

void __thiscall
v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>(Factory *this,double param_1)

{
  Factory *pFVar1;
  undefined4 uVar2;
  ulong *puVar3;
  uint uVar4;
  ulong uVar5;
  
  pFVar1 = this + 0x95a0;
  if (((param_1 <= 1073741823.0) && (-1073741824.0 <= param_1)) && (param_1 != -0.0)) {
    uVar4 = (uint)param_1;
    if ((double)(int)uVar4 == param_1) {
      uVar5 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar4 << 1;
      if (*(CanonicalHandleScope **)(this + 0x95b8) != (CanonicalHandleScope *)0x0) {
        CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar5);
        return;
      }
      puVar3 = *(ulong **)pFVar1;
      if (puVar3 == *(ulong **)(this + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)pFVar1 = puVar3 + 1;
      *puVar3 = uVar5;
      return;
    }
  }
  uVar2 = *(undefined4 *)(this + 0x140);
  uVar5 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),0xc,0,1,2);
  *(undefined4 *)(uVar5 - 1) = uVar2;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pFVar1;
    if (puVar3 == *(ulong **)(this + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar3 + 1;
    *puVar3 = uVar5;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar5);
  }
  *(double *)(*puVar3 + 3) = param_1;
  return;
}

