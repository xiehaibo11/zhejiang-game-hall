
/* v8::internal::compiler::JSHeapBroker::IsSerializedForCompilation(v8::internal::compiler::SharedFunctionInfoRef
   const&, v8::internal::compiler::FeedbackVectorRef const&) const */

bool __thiscall
v8::internal::compiler::JSHeapBroker::IsSerializedForCompilation
          (JSHeapBroker *this,SharedFunctionInfoRef *param_1,FeedbackVectorRef *param_2)

{
  JSHeapBroker *pJVar1;
  JSHeapBroker *pJVar2;
  JSHeapBroker *pJVar3;
  JSHeapBroker *pJVar4;
  ulong uVar5;
  
  if (*(int *)(this + 0x70) == 0) {
    return true;
  }
  pJVar1 = this + 0x250;
  if (*(JSHeapBroker **)(this + 0x250) != (JSHeapBroker *)0x0) {
    uVar5 = **(ulong **)param_1;
    pJVar2 = pJVar1;
    pJVar3 = *(JSHeapBroker **)(this + 0x250);
    do {
      while (**(ulong **)(pJVar3 + 0x20) < uVar5) {
        pJVar3 = *(JSHeapBroker **)(pJVar3 + 8);
joined_r0x01717818:
        if (pJVar3 == (JSHeapBroker *)0x0) goto LAB_0171782c;
      }
      if ((**(ulong **)(pJVar3 + 0x20) == uVar5) &&
         (**(ulong **)(pJVar3 + 0x30) < **(ulong **)param_2)) {
        pJVar3 = *(JSHeapBroker **)(pJVar3 + 8);
        goto joined_r0x01717818;
      }
      pJVar4 = *(JSHeapBroker **)pJVar3;
      pJVar2 = pJVar3;
      pJVar3 = pJVar4;
    } while (pJVar4 != (JSHeapBroker *)0x0);
LAB_0171782c:
    if (((pJVar2 != pJVar1) && (**(ulong **)(pJVar2 + 0x20) <= uVar5)) &&
       ((uVar5 != **(ulong **)(pJVar2 + 0x20) ||
        (**(ulong **)(pJVar2 + 0x30) <= **(ulong **)param_2)))) goto LAB_01717848;
  }
  pJVar2 = pJVar1;
LAB_01717848:
  return pJVar2 != pJVar1;
}

