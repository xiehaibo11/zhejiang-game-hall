
/* v8::internal::Runtime_WasmFunctionTableGet(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_WasmFunctionTableGet(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  double dVar11;
  ulong uVar12;
  undefined8 uVar13;
  double dVar14;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar13 = FUN_015bb6dc(param_1,param_2,param_3);
    return uVar13;
  }
  pIVar1 = param_3 + 0x95a0;
  if (trap_handler::g_is_trap_handler_enabled != '\0') {
    trap_handler::g_thread_in_wasm_code = 0;
  }
  puVar2 = *(ulong **)pIVar1;
  puVar4 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar9 = *param_2;
  if (((uVar9 & 1) == 0) ||
     (uVar8 = uVar9 & 0xffffffff00000000,
     *(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x434)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsWasmInstanceObject()");
  }
  uVar10 = param_2[-1];
  if ((uVar10 & 1) == 0) {
    if ((int)uVar10 < 0) goto LAB_015bb68c;
    dVar11 = (double)(uVar10 >> 1 & 0x7fffffff);
    uVar10 = param_2[-2];
  }
  else {
    uVar12 = uVar10 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar12 + *(uint *)(uVar10 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].IsNumber()");
    }
    if (*(short *)(uVar12 + *(uint *)(uVar10 - 1)) != 0x42) {
LAB_015bb68c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].ToUint32(&table_index)");
    }
    dVar11 = *(double *)(uVar10 + 3) + 4503599627370496.0;
    if (((ulong)dVar11 >> 0x20 != 0x43300000) ||
       (*(double *)(uVar10 + 3) != (double)((ulong)dVar11 & 0xffffffff))) goto LAB_015bb68c;
    uVar10 = param_2[-2];
  }
  if ((uVar10 & 1) == 0) {
    if (-1 < (int)(uint)uVar10) {
      dVar14 = (double)(ulong)((uint)uVar10 >> 1);
LAB_015bb51c:
      uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)(uVar9 + 0x8f)) + (long)(SUB84(dVar11,0) << 2) + 7
                               );
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar6 = puVar2;
        if (puVar4 == puVar2) {
          puVar6 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar1 = puVar6 + 1;
        *puVar6 = uVar8;
      }
      else {
        puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar8);
      }
      uVar9 = WasmTableObject::IsInBounds(param_3,puVar6,(ulong)dVar14 & 0xffffffff);
      if ((uVar9 & 1) == 0) {
        lVar3 = *(long *)pIVar1;
        lVar5 = *(long *)(param_3 + 0x95a8);
        *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
        puVar7 = (undefined8 *)Factory::NewWasmRuntimeError((Factory *)param_3,0x162,0,0,0);
        uVar13 = Isolate::Throw(param_3,*puVar7,0);
        *(long *)pIVar1 = lVar3;
        *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
        if (*(long *)(param_3 + 0x95a8) != lVar5) {
          *(long *)(param_3 + 0x95a8) = lVar5;
          HandleScope::DeleteExtensions(param_3);
        }
      }
      else {
        puVar7 = (undefined8 *)WasmTableObject::Get(param_3,puVar6,(ulong)dVar14 & 0xffffffff);
        uVar13 = *puVar7;
      }
      *(ulong **)pIVar1 = puVar2;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(ulong **)(param_3 + 0x95a8) != puVar4) {
        *(ulong **)(param_3 + 0x95a8) = puVar4;
        HandleScope::DeleteExtensions(param_3);
      }
      if (trap_handler::g_is_trap_handler_enabled != '\0') {
        trap_handler::g_thread_in_wasm_code = 1;
      }
      return uVar13;
    }
  }
  else {
    uVar12 = uVar10 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar12 + *(uint *)(uVar10 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[2].IsNumber()");
    }
    if (*(short *)(uVar12 + *(uint *)(uVar10 - 1)) == 0x42) {
      dVar14 = *(double *)(uVar10 + 3) + 4503599627370496.0;
      if (((ulong)dVar14 >> 0x20 == 0x43300000) &&
         (*(double *)(uVar10 + 3) == (double)((ulong)dVar14 & 0xffffffff))) goto LAB_015bb51c;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[2].ToUint32(&entry_index)");
}

