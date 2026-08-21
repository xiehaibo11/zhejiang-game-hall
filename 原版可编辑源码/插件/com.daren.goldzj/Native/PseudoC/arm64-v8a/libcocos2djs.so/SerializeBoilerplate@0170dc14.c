
/* v8::internal::compiler::AllocationSiteData::SerializeBoilerplate(v8::internal::compiler::JSHeapBroker*)
    */

void __thiscall
v8::internal::compiler::AllocationSiteData::SerializeBoilerplate
          (AllocationSiteData *this,JSHeapBroker *param_1)

{
  int iVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  JSObjectData *this_00;
  AllocationSiteData *this_01;
  ulong uVar4;
  ulong *puVar5;
  long local_28;
  
  if (this[0x3a] == (AllocationSiteData)0x0) {
    this[0x3a] = (AllocationSiteData)0x1;
    TraceScope::TraceScope
              ((TraceScope *)&local_28,param_1,this,"AllocationSiteData::SerializeBoilerplate");
    if (this[0x28] != (AllocationSiteData)0x1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsFastLiteral_");
    }
    puVar5 = *(ulong **)this;
    pIVar2 = *(Isolate **)param_1;
    uVar4 = *puVar5;
    uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 3);
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
    this_00 = (JSObjectData *)JSHeapBroker::GetOrCreateData(param_1,puVar3);
    if (*(int *)(this_00 + 8) != 1) {
LAB_0170ddd8:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(ushort *)(*(long *)(this_00 + 0x10) + 0x18) < 0xaa) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsJSObject()");
    }
    *(JSObjectData **)(this + 0x30) = this_00;
    JSObjectData::SerializeRecursiveAsBoilerplate(this_00,param_1,3);
    uVar4 = *puVar5;
    pIVar2 = *(Isolate **)param_1;
    uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 7);
    if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar4;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar4);
    }
    this_01 = (AllocationSiteData *)JSHeapBroker::GetOrCreateData(param_1,puVar5);
    *(AllocationSiteData **)(this + 0x20) = this_01;
    iVar1 = *(int *)(this_01 + 8);
    if (iVar1 != 0) {
      if (iVar1 == 2) {
        uVar4 = **(ulong **)this_01;
        if (((uVar4 & 1) != 0) &&
           (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x55))
        goto LAB_0170ddd8;
      }
      else if (*(short *)(*(long *)(this_01 + 0x10) + 0x18) == 0x55) {
        if (iVar1 != 1) goto LAB_0170ddd8;
        SerializeBoilerplate(this_01,param_1);
      }
    }
    *(int *)(local_28 + 0x170) = *(int *)(local_28 + 0x170) + -1;
  }
  return;
}

