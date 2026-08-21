
/* v8::internal::Factory::NewScriptContextTable() */

void __thiscall v8::internal::Factory::NewScriptContextTable(Factory *this)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(this + 0x8938);
  uVar5 = *(undefined8 *)(this + 0xa0);
  lVar1 = *(long *)(lVar4 + 0x68);
  if ((((ulong)(*(long *)(lVar4 + 0x70) - lVar1) < 0xc) || (FLAG_inline_new == '\0')) ||
     (FLAG_gc_interval != 0)) {
    uVar2 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),0xc,0,1,0);
  }
  else {
    uVar2 = lVar1 + 1;
    *(long *)(lVar4 + 0x68) = lVar1 + 0xc;
    Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar1,0xc,1,1);
  }
  *(undefined4 *)(uVar2 - 1) = *(undefined4 *)(this + 0x1a0);
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
  *(undefined4 *)(uVar2 + 3) = 2;
  *(int *)(*puVar3 + 7) = (int)uVar5;
  *(undefined4 *)(*puVar3 + 7) = 0;
  return;
}

