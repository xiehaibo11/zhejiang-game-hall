
/* v8::internal::Runtime_WasmI64AtomicWait(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_WasmI64AtomicWait(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar5 = FUN_015ba804(param_1,param_2,param_3);
    return uVar5;
  }
  pIVar1 = param_3 + 0x95a0;
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *param_2;
  if (((uVar7 & 1) == 0) ||
     (uVar6 = uVar7 & 0xffffffff00000000,
     *(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x434)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsWasmInstanceObject()");
  }
  uVar8 = param_2[-1];
  if ((uVar8 & 1) == 0) {
    iVar13 = (int)uVar8 >> 1;
    uVar8 = param_2[-2];
joined_r0x015ba468:
    if ((uVar8 & 1) == 0) goto LAB_015ba3f8;
LAB_015ba46c:
    if (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[2].IsNumber()");
    }
    dVar14 = *(double *)(uVar8 + 3);
    if (((dVar14 < -2147483648.0) || (2147483647.0 < dVar14)) ||
       ((ABS(dVar14) == INFINITY ||
        ((NAN(ABS(dVar14)) || (uVar8 = (ulong)(uint)(int)dVar14, dVar14 != (double)(int)dVar14))))))
    {
      uVar10 = 0xfffffbce;
      if (((ulong)dVar14 & 0x7ff0000000000000) != 0) {
        uVar10 = ((uint)((ulong)dVar14 >> 0x34) & 0x7ff) - 0x433;
      }
      if (-1 < (int)uVar10) {
        if ((int)uVar10 < 0x20) {
          uVar8 = (ulong)dVar14 & 0xfffffffffffff;
          if (((ulong)dVar14 & 0x7ff0000000000000) != 0) {
            uVar8 = (ulong)dVar14 & 0xfffffffffffff | 0x10000000000000;
          }
          uVar10 = (uint)(uVar8 << ((ulong)uVar10 & 0x3f));
          goto LAB_015ba570;
        }
        uVar8 = 0;
        goto LAB_015ba504;
      }
      if ((int)uVar10 < -0x34) {
        uVar8 = 0;
        uVar11 = param_2[-3];
      }
      else {
        uVar8 = (ulong)dVar14 & 0xfffffffffffff;
        if (((ulong)dVar14 & 0x7ff0000000000000) != 0) {
          uVar8 = (ulong)dVar14 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar10 = (uint)(uVar8 >> ((ulong)-uVar10 & 0x3f));
LAB_015ba570:
        uVar12 = -uVar10;
        if (-1 < (long)dVar14) {
          uVar12 = uVar10;
        }
        uVar8 = (ulong)uVar12;
        uVar11 = param_2[-3];
      }
    }
    else {
LAB_015ba504:
      uVar11 = param_2[-3];
    }
  }
  else {
    if (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[1].IsNumber()");
    }
    dVar14 = *(double *)(uVar8 + 3);
    if ((((dVar14 < -2147483648.0) || (2147483647.0 < dVar14)) || (ABS(dVar14) == INFINITY)) ||
       ((NAN(ABS(dVar14)) || (iVar13 = (int)dVar14, dVar14 != (double)iVar13)))) {
      uVar10 = 0xfffffbce;
      if (((ulong)dVar14 & 0x7ff0000000000000) != 0) {
        uVar10 = ((uint)((ulong)dVar14 >> 0x34) & 0x7ff) - 0x433;
      }
      if ((int)uVar10 < 0) {
        if ((int)uVar10 < -0x34) {
          iVar13 = 0;
          uVar8 = param_2[-2];
          goto joined_r0x015ba468;
        }
        uVar8 = (ulong)dVar14 & 0xfffffffffffff;
        if (((ulong)dVar14 & 0x7ff0000000000000) != 0) {
          uVar8 = (ulong)dVar14 & 0xfffffffffffff | 0x10000000000000;
        }
        iVar9 = (int)(uVar8 >> ((ulong)-uVar10 & 0x3f));
      }
      else {
        if (0x1f < (int)uVar10) {
          iVar13 = 0;
          goto LAB_015ba3f0;
        }
        uVar8 = (ulong)dVar14 & 0xfffffffffffff;
        if (((ulong)dVar14 & 0x7ff0000000000000) != 0) {
          uVar8 = (ulong)dVar14 & 0xfffffffffffff | 0x10000000000000;
        }
        iVar9 = (int)(uVar8 << ((ulong)uVar10 & 0x3f));
      }
      iVar13 = -iVar9;
      if (-1 < (long)dVar14) {
        iVar13 = iVar9;
      }
      uVar8 = param_2[-2];
      goto joined_r0x015ba468;
    }
LAB_015ba3f0:
    uVar8 = param_2[-2];
    if ((uVar8 & 1) != 0) goto LAB_015ba46c;
LAB_015ba3f8:
    uVar8 = (ulong)(uint)((int)uVar8 >> 1);
    uVar11 = param_2[-3];
  }
  if ((uVar11 & 1) == 0) {
    uVar10 = (int)uVar11 >> 1;
    uVar11 = param_2[-4];
    goto joined_r0x015ba63c;
  }
  if (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[3].IsNumber()");
  }
  dVar14 = *(double *)(uVar11 + 3);
  if ((((dVar14 < -2147483648.0) || (2147483647.0 < dVar14)) || (ABS(dVar14) == INFINITY)) ||
     ((NAN(ABS(dVar14)) || (uVar10 = (uint)dVar14, dVar14 != (double)(int)uVar10)))) {
    uVar10 = 0xfffffbce;
    if (((ulong)dVar14 & 0x7ff0000000000000) != 0) {
      uVar10 = ((uint)((ulong)dVar14 >> 0x34) & 0x7ff) - 0x433;
    }
    if ((int)uVar10 < 0) {
      if ((int)uVar10 < -0x34) {
        uVar10 = 0;
        uVar11 = param_2[-4];
        goto joined_r0x015ba63c;
      }
      uVar11 = (ulong)dVar14 & 0xfffffffffffff;
      if (((ulong)dVar14 & 0x7ff0000000000000) != 0) {
        uVar11 = (ulong)dVar14 & 0xfffffffffffff | 0x10000000000000;
      }
      uVar12 = (uint)(uVar11 >> ((ulong)-uVar10 & 0x3f));
    }
    else {
      if (0x1f < (int)uVar10) {
        uVar10 = 0;
        goto LAB_015ba618;
      }
      uVar11 = (ulong)dVar14 & 0xfffffffffffff;
      if (((ulong)dVar14 & 0x7ff0000000000000) != 0) {
        uVar11 = (ulong)dVar14 & 0xfffffffffffff | 0x10000000000000;
      }
      uVar12 = (uint)(uVar11 << ((ulong)uVar10 & 0x3f));
    }
    uVar10 = -uVar12;
    if (-1 < (long)dVar14) {
      uVar10 = uVar12;
    }
    uVar11 = param_2[-4];
  }
  else {
LAB_015ba618:
    uVar11 = param_2[-4];
  }
joined_r0x015ba63c:
  if ((uVar11 & 1) == 0) {
    dVar14 = (double)((int)uVar11 >> 1);
  }
  else {
    if (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[4].IsNumber()");
    }
    dVar14 = *(double *)(uVar11 + 3);
  }
  dVar15 = INFINITY;
  if (0.0 <= dVar14) {
    dVar15 = dVar14 / 1000000.0;
  }
  uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)(uVar7 + 0x7b)) + 0xb);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = puVar2;
    if (puVar3 == puVar2) {
      puVar4 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = uVar6;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar6);
  }
  uVar5 = FutexEmulation::Wait64(dVar15,param_3,puVar4,iVar13,(ulong)uVar10 | uVar8 << 0x20);
  *(ulong **)pIVar1 = puVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
    *(ulong **)(param_3 + 0x95a8) = puVar3;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar5;
}

