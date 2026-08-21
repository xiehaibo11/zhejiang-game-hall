
/* v8::internal::Runtime_StoreDataPropertyInLiteral(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_StoreDataPropertyInLiteral(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  LookupIterator aLStack_98 [88];
  undefined1 auStack_24 [4];
  
  if (TracingFlags::runtime_stats != 0) {
    uVar3 = FUN_011cd18c(param_1,param_2,param_3);
    return uVar3;
  }
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar3 = *param_2;
  if (((uVar3 & 1) != 0) &&
     (0xa8 < *(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)))) {
    LookupIterator::PropertyOrElement(aLStack_98,param_3,param_2,param_2 + -1,auStack_24,1);
    JSObject::DefineOwnPropertyIgnoreAttributes(aLStack_98,param_2 + -2,0,0x100000001,1);
    if (*(int *)(param_3 + 0x2c20) == *(int *)(param_3 + 0xa8)) {
      uVar3 = param_2[-2];
    }
    else {
      uVar3 = Isolate::PromoteScheduledException(param_3);
    }
    *(undefined8 *)(param_3 + 0x95a0) = uVar1;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSReceiver()");
}

