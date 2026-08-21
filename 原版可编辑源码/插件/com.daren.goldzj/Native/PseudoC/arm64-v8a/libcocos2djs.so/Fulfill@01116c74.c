
/* v8::internal::JSPromise::Fulfill(v8::internal::Handle<v8::internal::JSPromise>,
   v8::internal::Handle<v8::internal::Object>) */

void v8::internal::JSPromise::Fulfill(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  Isolate *pIVar4;
  ulong uVar5;
  
  uVar2 = *param_1;
  if ((*(byte *)(uVar2 + 0xf) & 6) == 0) {
    pIVar4 = (Isolate *)(uVar2 & 0xffffffff00000000);
    uVar2 = (ulong)pIVar4 | (ulong)*(uint *)(uVar2 + 0xb);
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar1 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar1 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar2;
    }
    else {
      puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar2);
    }
    uVar5 = *param_1;
    uVar2 = *param_2;
    *(int *)(uVar5 + 0xb) = (int)uVar2;
    if ((uVar2 & 1) != 0) {
      uVar3 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar3 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar5,uVar5 + 0xb,uVar2);
        uVar3 = *(ulong *)(uVar2 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0xb,uVar2);
      }
    }
    *(uint *)(*param_1 + 0xf) = *(uint *)(*param_1 + 0xf) & 0xfffffff8 | 2;
    TriggerPromiseReactions(pIVar4,puVar1,param_2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","Promise::kPending == promise->status()");
}

