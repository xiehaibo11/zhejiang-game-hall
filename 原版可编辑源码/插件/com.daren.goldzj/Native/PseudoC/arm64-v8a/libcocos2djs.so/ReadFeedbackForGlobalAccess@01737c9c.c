
/* v8::internal::compiler::JSHeapBroker::ReadFeedbackForGlobalAccess(v8::internal::compiler::FeedbackSource
   const&) */

void __thiscall
v8::internal::compiler::JSHeapBroker::ReadFeedbackForGlobalAccess
          (JSHeapBroker *this,FeedbackSource *param_1)

{
  uint uVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  Isolate *pIVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  undefined4 *puVar10;
  Zone *pZVar11;
  ulong uVar12;
  ulong uVar13;
  ulong local_a0;
  undefined8 uStack_98;
  ulong local_80;
  undefined8 uStack_78;
  ulong *local_68;
  ulong local_60;
  int local_58;
  undefined4 local_54;
  
  local_68 = *(ulong **)param_1;
  local_58 = *(int *)(param_1 + 8);
  local_60 = 0;
  if (local_68 == (ulong *)0x0) {
    local_54 = 0;
  }
  else {
    local_a0 = *local_68;
    local_54 = FeedbackVector::GetKind((FeedbackVector *)&local_a0);
  }
  iVar5 = FeedbackNexus::ic_state((FeedbackNexus *)&local_68);
  if (iVar5 == 1) {
    pZVar11 = *(Zone **)(this + 0x10);
    puVar10 = *(undefined4 **)(pZVar11 + 0x10);
    if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)puVar10) < 8) {
      puVar10 = (undefined4 *)Zone::NewExpand(pZVar11,8);
    }
    else {
      *(undefined4 **)(pZVar11 + 0x10) = puVar10 + 2;
    }
    *puVar10 = 0;
    puVar10[1] = local_54;
    return;
  }
  iVar5 = FeedbackNexus::ic_state((FeedbackNexus *)&local_68);
  if (iVar5 == 2) {
    puVar7 = &local_60;
    if (local_68 != (ulong *)0x0) {
      puVar7 = local_68;
    }
    uVar1 = *(uint *)(*puVar7 + (long)(local_58 << 2) + 0x1f);
    FeedbackVector::AssertNoLegacyTypes(*puVar7 & 0xffffffff00000000 | (ulong)uVar1);
    if (uVar1 != 3) {
      puVar7 = &local_60;
      if (local_68 != (ulong *)0x0) {
        puVar7 = local_68;
      }
      uVar1 = *(uint *)(*puVar7 + (long)(local_58 << 2) + 0x1f);
      uVar12 = *puVar7 & 0xffffffff00000000;
      uVar13 = uVar12 | uVar1;
      FeedbackVector::AssertNoLegacyTypes(uVar13);
      pIVar6 = *(Isolate **)this;
      if ((uVar1 & 1) != 0) {
        uVar13 = uVar12 | (ulong)uVar1 & 0xfffffffffffffffd;
      }
      if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)(pIVar6 + 0x95a0);
        if (puVar7 == *(ulong **)(pIVar6 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(pIVar6);
        }
        *(ulong **)(pIVar6 + 0x95a0) = puVar7 + 1;
        *puVar7 = uVar13;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar13);
        uVar13 = *puVar7;
      }
      if ((uVar13 & 1) == 0) {
        if (this[0x18] != (JSHeapBroker)0x1) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","storage_.is_populated_",puVar7);
        }
        pIVar6 = *(Isolate **)this;
        uStack_98 = *(undefined8 *)(this + 0x28);
        local_a0 = *(ulong *)(this + 0x20);
        uVar1 = (int)uVar13 >> 1;
        uVar4 = uVar1 >> 0xc & 0x3ffff;
        puVar8 = (undefined8 *)NativeContextRef::script_context_table((NativeContextRef *)&local_a0)
        ;
        uVar12 = *(ulong *)*puVar8 & 0xffffffff00000000 |
                 (ulong)*(uint *)((ulong)((uVar1 & 0xfff) << 2) + *(ulong *)*puVar8 + 0xb);
        if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar7 = *(ulong **)(pIVar6 + 0x95a0);
          if (puVar7 == *(ulong **)(pIVar6 + 0x95a8)) {
            puVar7 = (ulong *)HandleScope::Extend(pIVar6);
          }
          *(ulong **)(pIVar6 + 0x95a0) = puVar7 + 1;
          *puVar7 = uVar12;
        }
        else {
          puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar12);
        }
        pIVar6 = *(Isolate **)this;
        uVar12 = *puVar7 & 0xffffffff00000000 | (ulong)*(uint *)((ulong)(uVar4 << 2) + *puVar7 + 7);
        if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar9 = *(ulong **)(pIVar6 + 0x95a0);
          if (puVar9 == *(ulong **)(pIVar6 + 0x95a8)) {
            puVar9 = (ulong *)HandleScope::Extend(pIVar6);
          }
          *(ulong **)(pIVar6 + 0x95a0) = puVar9 + 1;
          *puVar9 = uVar12;
        }
        else {
          puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar12);
        }
        ObjectRef::ObjectRef((ObjectRef *)&local_a0,this,puVar9,0);
        ObjectRef::ObjectRef((ObjectRef *)&local_80,this,*(long *)this + 0xa8,0);
        if (local_a0 == local_80) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.",
                   "!contents.equals( ObjectRef(this, isolate()->factory()->the_hole_value()))");
        }
        ObjectRef::ObjectRef((ObjectRef *)&local_80,this,puVar7,0);
        puVar8 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_80);
        if (*(int *)(puVar8 + 1) == 2) {
          uVar12 = *(ulong *)*puVar8;
          if ((uVar12 & 1) == 0) goto LAB_01738148;
          uVar3 = *(ushort *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1));
        }
        else {
          if (*(int *)(puVar8 + 1) == 0) goto LAB_01738148;
          uVar3 = *(ushort *)(puVar8[2] + 0x18);
        }
        if (uVar3 - 0x88 < 10) {
          if ((int)uVar13 < 0) {
            ContextRef::get(&local_a0,&local_80,uVar4,1);
          }
          pZVar11 = *(Zone **)(this + 0x10);
          puVar10 = *(undefined4 **)(pZVar11 + 0x10);
          if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)puVar10) < 0x28) {
            puVar10 = (undefined4 *)Zone::NewExpand(pZVar11,0x28);
          }
          else {
            *(undefined4 **)(pZVar11 + 0x10) = puVar10 + 10;
          }
          *(undefined1 *)(puVar10 + 2) = 1;
          *puVar10 = 6;
          puVar10[1] = local_54;
          *(undefined8 *)(puVar10 + 6) = uStack_78;
          *(ulong *)(puVar10 + 4) = local_80;
          puVar10[8] = (uint)(uVar13 >> 1) & 0x40000000 | uVar4 << 0xc;
          return;
        }
LAB_01738148:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsContext()");
      }
      if (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0xa5) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","feedback_value->IsPropertyCell()",puVar7);
      }
      ObjectRef::ObjectRef((ObjectRef *)&local_a0,this,puVar7,0);
      puVar8 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_a0);
      if (*(int *)(puVar8 + 1) == 2) {
        uVar13 = *(ulong *)*puVar8;
        if ((uVar13 & 1) == 0) goto LAB_01738134;
        sVar2 = *(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1));
      }
      else {
        if (*(int *)(puVar8 + 1) == 0) goto LAB_01738134;
        sVar2 = *(short *)(puVar8[2] + 0x18);
      }
      if (sVar2 != 0xa5) {
LAB_01738134:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsPropertyCell()");
      }
      PropertyCellRef::Serialize((PropertyCellRef *)&local_a0);
      pZVar11 = *(Zone **)(this + 0x10);
      puVar10 = *(undefined4 **)(pZVar11 + 0x10);
      if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)puVar10) < 0x28) {
        puVar10 = (undefined4 *)Zone::NewExpand(pZVar11,0x28);
      }
      else {
        *(undefined4 **)(pZVar11 + 0x10) = puVar10 + 10;
      }
      *(undefined1 *)(puVar10 + 2) = 1;
      *puVar10 = 6;
      puVar10[1] = local_54;
      *(undefined8 *)(puVar10 + 6) = uStack_98;
      *(ulong *)(puVar10 + 4) = local_a0;
      goto LAB_01737da0;
    }
  }
  pZVar11 = *(Zone **)(this + 0x10);
  puVar10 = *(undefined4 **)(pZVar11 + 0x10);
  if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)puVar10) < 0x28) {
    puVar10 = (undefined4 *)Zone::NewExpand(pZVar11,0x28);
  }
  else {
    *(undefined4 **)(pZVar11 + 0x10) = puVar10 + 10;
  }
  *(undefined1 *)(puVar10 + 2) = 0;
  *(undefined1 *)(puVar10 + 4) = 0;
  *puVar10 = 6;
  puVar10[1] = local_54;
LAB_01737da0:
  puVar10[8] = 0;
  return;
}

