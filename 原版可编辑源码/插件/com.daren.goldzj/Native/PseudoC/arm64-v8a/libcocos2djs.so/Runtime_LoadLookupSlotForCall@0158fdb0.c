
/* v8::internal::Runtime_LoadLookupSlotForCall(int, unsigned long*, v8::internal::Isolate*) */

undefined1  [16]
v8::internal::Runtime_LoadLookupSlotForCall(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  Isolate *pIVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 *local_48;
  
  if (TracingFlags::runtime_stats == 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x95a0);
    lVar2 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    local_48 = (undefined8 *)0x0;
    pIVar4 = (Isolate *)FUN_01591e38(param_3,param_2,0,&local_48);
    if (pIVar4 == (Isolate *)0x0) {
      uVar5 = 0;
      pIVar4 = param_3 + 0x180;
    }
    else {
      uVar5 = *local_48;
    }
    auVar3._8_8_ = uVar5;
    auVar3._0_8_ = *(undefined8 *)pIVar4;
    auVar6._8_8_ = uVar5;
    auVar6._0_8_ = *(undefined8 *)pIVar4;
    *(undefined8 *)(param_3 + 0x95a0) = uVar1;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
      auVar6 = auVar3;
    }
  }
  else {
    auVar6 = FUN_0158fe80(param_1,param_2,param_3);
  }
  return auVar6;
}

