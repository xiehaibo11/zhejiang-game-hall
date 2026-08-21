
/* v8::internal::DeserializerAllocator::AllocateRaw(v8::internal::SnapshotSpace, int) */

ulong __thiscall
v8::internal::DeserializerAllocator::AllocateRaw
          (DeserializerAllocator *this,int param_2,int param_3)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong local_28;
  
  if (param_2 == 4) {
    uVar2 = *(uint *)(this + 200);
    *(uint *)(this + 200) = uVar2 + 1;
    uVar5 = *(ulong *)(*(long *)(this + 0xd0) + (ulong)uVar2 * 8);
  }
  else if (param_2 == 5) {
    plVar1 = (long *)(*(long *)(this + 0x100) + 0xb8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    local_28 = OldLargeObjectSpace::AllocateRaw
                         (*(OldLargeObjectSpace **)(*(long *)(this + 0x100) + 0x108),param_3);
    if ((local_28 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!IsRetry()");
    }
    if (*(ulong **)(this + 0xf0) == *(ulong **)(this + 0xf8)) {
      std::__ndk1::vector<v8::internal::HeapObject,std::__ndk1::allocator<v8::internal::HeapObject>>
      ::__push_back_slow_path<v8::internal::HeapObject_const&>
                ((vector<v8::internal::HeapObject,std::__ndk1::allocator<v8::internal::HeapObject>>
                  *)(this + 0xe8),(HeapObject *)&local_28);
    }
    else {
      **(ulong **)(this + 0xf0) = local_28;
      *(long *)(this + 0xf0) = *(long *)(this + 0xf0) + 8;
    }
    uVar5 = local_28 - 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    uVar5 = *(ulong *)(this + (long)param_2 * 8 + 0xa0);
    *(ulong *)(this + (long)param_2 * 8 + 0xa0) = uVar5 + (long)param_3;
    if (param_2 == 3) {
      CodeObjectRegistry::RegisterNewlyAllocatedCodeObject
                (*(CodeObjectRegistry **)((uVar5 & 0xfffffffffffc0000) + 0x110),uVar5);
    }
  }
  return uVar5;
}

