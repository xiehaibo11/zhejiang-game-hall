
/* v8::internal::compiler::SharedFunctionInfoData::SerializeScopeInfoChain(v8::internal::compiler::JSHeapBroker*)
    */

void __thiscall
v8::internal::compiler::SharedFunctionInfoData::SerializeScopeInfoChain
          (SharedFunctionInfoData *this,JSHeapBroker *param_1)

{
  uint uVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ScopeInfoData *this_00;
  ulong uVar4;
  
  if (*(long *)(this + 0x70) != 0) {
    return;
  }
  uVar1 = *(uint *)(**(ulong **)this + 7);
  pIVar2 = (Isolate *)(**(ulong **)this & 0xffffffff00000000);
  if (((uVar1 & 1) == 0) ||
     (uVar4 = (ulong)pIVar2 | (ulong)uVar1,
     *(short *)(((ulong)pIVar2 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x83)) {
    uVar4 = ScopeInfo::Empty(pIVar2);
  }
  pIVar2 = *(Isolate **)param_1;
  if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar4;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar4);
  }
  this_00 = (ScopeInfoData *)JSHeapBroker::GetOrCreateData(param_1,puVar3);
  if (*(int *)(this_00 + 8) == 1) {
    if (*(short *)(*(long *)(this_00 + 0x10) + 0x18) == 0x83) {
      *(ScopeInfoData **)(this + 0x70) = this_00;
      ScopeInfoData::SerializeScopeInfoChain(this_00,param_1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsScopeInfo()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

