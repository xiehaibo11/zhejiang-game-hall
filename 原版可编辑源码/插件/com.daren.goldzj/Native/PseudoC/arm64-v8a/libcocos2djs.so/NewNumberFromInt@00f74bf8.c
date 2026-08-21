
/* v8::internal::Factory::NewNumberFromInt(int) */

void __thiscall v8::internal::Factory::NewNumberFromInt(Factory *this,int param_1)

{
  Factory *pFVar1;
  undefined4 uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  pFVar1 = this + 0x95a0;
  if ((long)param_1 + 0x40000000U >> 0x1f == 0) {
    uVar4 = (long)param_1 << 1;
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)pFVar1;
      if (puVar3 == *(ulong **)(this + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)pFVar1 = puVar3 + 1;
      *puVar3 = uVar4;
    }
    else {
      CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar4);
    }
  }
  else {
    uVar2 = *(undefined4 *)(this + 0x140);
    uVar4 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),0xc,0,1,2);
    *(undefined4 *)(uVar4 - 1) = uVar2;
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)pFVar1;
      if (puVar3 == *(ulong **)(this + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)pFVar1 = puVar3 + 1;
      *puVar3 = uVar4;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar4);
    }
    *(double *)(*puVar3 + 3) = (double)param_1;
  }
  return;
}

