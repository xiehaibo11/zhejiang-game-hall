
/* v8::internal::Handle<v8::internal::HeapNumber>
   v8::internal::Factory::NewHeapNumber<(v8::internal::AllocationType)0>() */

void __thiscall v8::internal::Factory::NewHeapNumber<(v8::internal::AllocationType)0>(Factory *this)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong *puVar3;
  
  uVar1 = *(undefined4 *)(this + 0x140);
  uVar2 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),0xc,0,1,2);
  *(undefined4 *)(uVar2 - 1) = uVar1;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(this + 0x95a0);
    if (puVar3 == *(ulong **)(this + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar2;
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar2);
  }
  return;
}

