
/* v8::internal::Runtime_WasmAtomicNotify(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_WasmAtomicNotify(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar6 = FUN_015b94f8(param_1,param_2,param_3);
    return uVar6;
  }
  pIVar1 = param_3 + 0x95a0;
  puVar3 = *(ulong **)pIVar1;
  puVar4 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *param_2;
  if (((uVar7 & 1) == 0) ||
     (uVar8 = uVar7 & 0xffffffff00000000,
     *(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x434)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsWasmInstanceObject()");
  }
  uVar9 = param_2[-1];
  if ((uVar9 & 1) == 0) {
    iVar12 = (int)uVar9 >> 1;
    uVar9 = param_2[-2];
  }
  else {
    if (*(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].IsNumber()");
    }
    dVar13 = *(double *)(uVar9 + 3);
    if ((((dVar13 < -2147483648.0) || (2147483647.0 < dVar13)) || (ABS(dVar13) == INFINITY)) ||
       ((NAN(ABS(dVar13)) || (iVar12 = (int)dVar13, dVar13 != (double)iVar12)))) {
      uVar2 = 0xfffffbce;
      if (((ulong)dVar13 & 0x7ff0000000000000) != 0) {
        uVar2 = ((uint)((ulong)dVar13 >> 0x34) & 0x7ff) - 0x433;
      }
      if ((int)uVar2 < 0) {
        if ((int)uVar2 < -0x34) {
          iVar12 = 0;
          uVar9 = param_2[-2];
          goto joined_r0x015b93dc;
        }
        uVar9 = (ulong)dVar13 & 0xfffffffffffff;
        if (((ulong)dVar13 & 0x7ff0000000000000) != 0) {
          uVar9 = (ulong)dVar13 & 0xfffffffffffff | 0x10000000000000;
        }
        iVar11 = (int)(uVar9 >> ((ulong)-uVar2 & 0x3f));
      }
      else {
        if (0x1f < (int)uVar2) {
          iVar12 = 0;
          goto LAB_015b935c;
        }
        uVar9 = (ulong)dVar13 & 0xfffffffffffff;
        if (((ulong)dVar13 & 0x7ff0000000000000) != 0) {
          uVar9 = (ulong)dVar13 & 0xfffffffffffff | 0x10000000000000;
        }
        iVar11 = (int)(uVar9 << ((ulong)uVar2 & 0x3f));
      }
      iVar12 = -iVar11;
      if (-1 < (long)dVar13) {
        iVar12 = iVar11;
      }
      uVar9 = param_2[-2];
    }
    else {
LAB_015b935c:
      uVar9 = param_2[-2];
    }
  }
joined_r0x015b93dc:
  if ((uVar9 & 1) == 0) {
    iVar11 = (int)uVar9 >> 1;
    goto LAB_015b9408;
  }
  if (*(short *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsNumber()");
  }
  dVar13 = *(double *)(uVar9 + 3);
  if (((-2147483648.0 <= dVar13) && (dVar13 <= 2147483647.0)) &&
     ((ABS(dVar13) != INFINITY &&
      ((!NAN(ABS(dVar13)) && (iVar11 = (int)dVar13, dVar13 == (double)(int)dVar13))))))
  goto LAB_015b9408;
  uVar2 = 0xfffffbce;
  if (((ulong)dVar13 & 0x7ff0000000000000) != 0) {
    uVar2 = ((uint)((ulong)dVar13 >> 0x34) & 0x7ff) - 0x433;
  }
  if ((int)uVar2 < 0) {
    if ((int)uVar2 < -0x34) goto LAB_015b938c;
    uVar9 = (ulong)dVar13 & 0xfffffffffffff;
    if (((ulong)dVar13 & 0x7ff0000000000000) != 0) {
      uVar9 = (ulong)dVar13 & 0xfffffffffffff | 0x10000000000000;
    }
    iVar10 = (int)(uVar9 >> ((ulong)-uVar2 & 0x3f));
  }
  else {
    if (0x1f < (int)uVar2) {
LAB_015b938c:
      iVar11 = 0;
      goto LAB_015b9408;
    }
    uVar9 = (ulong)dVar13 & 0xfffffffffffff;
    if (((ulong)dVar13 & 0x7ff0000000000000) != 0) {
      uVar9 = (ulong)dVar13 & 0xfffffffffffff | 0x10000000000000;
    }
    iVar10 = (int)(uVar9 << ((ulong)uVar2 & 0x3f));
  }
  iVar11 = -iVar10;
  if (-1 < (long)dVar13) {
    iVar11 = iVar10;
  }
LAB_015b9408:
  uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)(uVar7 + 0x7b)) + 0xb);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = puVar3;
    if (puVar4 == puVar3) {
      puVar5 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar8;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar8);
  }
  uVar6 = FutexEmulation::Wake(puVar5,iVar12,iVar11);
  *(ulong **)pIVar1 = puVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar4) {
    *(ulong **)(param_3 + 0x95a8) = puVar4;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar6;
}

