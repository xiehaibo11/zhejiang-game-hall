
/* v8::internal::Runtime_StringCharCodeAt(int, unsigned long*, v8::internal::Isolate*) */

long v8::internal::Runtime_StringCharCodeAt(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  double dVar8;
  uint local_48;
  uint local_44;
  ulong local_28;
  
  if (TracingFlags::runtime_stats != 0) {
    lVar3 = FUN_01595070(param_1,param_2,param_3);
    return lVar3;
  }
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar4 = *param_2;
  if (((uVar4 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsString()");
  }
  uVar4 = param_2[-1];
  if ((uVar4 & 1) == 0) {
    uVar6 = (int)uVar4 >> 1;
    goto LAB_01594f90;
  }
  if (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsNumber()");
  }
  dVar8 = *(double *)(uVar4 + 3);
  if ((((-2147483648.0 <= dVar8) && (dVar8 <= 2147483647.0)) && (ABS(dVar8) != INFINITY)) &&
     ((!NAN(ABS(dVar8)) && (uVar6 = (int)dVar8, dVar8 == (double)(int)dVar8)))) goto LAB_01594f90;
  uVar6 = 0xfffffbce;
  if (((ulong)dVar8 & 0x7ff0000000000000) != 0) {
    uVar6 = ((uint)((ulong)dVar8 >> 0x34) & 0x7ff) - 0x433;
  }
  if ((int)uVar6 < 0) {
    if ((int)uVar6 < -0x34) goto LAB_01594f64;
    uVar4 = (ulong)dVar8 & 0xfffffffffffff;
    if (((ulong)dVar8 & 0x7ff0000000000000) != 0) {
      uVar4 = (ulong)dVar8 & 0xfffffffffffff | 0x10000000000000;
    }
    uVar5 = (uint)(uVar4 >> ((ulong)-uVar6 & 0x3f));
  }
  else {
    if (0x1f < (int)uVar6) {
LAB_01594f64:
      uVar6 = 0;
      goto LAB_01594f90;
    }
    uVar4 = (ulong)dVar8 & 0xfffffffffffff;
    if (((ulong)dVar8 & 0x7ff0000000000000) != 0) {
      uVar4 = (ulong)dVar8 & 0xfffffffffffff | 0x10000000000000;
    }
    uVar5 = (uint)(uVar4 << ((ulong)uVar6 & 0x3f));
  }
  uVar6 = -uVar5;
  if (-1 < (long)dVar8) {
    uVar6 = uVar5;
  }
LAB_01594f90:
  puVar2 = (ulong *)String::Flatten(param_3,param_2,0);
  uVar4 = *puVar2;
  if (uVar6 < *(uint *)(uVar4 + 7)) {
    local_48 = (uint)*(ushort *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1)) + 7);
    local_44 = uVar6;
    local_28 = uVar4;
    uVar4 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                      (&local_48,&local_28,&local_44);
    lVar7 = (uVar4 & 0xffff) << 1;
  }
  else {
    lVar7 = *(long *)(param_3 + 0x430);
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    HandleScope::DeleteExtensions(param_3);
  }
  return lVar7;
}

