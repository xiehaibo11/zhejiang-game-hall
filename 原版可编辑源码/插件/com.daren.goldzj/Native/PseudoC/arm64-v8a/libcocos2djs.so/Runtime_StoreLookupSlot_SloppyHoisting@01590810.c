
/* v8::internal::Runtime_StoreLookupSlot_SloppyHoisting(int, unsigned long*, v8::internal::Isolate*)
    */

undefined8
v8::internal::Runtime_StoreLookupSlot_SloppyHoisting(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  Isolate *pIVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 local_38;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar8 = FUN_01590970(param_1,param_2,param_3);
    return uVar8;
  }
  pIVar1 = param_3 + 0x95a0;
  lVar3 = *(long *)pIVar1;
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *param_2;
  if (((uVar7 & 1) != 0) &&
     (*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0x40)) {
    local_38 = *(undefined8 *)(param_3 + 0x2bc8);
    uVar7 = Context::declaration_context((Context *)&local_38);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pIVar1;
      if (puVar5 == *(ulong **)(param_3 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar5 + 1;
      *puVar5 = uVar7;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar7);
    }
    pIVar6 = (Isolate *)FUN_0159213c(param_3,puVar5,param_2,param_2 + -1,0,0);
    pIVar2 = param_3 + 0x180;
    if (pIVar6 != (Isolate *)0x0) {
      pIVar2 = pIVar6;
    }
    uVar8 = *(undefined8 *)pIVar2;
    *(long *)pIVar1 = lVar3;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar4) {
      *(long *)(param_3 + 0x95a8) = lVar4;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsString()");
}

