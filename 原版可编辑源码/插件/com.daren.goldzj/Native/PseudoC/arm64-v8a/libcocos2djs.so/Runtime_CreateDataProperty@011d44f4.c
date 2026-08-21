
/* v8::internal::Runtime_CreateDataProperty(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_CreateDataProperty(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  Isolate *pIVar5;
  LookupIterator aLStack_98 [88];
  char local_24 [4];
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_011d4624(param_1,param_2,param_3);
    return uVar4;
  }
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar4 = *param_2;
  if (((uVar4 & 1) != 0) &&
     (0xa8 < *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)))) {
    LookupIterator::PropertyOrElement(aLStack_98,param_3,param_2,param_2 + -1,local_24,1);
    if (local_24[0] == '\0') {
      pIVar5 = param_3 + 0x180;
    }
    else {
      cVar3 = JSReceiver::CreateDataProperty(aLStack_98,(Isolate *)(param_2 + -2),1);
      pIVar5 = param_3 + 0x180;
      if (cVar3 != '\0') {
        pIVar5 = (Isolate *)(param_2 + -2);
      }
    }
    uVar4 = *(ulong *)pIVar5;
    *(undefined8 *)(param_3 + 0x95a0) = uVar1;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSReceiver()");
}

