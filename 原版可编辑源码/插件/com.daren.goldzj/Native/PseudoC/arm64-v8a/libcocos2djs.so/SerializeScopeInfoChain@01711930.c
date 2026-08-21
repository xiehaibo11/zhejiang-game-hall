
/* v8::internal::compiler::ScopeInfoData::SerializeScopeInfoChain(v8::internal::compiler::JSHeapBroker*)
    */

void __thiscall
v8::internal::compiler::ScopeInfoData::SerializeScopeInfoChain
          (ScopeInfoData *this,JSHeapBroker *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ScopeInfoData *this_00;
  Isolate *pIVar3;
  undefined8 local_38;
  
  if ((*(long *)(this + 0x28) == 0) && (this[0x1c] != (ScopeInfoData)0x0)) {
    local_38 = **(undefined8 **)this;
    uVar1 = ScopeInfo::OuterScopeInfo((ScopeInfo *)&local_38);
    pIVar3 = *(Isolate **)param_1;
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar1;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar1);
    }
    this_00 = (ScopeInfoData *)JSHeapBroker::GetOrCreateData(param_1,puVar2);
    if (*(int *)(this_00 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(this_00 + 0x10) + 0x18) != 0x83) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsScopeInfo()");
    }
    *(ScopeInfoData **)(this + 0x28) = this_00;
    SerializeScopeInfoChain(this_00,param_1);
  }
  return;
}

