
/* v8::internal::Runtime_ElementsTransitionAndStoreIC_Miss(int, unsigned long*,
   v8::internal::Isolate*) */

ulong v8::internal::Runtime_ElementsTransitionAndStoreIC_Miss
                (int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ushort uVar3;
  int iVar4;
  Isolate *pIVar5;
  ulong uVar6;
  ulong local_b0 [11];
  undefined1 local_54 [4];
  
  if (TracingFlags::runtime_stats != 0) {
    uVar6 = FUN_01506c68(param_1,param_2,param_3);
    return uVar6;
  }
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  local_b0[0] = param_2[-5];
  pIVar5 = (Isolate *)(param_2 + -2);
  iVar4 = FeedbackVector::GetKind((FeedbackVector *)local_b0,(int)param_2[-4] >> 1);
  uVar6 = *param_2;
  if (((uVar6 & 1) != 0) &&
     (0xa9 < *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)))) {
    JSObject::TransitionElementsKind(param_2,*(byte *)(param_2[-3] + 10) >> 3);
  }
  if (iVar4 == 0xe) {
    local_54[0] = 0;
    LookupIterator::PropertyOrElement
              ((LookupIterator *)local_b0,param_3,param_2,param_2 + -1,local_54,1);
    uVar3 = JSObject::DefineOwnPropertyIgnoreAttributes(local_b0,pIVar5,0,1,1);
    if ((uVar3 & 0xff) == 0) {
      v8::V8::FromJustIsNothing();
    }
    if (uVar3 < 0x100) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "JSObject::DefineOwnPropertyIgnoreAttributes( &it, value, NONE, Just(ShouldThrow::kThrowOnError)) .FromJust()"
              );
    }
  }
  else {
    pIVar5 = (Isolate *)Runtime::SetObjectProperty(param_3,param_2,param_2 + -1,pIVar5,0,0);
    if (pIVar5 == (Isolate *)0x0) {
      pIVar5 = param_3 + 0x180;
    }
  }
  uVar6 = *(ulong *)pIVar5;
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar6;
}

