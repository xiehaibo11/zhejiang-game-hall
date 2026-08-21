
undefined8 FUN_015bc7e8(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  ulong uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  byte **local_650;
  byte *local_648;
  char *local_640;
  undefined8 local_638;
  RuntimeCallStats *local_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 local_610;
  long *local_608;
  long *local_600;
  WasmCompiledFrame *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_610 = 0;
  uStack_628 = 0;
  local_630 = (RuntimeCallStats *)0x0;
  uStack_618 = 0;
  uStack_620 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_630 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_630,(ulong)&local_630 | 8,0x28c);
  }
  if (DAT_01d47840 == (byte *)0x0) {
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47840 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.runtime");
  }
  pbVar3 = DAT_01d47840;
  local_650 = (byte **)0x0;
  if ((*DAT_01d47840 & 5) != 0) {
    local_608 = (long *)0x0;
    local_600 = (long *)0x0;
    plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))
                      (plVar4,0x58,pbVar3,"V8.Runtime_Runtime_WasmTableInit",0,0,0,0,0,0,0,
                       &local_608,0);
    plVar4 = local_600;
    local_600 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_608;
    local_608 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_650 = &local_648;
    local_640 = "V8.Runtime_Runtime_WasmTableInit";
    local_648 = pbVar3;
    local_638 = uVar5;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  v8::internal::StackFrameIterator::StackFrameIterator
            ((StackFrameIterator *)&local_608,param_3,(ThreadLocalTop *)(param_3 + 0x2bb8));
  v8::internal::StackFrameIterator::Advance((StackFrameIterator *)&local_608);
  uVar6 = v8::internal::WasmCompiledFrame::wasm_instance(local_80);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(param_3 + 0x95a0);
    if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
      puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar6;
    uVar6 = *param_2;
    if ((uVar6 & 1) != 0) goto LAB_015bc9a4;
LAB_015bc964:
    if ((int)(uint)uVar6 < 0) {
LAB_015bccec:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].ToUint32(&table_index)");
    }
    dVar9 = (double)(ulong)((uint)uVar6 >> 1);
    uVar6 = param_2[-1];
    if ((uVar6 & 1) == 0) goto LAB_015bca00;
LAB_015bca14:
    uVar11 = uVar6 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar11 + *(uint *)(uVar6 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].IsNumber()",dVar9);
    }
    if (*(short *)(uVar11 + *(uint *)(uVar6 - 1)) != 0x42) goto LAB_015bcd00;
    dVar13 = *(double *)(uVar6 + 3) + 4503599627370496.0;
    if (((ulong)dVar13 >> 0x20 != 0x43300000) ||
       (*(double *)(uVar6 + 3) != (double)((ulong)dVar13 & 0xffffffff))) goto LAB_015bcd00;
    uVar6 = param_2[-2];
    if ((uVar6 & 1) == 0) goto LAB_015bca70;
LAB_015bca84:
    uVar11 = uVar6 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar11 + *(uint *)(uVar6 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[2].IsNumber()",dVar9,dVar13);
    }
    if (*(short *)(uVar11 + *(uint *)(uVar6 - 1)) != 0x42) {
LAB_015bcd14:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[2].ToUint32(&dst)",dVar9,dVar13);
    }
    dVar10 = *(double *)(uVar6 + 3) + 4503599627370496.0;
    if (((ulong)dVar10 >> 0x20 != 0x43300000) ||
       (*(double *)(uVar6 + 3) != (double)((ulong)dVar10 & 0xffffffff))) goto LAB_015bcd14;
    uVar6 = param_2[-3];
    if ((uVar6 & 1) == 0) goto LAB_015bcae0;
LAB_015bcaf4:
    uVar11 = uVar6 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar11 + *(uint *)(uVar6 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[3].IsNumber()",dVar9,dVar13,dVar10);
    }
    if (*(short *)(uVar11 + *(uint *)(uVar6 - 1)) != 0x42) goto LAB_015bcd28;
    dVar14 = *(double *)(uVar6 + 3) + 4503599627370496.0;
    if (((ulong)dVar14 >> 0x20 != 0x43300000) ||
       (*(double *)(uVar6 + 3) != (double)((ulong)dVar14 & 0xffffffff))) goto LAB_015bcd28;
    uVar6 = param_2[-4];
  }
  else {
    puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar6);
    uVar6 = *param_2;
    if ((uVar6 & 1) == 0) goto LAB_015bc964;
LAB_015bc9a4:
    uVar11 = uVar6 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar11 + *(uint *)(uVar6 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsNumber()");
    }
    if (*(short *)(uVar11 + *(uint *)(uVar6 - 1)) != 0x42) goto LAB_015bccec;
    dVar9 = *(double *)(uVar6 + 3) + 4503599627370496.0;
    if (((ulong)dVar9 >> 0x20 != 0x43300000) ||
       (*(double *)(uVar6 + 3) != (double)((ulong)dVar9 & 0xffffffff))) goto LAB_015bccec;
    uVar6 = param_2[-1];
    if ((uVar6 & 1) != 0) goto LAB_015bca14;
LAB_015bca00:
    if ((int)(uint)uVar6 < 0) {
LAB_015bcd00:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].ToUint32(&elem_segment_index)",dVar9);
    }
    dVar13 = (double)(ulong)((uint)uVar6 >> 1);
    uVar6 = param_2[-2];
    if ((uVar6 & 1) != 0) goto LAB_015bca84;
LAB_015bca70:
    if ((int)(uint)uVar6 < 0) goto LAB_015bcd14;
    dVar10 = (double)(ulong)((uint)uVar6 >> 1);
    uVar6 = param_2[-3];
    if ((uVar6 & 1) != 0) goto LAB_015bcaf4;
LAB_015bcae0:
    if ((int)(uint)uVar6 < 0) {
LAB_015bcd28:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[3].ToUint32(&src)",dVar9,dVar13,dVar10);
    }
    dVar14 = (double)(ulong)((uint)uVar6 >> 1);
    uVar6 = param_2[-4];
  }
  if ((uVar6 & 1) == 0) {
    if (-1 < (int)uVar6) {
LAB_015bcbb0:
      *(ulong *)(param_3 + 0x2bc8) = *puVar7 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar7 + 0x77)
      ;
      uVar6 = v8::internal::WasmInstanceObject::InitTableEntries(param_3,puVar7);
      if ((uVar6 & 1) == 0) {
        if (*(int *)(param_3 + 0x2bc8) == 0) {
          *(ulong *)(param_3 + 0x2bc8) =
               *puVar7 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar7 + 0x77);
        }
        puVar8 = (undefined8 *)
                 v8::internal::Factory::NewWasmRuntimeError((Factory *)param_3,0x162,0,0,0);
        uVar12 = v8::internal::Isolate::Throw(param_3,*puVar8,0);
      }
      else {
        uVar12 = *(undefined8 *)(param_3 + 0xa0);
      }
      *(undefined8 *)(param_3 + 0x95a0) = uVar5;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar1) {
        *(long *)(param_3 + 0x95a8) = lVar1;
        v8::internal::HandleScope::DeleteExtensions(param_3);
      }
      if ((local_650 != (byte **)0x0) && (*local_648 != 0)) {
        plVar4 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
        (**(code **)(*plVar4 + 0x28))(plVar4,local_648,local_640,local_638);
      }
      if (local_630 != (RuntimeCallStats *)0x0) {
        v8::internal::RuntimeCallStats::Leave(local_630,(RuntimeCallTimer *)((ulong)&local_630 | 8))
        ;
      }
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return uVar12;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    uVar11 = uVar6 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar11 + *(uint *)(uVar6 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[4].IsNumber()",dVar9,dVar13,dVar10,dVar14);
    }
    if (*(short *)(uVar11 + *(uint *)(uVar6 - 1)) == 0x42) {
      dVar15 = *(double *)(uVar6 + 3) + 4503599627370496.0;
      if (((ulong)dVar15 >> 0x20 == 0x43300000) &&
         (*(double *)(uVar6 + 3) == (double)((ulong)dVar15 & 0xffffffff))) goto LAB_015bcbb0;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[4].ToUint32(&count)",dVar9,dVar13,dVar10,dVar14);
}

