
/* v8::internal::Runtime_InstantiateAsmJs(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_InstantiateAsmJs(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar11 = FUN_0155dc3c(param_1,param_2,param_3);
    return uVar11;
  }
  pIVar1 = param_3 + 0x95a0;
  lVar3 = *(long *)pIVar1;
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar9 = *param_2;
  if ((uVar9 & 1) == 0) {
LAB_0155dc28:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
  }
  uVar8 = uVar9 & 0xffffffff00000000;
  if (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x439) goto LAB_0155dc28;
  puVar12 = param_2 + -1;
  uVar10 = *puVar12;
  if ((uVar10 & 1) == 0) {
    puVar12 = (ulong *)0x0;
  }
  else if (*(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) < 0xa9) {
    puVar12 = (ulong *)0x0;
  }
  puVar13 = param_2 + -2;
  uVar10 = *puVar13;
  if ((uVar10 & 1) == 0) {
    puVar13 = (ulong *)0x0;
  }
  else if (*(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) < 0xa9) {
    puVar13 = (ulong *)0x0;
  }
  puVar14 = param_2 + -3;
  uVar10 = *puVar14;
  if ((uVar10 & 1) == 0) {
    puVar14 = (ulong *)0x0;
  }
  else if (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x424) {
    puVar14 = (ulong *)0x0;
  }
  uVar2 = *(uint *)((uVar8 | *(uint *)(uVar9 + 0xb)) + 3);
  if (((uVar2 & 1) != 0) &&
     (*(short *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar2) - 1)) == 0x57)) {
    uVar9 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pIVar1;
      if (puVar5 == *(ulong **)(param_3 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar5 + 1;
      *puVar5 = uVar9;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar9);
      uVar9 = *puVar5;
    }
    uVar9 = uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 + 3);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)pIVar1;
      if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar6 + 1;
      *puVar6 = uVar9;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar9);
    }
    puVar7 = (undefined8 *)AsmJs::InstantiateAsmWasm(param_3,puVar5,puVar6,puVar12,puVar13,puVar14);
    if (puVar7 != (undefined8 *)0x0) {
      uVar11 = *puVar7;
      goto LAB_0155dbbc;
    }
  }
  uVar9 = *param_2 & 0xffffffff00000000;
  uVar2 = *(uint *)((uVar9 | *(uint *)(*param_2 + 0xb)) + 3);
  if (((uVar2 & 1) != 0) &&
     (*(short *)((uVar9 | 7) + (ulong)*(uint *)((uVar9 | uVar2) - 1)) == 0x57)) {
    uVar9 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar12 = *(ulong **)pIVar1;
      if (puVar12 == *(ulong **)(param_3 + 0x95a8)) {
        puVar12 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar12 + 1;
      *puVar12 = uVar9;
    }
    else {
      puVar12 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar9);
    }
    SharedFunctionInfo::DiscardCompiled(param_3,puVar12);
  }
  uVar9 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
  *(uint *)(uVar9 + 0x1b) = *(uint *)(uVar9 + 0x1b) | 0x4000;
  uVar8 = *param_2;
  uVar9 = Builtins::builtin((Builtins *)(param_3 + 0x9e00),0x42);
  *(int *)(uVar8 + 0x17) = (int)uVar9;
  if (((uVar9 & 1) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
    Heap_MarkingBarrierSlow(uVar8,uVar8 + 0x17);
  }
  uVar11 = 0;
LAB_0155dbbc:
  *(long *)pIVar1 = lVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar4) {
    *(long *)(param_3 + 0x95a8) = lVar4;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar11;
}

