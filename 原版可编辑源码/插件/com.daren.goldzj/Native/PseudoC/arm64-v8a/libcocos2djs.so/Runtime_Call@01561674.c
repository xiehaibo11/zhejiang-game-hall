
/* v8::internal::Runtime_Call(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_Call(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  uint uVar3;
  void *__s;
  long *plVar4;
  Isolate *pIVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar6 = FUN_01561858(param_1,param_2,param_3);
    return uVar6;
  }
  uVar3 = param_1 - 2;
  uVar7 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3;
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if ((ulong)(long)(int)uVar3 >> 0x3d != 0) {
    uVar7 = 0xffffffffffffffff;
  }
  __s = operator_new__(uVar7,(nothrow_t *)&std::nothrow);
  if (__s == (void *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    __s = operator_new__(uVar7,(nothrow_t *)&std::nothrow);
    if (__s == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  if ((uVar3 != 0) && (memset(__s,0,(long)(int)uVar3 << 3), 0 < (int)uVar3)) {
    uVar7 = (ulong)uVar3;
    if (uVar3 < 4) {
      uVar8 = 0;
    }
    else {
      iVar11 = 0;
      iVar12 = 1;
      uVar8 = uVar7 & 0xfffffffc;
      plVar4 = (long *)((long)__s + 0x10);
      uVar9 = uVar8;
      do {
        iVar13 = iVar11 * 8;
        iVar14 = iVar12 * 8;
        iVar11 = iVar11 + 4;
        iVar12 = iVar12 + 4;
        uVar9 = uVar9 - 4;
        plVar4[-1] = (long)param_2 - (long)(iVar14 + 0x10);
        plVar4[-2] = (long)param_2 - (long)(iVar13 + 0x10);
        plVar4[1] = (long)param_2 - (long)(iVar14 + 0x20);
        *plVar4 = (long)param_2 - (long)(iVar13 + 0x20);
        plVar4 = plVar4 + 4;
      } while (uVar9 != 0);
      if (uVar8 == uVar7) goto LAB_015617b0;
    }
    iVar11 = (int)uVar8 * 8 + 0x10;
    do {
      *(long *)((long)__s + uVar8 * 8) = (long)param_2 - (long)iVar11;
      uVar8 = uVar8 + 1;
      iVar11 = iVar11 + 8;
    } while (uVar7 != uVar8);
  }
LAB_015617b0:
  pIVar5 = (Isolate *)Execution::Call(param_3,param_2,param_2 + -1,uVar3,__s);
  pIVar1 = param_3 + 0x180;
  if (pIVar5 != (Isolate *)0x0) {
    pIVar1 = pIVar5;
  }
  uVar10 = *(undefined8 *)pIVar1;
  if (__s != (void *)0x0) {
    operator_delete__(__s);
  }
  if (param_3 != (Isolate *)0x0) {
    *(undefined8 *)(param_3 + 0x95a0) = uVar6;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
  }
  return uVar10;
}

