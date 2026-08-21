
/* v8::Isolate::MeasureMemory(v8::Local<v8::Context>, v8::MeasureMemoryMode) */

void __thiscall v8::Isolate::MeasureMemory(Isolate *this,ulong *param_2,undefined4 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = *param_2 & 0xffffffff00000000;
  uVar2 = uVar2 | *(uint *)((uVar2 | *(uint *)(*param_2 - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(this + 0x95a0);
    if (puVar1 == *(ulong **)(this + 0x95a8)) {
      puVar1 = (ulong *)internal::HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar2;
  }
  else {
    puVar1 = (ulong *)internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(this + 0x95b8),uVar2);
  }
  internal::Heap::MeasureMemory(this + 0x8850,puVar1,param_3);
  return;
}

