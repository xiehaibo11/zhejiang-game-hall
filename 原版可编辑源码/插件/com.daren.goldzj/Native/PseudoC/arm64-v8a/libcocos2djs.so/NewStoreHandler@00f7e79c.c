
/* v8::internal::Factory::NewStoreHandler(int) */

void __thiscall v8::internal::Factory::NewStoreHandler(Factory *this,int param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if ((uint)param_1 < 4) {
    uVar1 = Heap::AllocateRawWithRetryOrFailSlowPath
                      ((Heap *)(this + 0x8850),
                       (ulong)*(byte *)(*(long *)(this + (ulong)(uint)param_1 * 8 + 0xdf8) + 3) << 2
                       ,1,1,0);
    uVar3 = *(ulong *)(this + (ulong)(uint)param_1 * 8 + 0xdf8);
    *(int *)(uVar1 - 1) = (int)uVar3;
    if (((uVar3 & 1) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
      Heap_MarkingBarrierSlow(uVar1,0);
    }
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(this + 0x95a0);
      if (puVar2 == *(ulong **)(this + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)(this + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar1;
    }
    else {
      CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

