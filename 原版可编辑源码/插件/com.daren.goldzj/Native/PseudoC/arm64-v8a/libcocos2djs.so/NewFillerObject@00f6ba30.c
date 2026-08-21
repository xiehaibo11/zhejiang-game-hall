
/* v8::internal::Factory::NewFillerObject(int, bool, v8::internal::AllocationType,
   v8::internal::AllocationOrigin) */

void __thiscall
v8::internal::Factory::NewFillerObject
          (Factory *this,uint param_1,uint param_3,uint param_4,undefined4 param_5)

{
  Heap *pHVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  
  pHVar1 = (Heap *)(this + 0x8850);
  if ((((int)param_1 < 0x20001) && ((param_4 & 0xff) == 0)) && ((param_3 & 1) == 0)) {
    lVar5 = *(long *)(this + 0x8938);
    lVar2 = *(long *)(lVar5 + 0x68);
    if ((((ulong)param_1 <= (ulong)(*(long *)(lVar5 + 0x70) - lVar2)) && (FLAG_inline_new != '\0'))
       && (FLAG_gc_interval == 0)) {
      uVar3 = lVar2 + 1;
      *(long *)(lVar5 + 0x68) = lVar2 + (int)param_1;
      Heap::CreateFillerObjectAt(pHVar1,lVar2,param_1,1,1);
      goto LAB_00f6baec;
    }
  }
  uVar3 = Heap::AllocateRawWithRetryOrFailSlowPath(pHVar1,param_1,param_4,param_5,param_3 & 1);
LAB_00f6baec:
  Heap::CreateFillerObjectAt(pHVar1,uVar3 - 1,param_1,1,1);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(this + 0x95a0);
    if (puVar4 == *(ulong **)(this + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar3;
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar3);
  }
  return;
}

