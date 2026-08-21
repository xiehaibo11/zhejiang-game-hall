
/* v8::internal::Factory::NewForeign(unsigned long) */

void __thiscall v8::internal::Factory::NewForeign(Factory *this,ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(this + 0x138);
  lVar5 = *(long *)(this + 0x8938);
  lVar1 = *(long *)(lVar5 + 0x68);
  uVar4 = (ulong)*(byte *)(lVar6 + 3) * 4;
  if ((((ulong)(*(long *)(lVar5 + 0x70) - lVar1) < uVar4) || (FLAG_inline_new == '\0')) ||
     (FLAG_gc_interval != 0)) {
    uVar2 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),uVar4,0,1,0);
  }
  else {
    uVar2 = lVar1 + 1;
    *(ulong *)(lVar5 + 0x68) = lVar1 + uVar4;
    Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar1,uVar4,1,1);
  }
  *(int *)(uVar2 - 1) = (int)lVar6;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(this + 0x95a0);
    if (puVar3 == *(ulong **)(this + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar2;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar2);
    uVar2 = *puVar3;
  }
  *(ulong *)(uVar2 + 3) = param_1;
  return;
}

