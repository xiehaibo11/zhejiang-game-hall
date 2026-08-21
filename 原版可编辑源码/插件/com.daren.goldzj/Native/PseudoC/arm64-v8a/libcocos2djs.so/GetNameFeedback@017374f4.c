
/* v8::internal::compiler::JSHeapBroker::GetNameFeedback(v8::internal::FeedbackNexus const&) */

void v8::internal::compiler::JSHeapBroker::GetNameFeedback(FeedbackNexus *param_1)

{
  ushort uVar1;
  ulong uVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  FeedbackNexus *in_x1;
  undefined1 *in_x8;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar2 = FeedbackNexus::GetName(in_x1);
  if ((int)uVar2 == 0) {
    *in_x8 = 0;
    in_x8[8] = 0;
  }
  else {
    pIVar3 = *(Isolate **)param_1;
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
    ObjectRef::ObjectRef((ObjectRef *)&local_40,param_1,puVar4,0);
    puVar5 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_40);
    if (*(int *)(puVar5 + 1) == 2) {
      uVar2 = *(ulong *)*puVar5;
      if ((uVar2 & 1) == 0) goto LAB_017375fc;
      uVar1 = *(ushort *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1));
    }
    else {
      if (*(int *)(puVar5 + 1) == 0) goto LAB_017375fc;
      uVar1 = *(ushort *)(puVar5[2] + 0x18);
    }
    if (0x40 < uVar1) {
LAB_017375fc:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsName()");
    }
    *in_x8 = 1;
    *(undefined8 *)(in_x8 + 0x10) = uStack_38;
    *(undefined8 *)(in_x8 + 8) = local_40;
  }
  return;
}

