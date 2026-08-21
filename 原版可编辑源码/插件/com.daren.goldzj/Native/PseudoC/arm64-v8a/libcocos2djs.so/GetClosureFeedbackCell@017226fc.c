
/* v8::internal::compiler::FeedbackVectorRef::GetClosureFeedbackCell(int) const */

undefined1  [16] __thiscall
v8::internal::compiler::FeedbackVectorRef::GetClosureFeedbackCell
          (FeedbackVectorRef *this,int param_1)

{
  undefined8 uVar1;
  short sVar2;
  undefined1 auVar3 [16];
  Isolate *pIVar4;
  ulong *puVar5;
  FeedbackVectorData *this_00;
  undefined8 *puVar6;
  ulong uVar7;
  long local_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(this + 8);
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar7 = *(ulong *)**(undefined8 **)this;
    pIVar4 = (Isolate *)(uVar7 & 0xffffffff00000000);
    uVar7 = (ulong)pIVar4 |
            (ulong)*(uint *)(((ulong)pIVar4 | (ulong)*(uint *)(uVar7 + 0xb)) + (long)(param_1 << 2)
                            + 7);
    if (*(CanonicalHandleScope **)((ulong)pIVar4 | 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar7;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)((ulong)pIVar4 | 0x95b8),uVar7);
    }
    ObjectRef::ObjectRef((ObjectRef *)&local_40,uVar1,puVar5,0);
  }
  else {
    this_00 = (FeedbackVectorData *)ObjectRef::data((ObjectRef *)this);
    if (*(int *)(this_00 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(this_00 + 0x10) + 0x18) != 0x9f) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsFeedbackVector()");
    }
    local_40 = FeedbackVectorData::GetClosureFeedbackCell
                         (this_00,*(JSHeapBroker **)(this + 8),param_1);
    uStack_38 = uVar1;
    if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(data_) != nullptr");
    }
  }
  puVar6 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_40);
  if (*(int *)(puVar6 + 1) == 2) {
    uVar7 = *(ulong *)*puVar6;
    if ((uVar7 & 1) == 0) goto LAB_01722858;
    sVar2 = *(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1));
  }
  else {
    if (*(int *)(puVar6 + 1) == 0) goto LAB_01722858;
    sVar2 = *(short *)(puVar6[2] + 0x18);
  }
  if (sVar2 == 0x5d) {
    auVar3._8_8_ = uStack_38;
    auVar3._0_8_ = local_40;
    return auVar3;
  }
LAB_01722858:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsFeedbackCell()");
}

