
/* v8::internal::Runtime_ConstructDouble(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_ConstructDouble(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 uVar8;
  double dVar9;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar3 = FUN_0159abb0(param_1,param_2,param_3);
    return uVar3;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar4 = *param_2;
  if ((uVar4 & 1) == 0) {
    uVar4 = (ulong)(uint)((int)uVar4 >> 1);
    uVar6 = param_2[-1];
  }
  else {
    if (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[0].IsNumber()");
    }
    dVar9 = *(double *)(uVar4 + 3);
    if ((((dVar9 < -2147483648.0) || (2147483647.0 < dVar9)) || (ABS(dVar9) == INFINITY)) ||
       ((NAN(ABS(dVar9)) || (uVar4 = (ulong)(uint)(int)dVar9, dVar9 != (double)(int)dVar9)))) {
      uVar5 = 0xfffffbce;
      if (((ulong)dVar9 & 0x7ff0000000000000) != 0) {
        uVar5 = ((uint)((ulong)dVar9 >> 0x34) & 0x7ff) - 0x433;
      }
      if ((int)uVar5 < 0) {
        if ((int)uVar5 < -0x34) {
          uVar4 = 0;
          uVar6 = param_2[-1];
          goto joined_r0x0159aaec;
        }
        uVar4 = (ulong)dVar9 & 0xfffffffffffff;
        if (((ulong)dVar9 & 0x7ff0000000000000) != 0) {
          uVar4 = (ulong)dVar9 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar5 = (uint)(uVar4 >> ((ulong)-uVar5 & 0x3f));
      }
      else {
        if (0x1f < (int)uVar5) {
          uVar4 = 0;
          goto LAB_0159aa6c;
        }
        uVar4 = (ulong)dVar9 & 0xfffffffffffff;
        if (((ulong)dVar9 & 0x7ff0000000000000) != 0) {
          uVar4 = (ulong)dVar9 & 0xfffffffffffff | 0x10000000000000;
        }
        uVar5 = (uint)(uVar4 << ((ulong)uVar5 & 0x3f));
      }
      uVar7 = -uVar5;
      if (-1 < (long)dVar9) {
        uVar7 = uVar5;
      }
      uVar4 = (ulong)uVar7;
      uVar6 = param_2[-1];
    }
    else {
LAB_0159aa6c:
      uVar6 = param_2[-1];
    }
  }
joined_r0x0159aaec:
  if ((uVar6 & 1) == 0) {
    uVar5 = (int)uVar6 >> 1;
    goto LAB_0159ab18;
  }
  if (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsNumber()");
  }
  dVar9 = *(double *)(uVar6 + 3);
  if (((-2147483648.0 <= dVar9) && (dVar9 <= 2147483647.0)) &&
     ((ABS(dVar9) != INFINITY &&
      ((!NAN(ABS(dVar9)) && (uVar5 = (int)dVar9, dVar9 == (double)(int)dVar9))))))
  goto LAB_0159ab18;
  uVar5 = 0xfffffbce;
  if (((ulong)dVar9 & 0x7ff0000000000000) != 0) {
    uVar5 = ((uint)((ulong)dVar9 >> 0x34) & 0x7ff) - 0x433;
  }
  if ((int)uVar5 < 0) {
    if ((int)uVar5 < -0x34) goto LAB_0159aa9c;
    uVar6 = (ulong)dVar9 & 0xfffffffffffff;
    if (((ulong)dVar9 & 0x7ff0000000000000) != 0) {
      uVar6 = (ulong)dVar9 & 0xfffffffffffff | 0x10000000000000;
    }
    uVar7 = (uint)(uVar6 >> ((ulong)-uVar5 & 0x3f));
  }
  else {
    if (0x1f < (int)uVar5) {
LAB_0159aa9c:
      uVar5 = 0;
      goto LAB_0159ab18;
    }
    uVar6 = (ulong)dVar9 & 0xfffffffffffff;
    if (((ulong)dVar9 & 0x7ff0000000000000) != 0) {
      uVar6 = (ulong)dVar9 & 0xfffffffffffff | 0x10000000000000;
    }
    uVar7 = (uint)(uVar6 << ((ulong)uVar5 & 0x3f));
  }
  uVar5 = -uVar7;
  if (-1 < (long)dVar9) {
    uVar5 = uVar7;
  }
LAB_0159ab18:
  puVar2 = (undefined8 *)
           Factory::NewNumber<(v8::internal::AllocationType)0>
                     ((Factory *)param_3,(double)((ulong)uVar5 | uVar4 << 0x20));
  uVar8 = *puVar2;
  *(undefined8 *)(param_3 + 0x95a0) = uVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar8;
}

