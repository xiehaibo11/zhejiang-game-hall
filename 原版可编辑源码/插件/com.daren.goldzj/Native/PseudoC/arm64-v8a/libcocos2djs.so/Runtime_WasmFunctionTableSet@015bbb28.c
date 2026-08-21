
/* v8::internal::Runtime_WasmFunctionTableSet(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_WasmFunctionTableSet(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar11 = FUN_015bbea0(param_1,param_2,param_3);
    return uVar11;
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
     (*(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x434)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsWasmInstanceObject()");
  }
  uVar9 = param_2[-1];
  if ((uVar9 & 1) == 0) {
    if ((int)uVar9 < 0) goto LAB_015bbe50;
    dVar12 = (double)(uVar9 >> 1 & 0x7fffffff);
    uVar9 = param_2[-2];
  }
  else {
    uVar10 = uVar9 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar10 + *(uint *)(uVar9 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].IsNumber()");
    }
    if (*(short *)(uVar10 + *(uint *)(uVar9 - 1)) != 0x42) {
LAB_015bbe50:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].ToUint32(&table_index)");
    }
    dVar12 = *(double *)(uVar9 + 3) + 4503599627370496.0;
    if (((ulong)dVar12 >> 0x20 != 0x43300000) ||
       (*(double *)(uVar9 + 3) != (double)((ulong)dVar12 & 0xffffffff))) goto LAB_015bbe50;
    uVar9 = param_2[-2];
  }
  if ((uVar9 & 1) == 0) {
    if (-1 < (int)(uint)uVar9) {
      dVar13 = (double)(ulong)((uint)uVar9 >> 1);
LAB_015bbc88:
      uVar9 = param_2[-3];
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar6 = puVar2;
        if (puVar4 == puVar2) {
          puVar6 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar1 = puVar6 + 1;
        *puVar6 = uVar9;
      }
      else {
        puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar9);
      }
      uVar9 = *param_2 & 0xffffffff00000000;
      uVar9 = uVar9 | *(uint *)((uVar9 | *(uint *)(*param_2 + 0x8f)) + (long)(SUB84(dVar12,0) << 2)
                               + 7);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)pIVar1;
        if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
          puVar7 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar1 = puVar7 + 1;
        *puVar7 = uVar9;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar9);
      }
      uVar9 = WasmTableObject::IsInBounds(param_3,puVar7,(ulong)dVar13 & 0xffffffff);
      if ((uVar9 & 1) == 0) {
        lVar3 = *(long *)pIVar1;
        lVar5 = *(long *)(param_3 + 0x95a8);
        *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
        puVar8 = (undefined8 *)Factory::NewWasmRuntimeError((Factory *)param_3,0x162,0,0,0);
        uVar11 = Isolate::Throw(param_3,*puVar8,0);
        *(long *)pIVar1 = lVar3;
        *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
        if (*(long *)(param_3 + 0x95a8) != lVar5) {
          *(long *)(param_3 + 0x95a8) = lVar5;
          HandleScope::DeleteExtensions(param_3);
        }
      }
      else {
        WasmTableObject::Set(param_3,puVar7,(ulong)dVar13 & 0xffffffff,puVar6);
        uVar11 = *(undefined8 *)(param_3 + 0xa0);
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
      return uVar11;
    }
  }
  else {
    uVar10 = uVar9 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar10 + *(uint *)(uVar9 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[2].IsNumber()");
    }
    if (*(short *)(uVar10 + *(uint *)(uVar9 - 1)) == 0x42) {
      dVar13 = *(double *)(uVar9 + 3) + 4503599627370496.0;
      if (((ulong)dVar13 >> 0x20 == 0x43300000) &&
         (*(double *)(uVar9 + 3) == (double)((ulong)dVar13 & 0xffffffff))) goto LAB_015bbc88;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[2].ToUint32(&entry_index)");
}

