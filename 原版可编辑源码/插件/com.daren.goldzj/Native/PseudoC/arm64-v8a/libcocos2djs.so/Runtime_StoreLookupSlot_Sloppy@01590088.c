
/* v8::internal::Runtime_StoreLookupSlot_Sloppy(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_StoreLookupSlot_Sloppy(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  Isolate *pIVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar8 = FUN_015901d4(param_1,param_2,param_3);
    return uVar8;
  }
  pIVar1 = param_3 + 0x95a0;
  puVar3 = *(ulong **)pIVar1;
  puVar4 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *param_2;
  if (((uVar7 & 1) != 0) &&
     (*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0x40)) {
    uVar7 = *(ulong *)(param_3 + 0x2bc8);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = puVar3;
      if (puVar4 == puVar3) {
        puVar5 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar5 + 1;
      *puVar5 = uVar7;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar7);
    }
    pIVar6 = (Isolate *)FUN_0159213c(param_3,puVar5,param_2,param_2 + -1,0,3);
    pIVar2 = param_3 + 0x180;
    if (pIVar6 != (Isolate *)0x0) {
      pIVar2 = pIVar6;
    }
    uVar8 = *(undefined8 *)pIVar2;
    *(ulong **)pIVar1 = puVar3;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(ulong **)(param_3 + 0x95a8) != puVar4) {
      *(ulong **)(param_3 + 0x95a8) = puVar4;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsString()");
}

