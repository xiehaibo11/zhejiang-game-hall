
undefined8 FUN_011c01d0(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  Isolate *pIVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  int iVar14;
  double dVar15;
  byte **local_100;
  byte *local_f8;
  char *local_f0;
  undefined8 local_e8;
  RuntimeCallStats *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long *local_b8;
  long *local_b0;
  long local_90;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = (RuntimeCallStats *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_e0 = (RuntimeCallStats *)(*(long *)(param_3 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x10a);
  }
  if (DAT_01d3f968 == (byte *)0x0) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f968 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d3f968;
  local_100 = (byte **)0x0;
  if ((*DAT_01d3f968 & 5) != 0) {
    local_b8 = (long *)0x0;
    local_b0 = (long *)0x0;
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar7 = (**(code **)(*plVar6 + 0x18))
                      (plVar6,0x58,pbVar4,"V8.Runtime_Runtime_GetGeneratorScopeDetails",0,0,0,0,0,0,
                       0,&local_b8,0);
    plVar6 = local_b0;
    local_b0 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    plVar6 = local_b8;
    local_b8 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    local_100 = &local_f8;
    local_f0 = "V8.Runtime_Runtime_GetGeneratorScopeDetails";
    local_f8 = pbVar4;
    local_e8 = uVar7;
  }
  iVar12 = *(int *)(param_3 + 0x95b0);
  uVar7 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = iVar12 + 1;
  uVar9 = *param_2;
  if (((uVar9 & 1) != 0) &&
     (uVar10 = uVar9 & 0xffffffff00000000 | 7,
     *(ushort *)(uVar10 + *(uint *)(uVar9 - 1)) - 0x417 < 3)) {
    if (2 < *(ushort *)(uVar10 + *(uint *)(uVar9 - 1)) - 0x417) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsJSGeneratorObject()");
    }
    uVar10 = param_2[-1];
    if ((uVar10 & 1) == 0) {
      iVar14 = (int)uVar10 >> 1;
      iVar11 = *(int *)(uVar9 + 0x1f);
    }
    else {
      if (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","args[1].IsNumber()");
      }
      dVar15 = *(double *)(uVar10 + 3);
      if ((((dVar15 < -2147483648.0) || (2147483647.0 < dVar15)) || (ABS(dVar15) == INFINITY)) ||
         ((NAN(ABS(dVar15)) || (iVar14 = (int)dVar15, dVar15 != (double)(int)dVar15)))) {
        uVar1 = 0xfffffbce;
        if (((ulong)dVar15 & 0x7ff0000000000000) != 0) {
          uVar1 = ((uint)((ulong)dVar15 >> 0x34) & 0x7ff) - 0x433;
        }
        if ((int)uVar1 < 0) {
          if (-0x35 < (int)uVar1) {
            uVar10 = (ulong)dVar15 & 0xfffffffffffff;
            if (((ulong)dVar15 & 0x7ff0000000000000) != 0) {
              uVar10 = (ulong)dVar15 & 0xfffffffffffff | 0x10000000000000;
            }
            iVar11 = (int)(uVar10 >> ((ulong)-uVar1 & 0x3f));
            goto LAB_011c04a8;
          }
        }
        else if ((int)uVar1 < 0x20) {
          uVar10 = (ulong)dVar15 & 0xfffffffffffff;
          if (((ulong)dVar15 & 0x7ff0000000000000) != 0) {
            uVar10 = (ulong)dVar15 & 0xfffffffffffff | 0x10000000000000;
          }
          iVar11 = (int)(uVar10 << ((ulong)uVar1 & 0x3f));
LAB_011c04a8:
          iVar14 = -iVar11;
          if (-1 < (long)dVar15) {
            iVar14 = iVar11;
          }
          goto LAB_011c04b0;
        }
        iVar14 = 0;
        iVar11 = *(int *)(uVar9 + 0x1f);
      }
      else {
LAB_011c04b0:
        iVar11 = *(int *)(uVar9 + 0x1f);
      }
    }
    if (-1 < iVar11) {
      v8::internal::ScopeIterator::ScopeIterator((ScopeIterator *)&local_b8,param_3,param_2);
      bVar5 = local_90 == 0;
      if ((0 < iVar14) && (local_90 != 0)) {
        iVar12 = 1;
        do {
          v8::internal::ScopeIterator::Next((ScopeIterator *)&local_b8);
          bVar5 = local_90 == 0;
          if (iVar14 <= iVar12) break;
          iVar12 = iVar12 + 1;
        } while (local_90 != 0);
      }
      if (bVar5) {
        pIVar8 = param_3 + 0xa0;
      }
      else {
        pIVar8 = (Isolate *)
                 v8::internal::ScopeIterator::MaterializeScopeDetails((ScopeIterator *)&local_b8);
      }
      uVar13 = *(undefined8 *)pIVar8;
      v8::internal::ScopeIterator::~ScopeIterator((ScopeIterator *)&local_b8);
      if (param_3 != (Isolate *)0x0) {
        *(undefined8 *)(param_3 + 0x95a0) = uVar7;
        *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
        if (*(long *)(param_3 + 0x95a8) != lVar2) {
          *(long *)(param_3 + 0x95a8) = lVar2;
          v8::internal::HandleScope::DeleteExtensions(param_3);
        }
      }
      goto joined_r0x011c035c;
    }
  }
  uVar13 = *(undefined8 *)(param_3 + 0xa0);
  *(undefined8 *)(param_3 + 0x95a0) = uVar7;
  *(int *)(param_3 + 0x95b0) = iVar12;
joined_r0x011c035c:
  if ((local_100 != (byte **)0x0) && (*local_f8 != 0)) {
    plVar6 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar6 + 0x28))(plVar6,local_f8,local_f0,local_e8);
  }
  if (local_e0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

