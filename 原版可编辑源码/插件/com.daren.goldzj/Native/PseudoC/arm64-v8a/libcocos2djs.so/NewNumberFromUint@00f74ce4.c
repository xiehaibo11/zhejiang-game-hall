
/* v8::internal::Factory::NewNumberFromUint(unsigned int) */

void __thiscall v8::internal::Factory::NewNumberFromUint(Factory *this,uint param_1)

{
  Factory *pFVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  pFVar1 = this + 0x95a0;
  if (param_1 >> 0x1e == 0) {
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)pFVar1;
      if (puVar4 == *(ulong **)(this + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)pFVar1 = puVar4 + 1;
      *puVar4 = (ulong)param_1 << 1;
    }
    else {
      CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),(ulong)param_1 << 1);
    }
  }
  else {
    uVar2 = *(undefined4 *)(this + 0x140);
    uVar3 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),0xc,0,1,2);
    *(undefined4 *)(uVar3 - 1) = uVar2;
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)pFVar1;
      if (puVar4 == *(ulong **)(this + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)pFVar1 = puVar4 + 1;
      *puVar4 = uVar3;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar3);
    }
    *(double *)(*puVar4 + 3) = (double)param_1;
  }
  return;
}

