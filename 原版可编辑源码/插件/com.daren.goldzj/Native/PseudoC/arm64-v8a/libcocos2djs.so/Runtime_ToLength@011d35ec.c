
/* v8::internal::Runtime_ToLength(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_ToLength(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  Isolate *pIVar3;
  Isolate *pIVar4;
  Isolate *pIVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if (TracingFlags::runtime_stats == 0) {
    pIVar1 = param_3 + 0x95a0;
    pIVar3 = *(Isolate **)pIVar1;
    pIVar4 = *(Isolate **)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    uVar6 = *param_2;
    if ((uVar6 & 1) == 0) {
      uVar6 = (ulong)(((uint)(uVar6 >> 1) & 0x7fffffff & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) << 1);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        pIVar5 = pIVar3;
        if (pIVar4 == pIVar3) {
          pIVar5 = (Isolate *)HandleScope::Extend(param_3);
        }
        *(Isolate **)pIVar1 = pIVar5 + 8;
        *(ulong *)pIVar5 = uVar6;
      }
      else {
        pIVar5 = (Isolate *)
                 CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar6);
      }
    }
    else {
      pIVar5 = (Isolate *)Object::ConvertToLength(param_3);
    }
    pIVar2 = param_3 + 0x180;
    if (pIVar5 != (Isolate *)0x0) {
      pIVar2 = pIVar5;
    }
    uVar7 = *(undefined8 *)pIVar2;
    *(Isolate **)pIVar1 = pIVar3;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(Isolate **)(param_3 + 0x95a8) != pIVar4) {
      *(Isolate **)(param_3 + 0x95a8) = pIVar4;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar7;
  }
  uVar7 = FUN_011d36e8(param_1,param_2,param_3);
  return uVar7;
}

