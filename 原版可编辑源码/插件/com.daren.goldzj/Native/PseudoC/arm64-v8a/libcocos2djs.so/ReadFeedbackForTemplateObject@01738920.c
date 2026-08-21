
/* v8::internal::compiler::JSHeapBroker::ReadFeedbackForTemplateObject(v8::internal::compiler::FeedbackSource
   const&) */

void __thiscall
v8::internal::compiler::JSHeapBroker::ReadFeedbackForTemplateObject
          (JSHeapBroker *this,FeedbackSource *param_1)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  Zone *pZVar8;
  ulong uVar9;
  ulong local_60;
  undefined8 uStack_58;
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
  iVar3 = FeedbackNexus::ic_state((FeedbackNexus *)&local_48);
  if (iVar3 == 1) {
LAB_01738978:
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
  if ((uVar1 == 3) || ((uVar1 & 1) == 0)) goto LAB_01738978;
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
  ObjectRef::ObjectRef((ObjectRef *)&local_60,this,puVar5,0);
  puVar6 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_60);
  if (*(int *)(puVar6 + 1) == 2) {
    uVar9 = *(ulong *)*puVar6;
    if ((uVar9 & 1) == 0) goto LAB_01738af8;
    sVar2 = *(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1));
  }
  else {
    if (*(int *)(puVar6 + 1) == 0) goto LAB_01738af8;
    sVar2 = *(short *)(puVar6[2] + 0x18);
  }
  if (sVar2 == 0x423) {
    pZVar8 = *(Zone **)(this + 0x10);
    puVar7 = *(undefined4 **)(pZVar8 + 0x10);
    if ((ulong)(*(long *)(pZVar8 + 0x18) - (long)puVar7) < 0x18) {
      puVar7 = (undefined4 *)Zone::NewExpand(pZVar8,0x18);
    }
    else {
      *(undefined4 **)(pZVar8 + 0x10) = puVar7 + 6;
    }
    *puVar7 = 0xb;
    puVar7[1] = local_34;
    *(undefined8 *)(puVar7 + 4) = uStack_58;
    *(ulong *)(puVar7 + 2) = local_60;
    return;
  }
LAB_01738af8:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsJSArray()");
}

