
/* v8::internal::Runtime_GetPropertyWithReceiver(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_GetPropertyWithReceiver(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  Isolate *pIVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  LookupIterator aLStack_98 [88];
  char local_24 [4];
  
  if (TracingFlags::runtime_stats != 0) {
    uVar3 = FUN_0157aa2c(param_1,param_2,param_3);
    return uVar3;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar4 = *param_2;
  if (((uVar4 & 1) != 0) &&
     (0xa8 < *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)))) {
    local_24[0] = '\0';
    LookupIterator::PropertyOrElement
              (aLStack_98,param_3,param_2 + -2,param_2 + -1,local_24,param_2,3);
    if ((local_24[0] == '\0') ||
       (pIVar2 = (Isolate *)Object::GetProperty(aLStack_98,false), pIVar2 == (Isolate *)0x0)) {
      pIVar2 = param_3 + 0x180;
    }
    uVar5 = *(undefined8 *)pIVar2;
    *(undefined8 *)(param_3 + 0x95a0) = uVar3;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSReceiver()");
}

