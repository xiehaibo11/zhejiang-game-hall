
/* v8::internal::GlobalObjectsEnumerator::VisitRootPointers(v8::internal::Root, char const*,
   v8::internal::FullObjectSlot, v8::internal::FullObjectSlot) */

void __thiscall
v8::internal::GlobalObjectsEnumerator::VisitRootPointers
          (GlobalObjectsEnumerator *this,undefined8 param_2,undefined8 param_3,ulong *param_4,
          ulong *param_5)

{
  uint uVar1;
  ulong uVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong *local_58;
  
  if (param_4 < param_5) {
    local_58 = (ulong *)*param_4;
    while( true ) {
      if ((((ulong)local_58 & 1) != 0) &&
         (*(short *)(((ulong)local_58 & 0xffffffff00000000 | 7) +
                    (ulong)*(uint *)((long)local_58 - 1)) == 0x8f)) {
        uVar2 = Context::global_proxy((Context *)&local_58);
        pIVar3 = (Isolate *)(uVar2 & 0xffffffff00000000);
        if ((*(short *)(((ulong)pIVar3 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0xab) &&
           ((uVar1 = *(uint *)(((ulong)pIVar3 | (ulong)*(uint *)(uVar2 - 1)) + 0xf),
            (uVar1 & 1) != 0 &&
            (uVar2 = (ulong)pIVar3 | (ulong)uVar1,
            *(short *)(((ulong)pIVar3 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0xaa)))) {
          if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar4 = *(ulong **)(pIVar3 + 0x95a0);
            if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
              puVar4 = (ulong *)HandleScope::Extend(pIVar3);
            }
            *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
            *puVar4 = uVar2;
          }
          else {
            puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar2);
          }
          if (*(long **)(this + 0x10) < *(long **)(this + 0x18)) {
            **(long **)(this + 0x10) = (long)puVar4;
            *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
          }
          else {
            local_58 = puVar4;
            std::__ndk1::
            vector<v8::internal::Handle<v8::internal::JSGlobalObject>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::JSGlobalObject>>>
            ::__push_back_slow_path<v8::internal::Handle<v8::internal::JSGlobalObject>>
                      ((vector<v8::internal::Handle<v8::internal::JSGlobalObject>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::JSGlobalObject>>>
                        *)(this + 8),(Handle *)&local_58);
          }
        }
      }
      param_4 = param_4 + 1;
      if (param_5 <= param_4) break;
      local_58 = (ulong *)*param_4;
    }
  }
  return;
}

