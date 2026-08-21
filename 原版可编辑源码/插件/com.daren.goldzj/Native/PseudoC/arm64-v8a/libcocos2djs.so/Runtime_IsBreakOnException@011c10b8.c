
/* v8::internal::Runtime_IsBreakOnException(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_IsBreakOnException(int param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  double dVar7;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar3 = FUN_011c1264(param_1,param_2,param_3);
    return uVar3;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar5 = *param_2;
  if ((uVar5 & 1) == 0) {
    iVar4 = (int)uVar5 >> 1;
    goto LAB_011c11ec;
  }
  if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsNumber()");
  }
  dVar7 = *(double *)(uVar5 + 3);
  if ((((-2147483648.0 <= dVar7) && (dVar7 <= 2147483647.0)) && (ABS(dVar7) != INFINITY)) &&
     ((!NAN(ABS(dVar7)) && (iVar4 = (int)dVar7, dVar7 == (double)(int)dVar7)))) goto LAB_011c11ec;
  uVar1 = 0xfffffbce;
  if (((ulong)dVar7 & 0x7ff0000000000000) != 0) {
    uVar1 = ((uint)((ulong)dVar7 >> 0x34) & 0x7ff) - 0x433;
  }
  if ((int)uVar1 < 0) {
    if ((int)uVar1 < -0x34) goto LAB_011c11c0;
    uVar5 = (ulong)dVar7 & 0xfffffffffffff;
    if (((ulong)dVar7 & 0x7ff0000000000000) != 0) {
      uVar5 = (ulong)dVar7 & 0xfffffffffffff | 0x10000000000000;
    }
    iVar6 = (int)(uVar5 >> ((ulong)-uVar1 & 0x3f));
  }
  else {
    if (0x1f < (int)uVar1) {
LAB_011c11c0:
      iVar4 = 0;
      goto LAB_011c11ec;
    }
    uVar5 = (ulong)dVar7 & 0xfffffffffffff;
    if (((ulong)dVar7 & 0x7ff0000000000000) != 0) {
      uVar5 = (ulong)dVar7 & 0xfffffffffffff | 0x10000000000000;
    }
    iVar6 = (int)(uVar5 << ((ulong)uVar1 & 0x3f));
  }
  iVar4 = -iVar6;
  if (-1 < (long)dVar7) {
    iVar4 = iVar6;
  }
LAB_011c11ec:
  uVar5 = Debug::IsBreakOnException(*(Debug **)(param_3 + 0xb6c8),iVar4);
  *(undefined8 *)(param_3 + 0x95a0) = uVar3;
  uVar3 = 2;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar3;
}

