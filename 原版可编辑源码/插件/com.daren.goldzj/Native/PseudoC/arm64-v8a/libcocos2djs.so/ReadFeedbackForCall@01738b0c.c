
/* v8::internal::compiler::JSHeapBroker::ReadFeedbackForCall(v8::internal::compiler::FeedbackSource
   const&) */

undefined4 * __thiscall
v8::internal::compiler::JSHeapBroker::ReadFeedbackForCall
          (JSHeapBroker *this,FeedbackSource *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  Zone *pZVar5;
  Isolate *pIVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  FeedbackVector FVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  ulong *local_a8;
  ulong local_a0;
  int local_98;
  undefined4 local_94;
  undefined7 uStack_90;
  undefined4 local_80;
  undefined3 uStack_7c;
  FeedbackVector local_78;
  undefined2 uStack_77;
  undefined4 uStack_75;
  undefined1 uStack_71;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined7 local_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_a8 = *(ulong **)param_1;
  local_98 = *(int *)(param_1 + 8);
  local_a0 = 0;
  if (local_a8 == (ulong *)0x0) {
    local_94 = 0;
  }
  else {
    uVar10 = *local_a8;
    local_78 = SUB81(uVar10,0);
    uStack_77 = (undefined2)(uVar10 >> 8);
    uStack_75 = (undefined4)(uVar10 >> 0x18);
    uStack_71 = (undefined1)(uVar10 >> 0x38);
    local_94 = FeedbackVector::GetKind(&local_78);
  }
  iVar3 = FeedbackNexus::ic_state((FeedbackNexus *)&local_a8);
  if (iVar3 == 1) {
    pZVar5 = *(Zone **)(this + 0x10);
    puVar9 = *(undefined4 **)(pZVar5 + 0x10);
    if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)puVar9) < 8) {
      puVar9 = (undefined4 *)Zone::NewExpand(pZVar5,8);
    }
    else {
      *(undefined4 **)(pZVar5 + 0x10) = puVar9 + 2;
    }
    *puVar9 = 0;
    puVar9[1] = local_94;
  }
  else {
    puVar7 = &local_a0;
    if (local_a8 != (ulong *)0x0) {
      puVar7 = local_a8;
    }
    uVar1 = *(uint *)(*puVar7 + (long)(local_98 << 2) + 0x1f);
    uVar10 = *puVar7 & 0xffffffff00000000;
    FeedbackVector::AssertNoLegacyTypes(uVar10 | uVar1);
    uVar12 = 0;
    FVar11 = (FeedbackVector)0x0;
    if ((uVar1 != 3) && ((uVar1 & 1) != 0)) {
      pIVar6 = *(Isolate **)this;
      uVar10 = uVar10 | (ulong)uVar1 & 0xfffffffffffffffd;
      if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)(pIVar6 + 0x95a0);
        if (puVar7 == *(ulong **)(pIVar6 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(pIVar6);
        }
        *(ulong **)(pIVar6 + 0x95a0) = puVar7 + 1;
        *puVar7 = uVar10;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar10);
      }
      ObjectRef::ObjectRef((ObjectRef *)&local_78,this,puVar7,0);
      puVar8 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_78);
      if (*(int *)(puVar8 + 1) == 2) {
        if ((*(byte *)*puVar8 & 1) == 0) goto LAB_01738d48;
      }
      else if (*(int *)(puVar8 + 1) == 0) {
LAB_01738d48:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsHeapObject()");
      }
      local_68 = CONCAT16(uStack_71,CONCAT42(uStack_75,uStack_77));
      uVar12 = 1;
      uStack_61 = local_70;
      uStack_60 = uStack_6f;
      FVar11 = local_78;
    }
    uVar13 = FeedbackNexus::ComputeCallFrequency((FeedbackNexus *)&local_a8);
    uVar4 = FeedbackNexus::GetSpeculationMode((FeedbackNexus *)&local_a8);
    pZVar5 = *(Zone **)(this + 0x10);
    puVar9 = *(undefined4 **)(pZVar5 + 0x10);
    if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)puVar9) < 0x28) {
      puVar9 = (undefined4 *)Zone::NewExpand(pZVar5,0x28);
    }
    else {
      *(undefined4 **)(pZVar5 + 0x10) = puVar9 + 10;
    }
    local_80 = CONCAT13((char)uStack_75,CONCAT21(uStack_77,local_78));
    uStack_7c = (undefined3)((uint)uStack_75 >> 8);
    uStack_90 = local_68;
    *puVar9 = 2;
    puVar9[1] = local_94;
    *(undefined1 *)(puVar9 + 2) = uVar12;
    *(FeedbackVector *)(puVar9 + 4) = FVar11;
    puVar9[3] = uStack_75;
    *(undefined4 *)((long)puVar9 + 9) = local_80;
    puVar9[8] = uVar13;
    puVar9[9] = uVar4;
    *(ulong *)(puVar9 + 6) = CONCAT71(uStack_60,uStack_61);
    *(ulong *)((long)puVar9 + 0x11) = CONCAT17(uStack_61,local_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return puVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

