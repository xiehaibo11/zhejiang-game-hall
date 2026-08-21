
/* v8::internal::Factory::NewHeapNumberForCodeAssembler(double) */

void __thiscall v8::internal::Factory::NewHeapNumberForCodeAssembler(Factory *this,double param_1)

{
  ulong uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0x140);
  if (*(char *)(*(long *)(this + 0x8970) + 0xe8) == '\0') {
    uVar3 = 4;
  }
  else {
    uVar3 = 1;
  }
  uVar1 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),0xc,uVar3,1,2);
  *(int *)(uVar1 - 1) = (int)uVar4;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(this + 0x95a0);
    if (puVar2 == *(ulong **)(this + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar1;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar1);
  }
  *(double *)(*puVar2 + 3) = param_1;
  return;
}

