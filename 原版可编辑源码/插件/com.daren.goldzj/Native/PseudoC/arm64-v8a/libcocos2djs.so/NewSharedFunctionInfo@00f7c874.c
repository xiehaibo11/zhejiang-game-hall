
/* v8::internal::Factory::NewSharedFunctionInfo() */

ulong * __thiscall v8::internal::Factory::NewSharedFunctionInfo(Factory *this)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong local_38;
  
  uVar1 = Heap::AllocateRawWithRetryOrFailSlowPath
                    ((Heap *)(this + 0x8850),(ulong)*(byte *)(*(long *)(this + 0x118) + 3) << 2,1,1,
                     0);
  uVar3 = *(ulong *)(this + 0x118);
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
    puVar2 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar1);
    uVar1 = *puVar2;
  }
  local_38 = uVar1;
  SharedFunctionInfo::Init(&local_38,this + 0x80,0xffffffff);
  local_38 = *puVar2;
  SharedFunctionInfo::SharedFunctionInfoVerify((SharedFunctionInfo *)&local_38,(Isolate *)this);
  return puVar2;
}

