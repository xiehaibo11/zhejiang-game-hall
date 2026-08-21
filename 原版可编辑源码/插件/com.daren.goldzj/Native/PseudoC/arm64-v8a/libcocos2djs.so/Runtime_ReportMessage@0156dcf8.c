
/* v8::internal::Runtime_ReportMessage(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_ReportMessage(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (TracingFlags::runtime_stats == 0) {
    uVar3 = *(undefined8 *)(param_3 + 0x95a0);
    lVar2 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    *(ulong *)(param_3 + 0x2bd8) = *param_2;
    Isolate::ReportPendingMessagesFromJavaScript(param_3);
    uVar1 = *(undefined8 *)(param_3 + 0xa0);
    *(undefined8 *)(param_3 + 0x2bd8) = *(undefined8 *)(param_3 + 0xa8);
    if (param_3 != (Isolate *)0x0) {
      *(undefined8 *)(param_3 + 0x95a0) = uVar3;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar2) {
        *(long *)(param_3 + 0x95a8) = lVar2;
        HandleScope::DeleteExtensions(param_3);
      }
    }
    return uVar1;
  }
  uVar3 = FUN_0156ddac(param_1,param_2,param_3);
  return uVar3;
}

