
/* v8::internal::compiler::JSHeapBroker::ReadFeedbackForArrayOrObjectLiteral(v8::internal::compiler::FeedbackSource
   const&) */

void __thiscall
v8::internal::compiler::JSHeapBroker::ReadFeedbackForArrayOrObjectLiteral
          (JSHeapBroker *this,FeedbackSource *param_1)

{
  uint uVar1;
  short sVar2;
  JSHeapBroker *pJVar3;
  int iVar4;
  Isolate *pIVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  AllocationSiteData *this_00;
  undefined4 *puVar8;
  Zone *pZVar9;
  ulong uVar10;
  ulong local_60;
  JSHeapBroker *pJStack_58;
  ulong *local_48;
  ulong local_40;
  int local_38;
  undefined4 local_34;
  
  local_48 = *(ulong **)param_1;
  local_38 = *(int *)(param_1 + 8);
  local_40 = 0;
  if (local_48 == (ulong *)0x0) {
    local_34 = 0;
  }
  else {
    local_60 = *local_48;
    local_34 = FeedbackVector::GetKind((FeedbackVector *)&local_60);
  }
  iVar4 = FeedbackNexus::ic_state((FeedbackNexus *)&local_48);
  if (iVar4 == 1) {
LAB_017384cc:
    pZVar9 = *(Zone **)(this + 0x10);
    puVar8 = *(undefined4 **)(pZVar9 + 0x10);
    if ((ulong)(*(long *)(pZVar9 + 0x18) - (long)puVar8) < 8) {
      puVar8 = (undefined4 *)Zone::NewExpand(pZVar9,8);
    }
    else {
      *(undefined4 **)(pZVar9 + 0x10) = puVar8 + 2;
    }
    *puVar8 = 0;
    puVar8[1] = local_34;
    return;
  }
  puVar6 = &local_40;
  if (local_48 != (ulong *)0x0) {
    puVar6 = local_48;
  }
  uVar1 = *(uint *)(*puVar6 + (long)(local_38 << 2) + 0x1f);
  uVar10 = *puVar6 & 0xffffffff00000000;
  FeedbackVector::AssertNoLegacyTypes(uVar10 | uVar1);
  if ((uVar1 == 3) || ((uVar1 & 1) == 0)) goto LAB_017384cc;
  pIVar5 = *(Isolate **)this;
  uVar10 = uVar10 | (ulong)uVar1 & 0xfffffffffffffffd;
  if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar5 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar5 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar5);
    }
    *(ulong **)(pIVar5 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar10;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar10);
  }
  ObjectRef::ObjectRef((ObjectRef *)&local_60,this,puVar6,0);
  puVar7 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_60);
  if (*(int *)(puVar7 + 1) == 2) {
    uVar10 = *(ulong *)*puVar7;
    if ((uVar10 & 1) == 0) goto LAB_01738694;
    sVar2 = *(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1));
  }
  else {
    if (*(int *)(puVar7 + 1) == 0) goto LAB_01738694;
    sVar2 = *(short *)(puVar7[2] + 0x18);
  }
  if (sVar2 == 0x55) {
    uVar10 = AllocationSiteRef::IsFastLiteral((AllocationSiteRef *)&local_60);
    pJVar3 = pJStack_58;
    if ((uVar10 & 1) != 0) {
      if (*(int *)(pJStack_58 + 0x70) != 1) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","broker()->mode() == JSHeapBroker::kSerializing");
      }
      this_00 = (AllocationSiteData *)ObjectRef::data((ObjectRef *)&local_60);
      if (*(int *)(this_00 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
      }
      if (*(short *)(*(long *)(this_00 + 0x10) + 0x18) != 0x55) goto LAB_01738694;
      AllocationSiteData::SerializeBoilerplate(this_00,pJVar3);
    }
    pZVar9 = *(Zone **)(this + 0x10);
    puVar8 = *(undefined4 **)(pZVar9 + 0x10);
    if ((ulong)(*(long *)(pZVar9 + 0x18) - (long)puVar8) < 0x18) {
      puVar8 = (undefined4 *)Zone::NewExpand(pZVar9,0x18);
    }
    else {
      *(undefined4 **)(pZVar9 + 0x10) = puVar8 + 6;
    }
    *puVar8 = 8;
    puVar8[1] = local_34;
    *(JSHeapBroker **)(puVar8 + 4) = pJStack_58;
    *(ulong *)(puVar8 + 2) = local_60;
    return;
  }
LAB_01738694:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsAllocationSite()");
}

