
/* v8::internal::MarkCompactCollector::MarkDependentCodeForDeoptimization() */

void __thiscall
v8::internal::MarkCompactCollector::MarkDependentCodeForDeoptimization(MarkCompactCollector *this)

{
  ulong uVar1;
  ulong local_48;
  ulong local_40;
  ulong uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar1 = Worklist<std::__ndk1::pair<v8::internal::HeapObject,v8::internal::Code>,64>::Pop
                    ((Worklist<std::__ndk1::pair<v8::internal::HeapObject,v8::internal::Code>,64> *)
                     (this + 0x18d0),0,(pair *)&local_40);
  local_48 = uStack_38;
  while ((uVar1 & 1) != 0) {
    uVar1 = local_40 - (local_40 & 0xfffffffffffc0000);
    uStack_38 = local_48;
    if (((*(uint *)(*(long *)((local_40 & 0xfffffffffffc0000) + 0x10) + (uVar1 >> 7 & 0x1ffffff) * 4
                   ) >> (ulong)((uint)(uVar1 >> 2) & 0x1f) & 1) == 0) &&
       ((*(uint *)((local_48 & 0xffffffff00000000 | (ulong)*(uint *)(local_48 + 0xf)) + 7) >> 1 & 1)
        == 0)) {
      if ((*(uint *)((local_48 & 0xffffffff00000000 | (ulong)*(uint *)(local_48 + 0xf)) + 7) & 1) ==
          0) {
        Code::SetMarkedForDeoptimization((Code *)&local_48,"weak objects");
        this[0x50] = (MarkCompactCollector)0x1;
      }
      Code::ClearEmbeddedObjects((Code *)&local_48,*(Heap **)(this + 8));
    }
    uVar1 = Worklist<std::__ndk1::pair<v8::internal::HeapObject,v8::internal::Code>,64>::Pop
                      ((Worklist<std::__ndk1::pair<v8::internal::HeapObject,v8::internal::Code>,64>
                        *)(this + 0x18d0),0,(pair *)&local_40);
    local_48 = uStack_38;
  }
  return;
}

