
/* v8::internal::Runtime_WasmTableCopy(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_WasmTableCopy(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  double dVar8;
  double dVar9;
  ulong uVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  StackFrameIterator aSStack_608 [1416];
  WasmCompiledFrame *local_80;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (TracingFlags::runtime_stats != 0) {
    uVar11 = FUN_015bd280(param_1,param_2,param_3);
    if (*(long *)(lVar4 + 0x28) == local_68) {
      return uVar11;
    }
    goto LAB_015bd1b4;
  }
  pIVar1 = param_3 + 0x95a0;
  lVar2 = *(long *)pIVar1;
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  StackFrameIterator::StackFrameIterator(aSStack_608,param_3,(ThreadLocalTop *)(param_3 + 0x2bb8));
  StackFrameIterator::Advance(aSStack_608);
  uVar5 = WasmCompiledFrame::wasm_instance(local_80);
  *(ulong *)(param_3 + 0x2bc8) = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0x77);
  StackFrameIterator::StackFrameIterator(aSStack_608,param_3,(ThreadLocalTop *)(param_3 + 0x2bb8));
  StackFrameIterator::Advance(aSStack_608);
  uVar5 = WasmCompiledFrame::wasm_instance(local_80);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pIVar1;
    if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar6 + 1;
    *puVar6 = uVar5;
    uVar5 = *param_2;
    if ((uVar5 & 1) == 0) goto LAB_015bce90;
LAB_015bced0:
    uVar10 = uVar5 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar10 + *(uint *)(uVar5 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsNumber()");
    }
    if (*(short *)(uVar10 + *(uint *)(uVar5 - 1)) != 0x42) {
LAB_015bd1b8:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].ToUint32(&table_dst_index)");
    }
    dVar8 = *(double *)(uVar5 + 3) + 4503599627370496.0;
    if (((ulong)dVar8 >> 0x20 != 0x43300000) ||
       (*(double *)(uVar5 + 3) != (double)((ulong)dVar8 & 0xffffffff))) goto LAB_015bd1b8;
    uVar5 = param_2[-1];
    if ((uVar5 & 1) == 0) goto LAB_015bcf2c;
LAB_015bcf40:
    uVar10 = uVar5 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar10 + *(uint *)(uVar5 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].IsNumber()",dVar8);
    }
    if (*(short *)(uVar10 + *(uint *)(uVar5 - 1)) != 0x42) goto LAB_015bd1cc;
    dVar12 = *(double *)(uVar5 + 3) + 4503599627370496.0;
    if (((ulong)dVar12 >> 0x20 != 0x43300000) ||
       (*(double *)(uVar5 + 3) != (double)((ulong)dVar12 & 0xffffffff))) goto LAB_015bd1cc;
    uVar5 = param_2[-2];
    if ((uVar5 & 1) != 0) goto LAB_015bcfb0;
LAB_015bcf9c:
    if ((int)(uint)uVar5 < 0) {
LAB_015bd1e0:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[2].ToUint32(&dst)",dVar8,dVar12);
    }
    dVar9 = (double)(ulong)((uint)uVar5 >> 1);
    uVar5 = param_2[-3];
    if ((uVar5 & 1) == 0) goto LAB_015bd00c;
LAB_015bd020:
    uVar10 = uVar5 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar10 + *(uint *)(uVar5 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[3].IsNumber()",dVar8,dVar12,dVar9);
    }
    if (*(short *)(uVar10 + *(uint *)(uVar5 - 1)) != 0x42) goto LAB_015bd1f4;
    dVar13 = *(double *)(uVar5 + 3) + 4503599627370496.0;
    if (((ulong)dVar13 >> 0x20 != 0x43300000) ||
       (*(double *)(uVar5 + 3) != (double)((ulong)dVar13 & 0xffffffff))) goto LAB_015bd1f4;
    uVar5 = param_2[-4];
    if ((uVar5 & 1) != 0) goto LAB_015bd088;
LAB_015bd07c:
    if ((int)uVar5 < 0) {
LAB_015bd208:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[4].ToUint32(&count)",dVar8,dVar12,dVar9,dVar13);
    }
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar5);
    uVar5 = *param_2;
    if ((uVar5 & 1) != 0) goto LAB_015bced0;
LAB_015bce90:
    if ((int)(uint)uVar5 < 0) goto LAB_015bd1b8;
    dVar8 = (double)(ulong)((uint)uVar5 >> 1);
    uVar5 = param_2[-1];
    if ((uVar5 & 1) != 0) goto LAB_015bcf40;
LAB_015bcf2c:
    if ((int)(uint)uVar5 < 0) {
LAB_015bd1cc:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].ToUint32(&table_src_index)",dVar8);
    }
    dVar12 = (double)(ulong)((uint)uVar5 >> 1);
    uVar5 = param_2[-2];
    if ((uVar5 & 1) == 0) goto LAB_015bcf9c;
LAB_015bcfb0:
    uVar10 = uVar5 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar10 + *(uint *)(uVar5 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[2].IsNumber()",dVar8,dVar12);
    }
    if (*(short *)(uVar10 + *(uint *)(uVar5 - 1)) != 0x42) goto LAB_015bd1e0;
    dVar9 = *(double *)(uVar5 + 3) + 4503599627370496.0;
    if (((ulong)dVar9 >> 0x20 != 0x43300000) ||
       (*(double *)(uVar5 + 3) != (double)((ulong)dVar9 & 0xffffffff))) goto LAB_015bd1e0;
    uVar5 = param_2[-3];
    if ((uVar5 & 1) != 0) goto LAB_015bd020;
LAB_015bd00c:
    if ((int)(uint)uVar5 < 0) {
LAB_015bd1f4:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[3].ToUint32(&src)",dVar8,dVar12,dVar9);
    }
    dVar13 = (double)(ulong)((uint)uVar5 >> 1);
    uVar5 = param_2[-4];
    if ((uVar5 & 1) == 0) goto LAB_015bd07c;
LAB_015bd088:
    uVar10 = uVar5 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar10 + *(uint *)(uVar5 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[4].IsNumber()",dVar8,dVar12,dVar9,dVar13);
    }
    if (*(short *)(uVar10 + *(uint *)(uVar5 - 1)) != 0x42) goto LAB_015bd208;
    dVar14 = *(double *)(uVar5 + 3) + 4503599627370496.0;
    if (((ulong)dVar14 >> 0x20 != 0x43300000) ||
       (*(double *)(uVar5 + 3) != (double)((ulong)dVar14 & 0xffffffff))) goto LAB_015bd208;
  }
  uVar5 = WasmInstanceObject::CopyTableEntries(param_3,puVar6);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(param_3 + 0x2bc8) == 0) {
      *(ulong *)(param_3 + 0x2bc8) = *puVar6 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar6 + 0x77)
      ;
    }
    puVar7 = (undefined8 *)Factory::NewWasmRuntimeError((Factory *)param_3,0x162,0,0,0);
    uVar11 = Isolate::Throw(param_3,*puVar7,0);
  }
  else {
    uVar11 = *(undefined8 *)(param_3 + 0xa0);
  }
  *(long *)pIVar1 = lVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    HandleScope::DeleteExtensions(param_3);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return uVar11;
  }
LAB_015bd1b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

