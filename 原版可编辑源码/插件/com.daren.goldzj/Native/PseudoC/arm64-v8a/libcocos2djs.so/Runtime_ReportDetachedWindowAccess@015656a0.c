
/* v8::internal::Runtime_ReportDetachedWindowAccess(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_ReportDetachedWindowAccess(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  int iVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong local_38;
  
  if (TracingFlags::runtime_stats == 0) {
    pIVar1 = param_3 + 0x95a0;
    puVar2 = *(ulong **)pIVar1;
    puVar3 = *(ulong **)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    uVar7 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
    uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = puVar2;
      if (puVar3 == puVar2) {
        puVar5 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar5 + 1;
      *puVar5 = uVar7;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar7);
      uVar7 = *puVar5;
    }
    local_38 = uVar7;
    iVar4 = NativeContext::GetDetachedWindowReason((NativeContext *)&local_38);
    if (iVar4 != 0) {
      if (iVar4 == 3) {
        uVar6 = 0x59;
        uVar9 = 0x5a;
        uVar8 = 0x5b;
      }
      else if (iVar4 == 2) {
        uVar6 = 0x56;
        uVar9 = 0x57;
        uVar8 = 0x58;
      }
      else {
        uVar6 = 0x53;
        uVar9 = 0x54;
        uVar8 = 0x55;
      }
      Isolate::CountUsage(param_3,uVar6);
      local_38 = *puVar5;
      iVar4 = NativeContext::SecondsSinceDetachedWindow((NativeContext *)&local_38);
      if ((9 < iVar4) && (Isolate::CountUsage(param_3,uVar9), 0x3b < iVar4)) {
        Isolate::CountUsage(param_3,uVar8);
      }
    }
    uVar6 = *(undefined8 *)(param_3 + 0xa0);
    *(ulong **)pIVar1 = puVar2;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
      *(ulong **)(param_3 + 0x95a8) = puVar3;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar6;
  }
  uVar6 = FUN_01565830(param_1,param_2,param_3);
  return uVar6;
}

