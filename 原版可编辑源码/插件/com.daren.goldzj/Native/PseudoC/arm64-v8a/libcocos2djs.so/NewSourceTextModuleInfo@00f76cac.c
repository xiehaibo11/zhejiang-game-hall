
/* v8::internal::Factory::NewSourceTextModuleInfo() */

void __thiscall v8::internal::Factory::NewSourceTextModuleInfo(Factory *this)

{
  ulong uVar1;
  ulong *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(this + 0xa0);
  uVar1 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),0x20,1,1,0);
  *(undefined4 *)(uVar1 - 1) = *(undefined4 *)(this + 0x200);
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
    uVar1 = *puVar2;
  }
  *(undefined4 *)(uVar1 + 3) = 0xc;
  uVar1 = *puVar2;
  uVar3 = (undefined4)uVar4;
  *(ulong *)(uVar1 + 0xf) = CONCAT44(uVar3,uVar3);
  *(ulong *)(uVar1 + 7) = CONCAT44(uVar3,uVar3);
  *(undefined4 *)(uVar1 + 0x17) = uVar3;
  *(undefined4 *)(uVar1 + 0x1b) = uVar3;
  return;
}

