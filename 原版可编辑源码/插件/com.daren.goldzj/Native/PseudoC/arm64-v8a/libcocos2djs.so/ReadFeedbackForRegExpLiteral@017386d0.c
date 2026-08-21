
/* v8::internal::compiler::JSHeapBroker::ReadFeedbackForRegExpLiteral(v8::internal::compiler::FeedbackSource
   const&) */

void __thiscall
v8::internal::compiler::JSHeapBroker::ReadFeedbackForRegExpLiteral
          (JSHeapBroker *this,FeedbackSource *param_1)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  JSRegExpData *this_00;
  undefined4 *puVar7;
  Zone *pZVar8;
  ulong uVar9;
  ulong local_58;
  JSHeapBroker *local_50;
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
    local_58 = *local_48;
    local_34 = FeedbackVector::GetKind((FeedbackVector *)&local_58);
  }
  iVar3 = FeedbackNexus::ic_state((FeedbackNexus *)&local_48);
  if (iVar3 == 1) {
LAB_01738728:
    pZVar8 = *(Zone **)(this + 0x10);
    puVar7 = *(undefined4 **)(pZVar8 + 0x10);
    if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)puVar7) < 8) {
      puVar7 = (undefined4 *)Zone::NewExpand(pZVar8,8);
    }
    else {
      *(undefined4 **)(pZVar8 + 0x10) = puVar7 + 2;
    }
    *puVar7 = 0;
    puVar7[1] = local_34;
    return;
  }
  puVar5 = &local_40;
  if (local_48 != (ulong *)0x0) {
    puVar5 = local_48;
  }
  uVar1 = *(uint *)(*puVar5 + (long)(local_38 << 2) + 0x1f);
  uVar9 = *puVar5 & 0xffffffff00000000;
  FeedbackVector::AssertNoLegacyTypes(uVar9 | uVar1);
  if ((uVar1 == 3) || ((uVar1 & 1) == 0)) goto LAB_01738728;
  pIVar4 = *(Isolate **)this;
  uVar9 = uVar9 | (ulong)uVar1 & 0xfffffffffffffffd;
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar9;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar9);
  }
  ObjectRef::ObjectRef((ObjectRef *)&local_58,this,puVar5,0);
  puVar6 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_58);
  if (*(int *)(puVar6 + 1) == 2) {
    uVar9 = *(ulong *)*puVar6;
    if ((uVar9 & 1) == 0) goto LAB_017388e4;
    sVar2 = *(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1));
  }
  else {
    if (*(int *)(puVar6 + 1) == 0) goto LAB_017388e4;
    sVar2 = *(short *)(puVar6[2] + 0x18);
  }
  if (sVar2 == 0x42e) {
    if (*(int *)(local_50 + 0x70) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","broker()->mode() == JSHeapBroker::kSerializing");
    }
    this_00 = (JSRegExpData *)ObjectRef::data((ObjectRef *)&local_58);
    if (*(int *)(this_00 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(this_00 + 0x10) + 0x18) == 0x42e) {
      JSRegExpData::SerializeAsRegExpBoilerplate(this_00,local_50);
      pZVar8 = *(Zone **)(this + 0x10);
      puVar7 = *(undefined4 **)(pZVar8 + 0x10);
      if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)puVar7) < 0x18) {
        puVar7 = (undefined4 *)Zone::NewExpand(pZVar8,0x18);
      }
      else {
        *(undefined4 **)(pZVar8 + 0x10) = puVar7 + 6;
      }
      *puVar7 = 10;
      puVar7[1] = local_34;
      *(ulong *)(puVar7 + 2) = local_58;
      *(JSHeapBroker **)(puVar7 + 4) = local_50;
      return;
    }
  }
LAB_017388e4:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsJSRegExp()");
}

