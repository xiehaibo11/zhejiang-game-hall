
/* v8::internal::DoubleToRadixCString(double, int) */

void * v8::internal::DoubleToRadixCString(double param_1,int param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  void *__dest;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  byte *pbVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double __x;
  byte abStack_901 [1100];
  byte abStack_4b5 [1101];
  long local_68;
  
  lVar3 = tpidr_el0;
  dVar13 = -param_1;
  if (0.0 <= param_1) {
    dVar13 = param_1;
  }
  __x = (double)(long)dVar13;
  dVar12 = dVar13 - __x;
  local_68 = *(long *)(lVar3 + 0x28);
  if (dVar13 == INFINITY) {
    dVar14 = INFINITY;
  }
  else if ((long)dVar13 < 0) {
    uVar10 = (ulong)dVar13 & 0xfffffffffffff;
    if (((ulong)dVar13 & 0x7ff0000000000000) != 0) {
      uVar10 = (ulong)dVar13 & 0xfffffffffffff | 0x10000000000000;
    }
    if (uVar10 == 0) {
      dVar14 = 0.0;
    }
    else {
      dVar14 = (double)((long)dVar13 + -1);
    }
  }
  else {
    dVar14 = (double)((long)dVar13 + 1);
  }
  dVar13 = (dVar14 - dVar13) * 0.5;
  if (dVar13 <= dVar12) {
    lVar5 = 0;
    lVar6 = 0x44e00000000;
    abStack_4b5[1] = 0x2e;
    do {
      dVar12 = dVar12 * (double)param_2;
      uVar7 = (uint)dVar12;
      dVar12 = dVar12 - (double)(int)uVar7;
      dVar13 = dVar13 * (double)param_2;
      abStack_4b5[lVar5 + 2] = "0123456789abcdefghijklmnopqrstuvwxyz"[(int)uVar7];
      if (((0.5 < dVar12) || (((uVar7 & 1) != 0 && (dVar12 == 0.5)))) && (1.0 < dVar13 + dVar12)) {
        iVar8 = (int)lVar5 + 0x44f;
        lVar5 = lVar6 >> 0x20;
        goto LAB_01064600;
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x100000000;
    } while (dVar13 <= dVar12);
    iVar8 = (int)lVar5 + 0x44d;
  }
  else {
LAB_01064564:
    iVar8 = 0x44c;
  }
  goto LAB_0106463c;
  while( true ) {
    lVar1 = -0x57;
    if (bVar2 < 0x3a) {
      lVar1 = -0x30;
    }
    iVar8 = iVar8 + -1;
    lVar5 = lVar6 + -1;
    if ((int)((ulong)bVar2 + lVar1) + 1 < param_2) break;
LAB_01064600:
    lVar6 = lVar5;
    bVar2 = abStack_901[lVar6];
    if (lVar6 == 0x44d) {
      if (bVar2 != 0x2e) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","\'.\' == buffer[fraction_cursor]");
      }
      __x = __x + 1.0;
      goto LAB_01064564;
    }
  }
  abStack_901[lVar6] = "0123456789abcdefghijklmnopqrstuvwxyz"[(ulong)bVar2 + lVar1 + 1];
LAB_0106463c:
  dVar12 = (double)param_2;
  dVar13 = __x / dVar12;
  uVar10 = 0x44c;
  if ((0x4330000000000000 < ((ulong)dVar13 & 0x7fc0000000000000)) &&
     (((ulong)dVar13 & 0x7ff0000000000000) != 0)) {
    lVar5 = 0x44c00000000;
    pbVar11 = abStack_4b5;
    do {
      __x = dVar13;
      dVar13 = __x / dVar12;
      *pbVar11 = 0x30;
      lVar5 = lVar5 + -0x100000000;
      if (((ulong)dVar13 & 0x7fc0000000000000) < 0x4330000000000001) break;
      pbVar11 = pbVar11 + -1;
    } while (((ulong)dVar13 & 0x7ff0000000000000) != 0);
    uVar10 = lVar5 >> 0x20;
  }
  pbVar11 = abStack_901 + uVar10 + 1;
  do {
    pbVar11 = pbVar11 + -1;
    dVar13 = fmod(__x,dVar12);
    __x = (__x - dVar13) / dVar12;
    *pbVar11 = "0123456789abcdefghijklmnopqrstuvwxyz"[(int)dVar13];
    iVar9 = (int)uVar10;
    uVar7 = iVar9 - 1;
    uVar10 = (ulong)uVar7;
  } while (0.0 < __x);
  if (param_1 < 0.0) {
    uVar7 = iVar9 - 2;
    abStack_901[(long)(int)uVar7 + 1] = 0x2d;
  }
  abStack_901[(long)iVar8 + 1] = 0;
  uVar10 = (ulong)(int)((iVar8 - uVar7) + 1);
  __dest = operator_new__(uVar10,(nothrow_t *)&std::nothrow);
  if (__dest == (void *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    __dest = operator_new__(uVar10,(nothrow_t *)&std::nothrow);
    if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  memcpy(__dest,abStack_901 + (long)(int)uVar7 + 1,uVar10);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return __dest;
}

