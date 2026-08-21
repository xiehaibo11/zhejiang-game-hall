
/* v8::internal::HandleScope::Extend(v8::internal::Isolate*) */

void * v8::internal::HandleScope::Extend(Isolate *param_1)

{
  ulong uVar1;
  long *plVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  
  if (*(int *)(param_1 + 0x95b0) == *(int *)(param_1 + 0x95b4)) {
    Utils::ReportApiFailure
              ("v8::HandleScope::CreateHandle()","Cannot create a handle without a HandleScope");
    pvVar5 = (void *)0x0;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x95c0);
    pvVar5 = *(void **)(param_1 + 0x95a0);
    if (*(long *)(lVar6 + 0x18) == 0) {
      pvVar3 = *(void **)(param_1 + 0x95a8);
    }
    else {
      pvVar3 = (void *)(*(long *)(*(long *)(lVar6 + 8) + *(long *)(lVar6 + 0x18) * 8 + -8) + 0x1ff0)
      ;
      if (*(void **)(param_1 + 0x95a8) != pvVar3) {
        *(void **)(param_1 + 0x95a8) = pvVar3;
      }
    }
    if (pvVar3 == pvVar5) {
      pvVar5 = *(void **)(lVar6 + 0x68);
      if ((pvVar5 == (void *)0x0) &&
         (pvVar5 = operator_new__(0x1ff0,(nothrow_t *)&std::nothrow), pvVar5 == (void *)0x0)) {
        plVar2 = (long *)V8::GetCurrentPlatform();
        (**(code **)(*plVar2 + 0x18))();
        pvVar5 = operator_new__(0x1ff0,(nothrow_t *)&std::nothrow);
        if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
        }
      }
      lVar7 = *(long *)(lVar6 + 0x18);
      *(undefined8 *)(lVar6 + 0x68) = 0;
      if (lVar7 == *(long *)(lVar6 + 0x10)) {
        uVar1 = lVar7 << 1;
        if ((ulong)(lVar7 << 1) < 9) {
          uVar1 = 8;
        }
        uVar4 = uVar1 << 3;
        if (uVar1 >> 0x3d != 0) {
          uVar4 = 0xffffffffffffffff;
        }
        pvVar3 = operator_new__(uVar4);
        if (lVar7 != 0) {
          memmove(pvVar3,*(void **)(lVar6 + 8),lVar7 << 3);
        }
        if (*(void **)(lVar6 + 8) != (void *)0x0) {
          operator_delete__(*(void **)(lVar6 + 8));
        }
        lVar7 = *(long *)(lVar6 + 0x18);
        *(void **)(lVar6 + 8) = pvVar3;
        *(ulong *)(lVar6 + 0x10) = uVar1;
      }
      else {
        pvVar3 = *(void **)(lVar6 + 8);
      }
      *(void **)((long)pvVar3 + lVar7 * 8) = pvVar5;
      *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 1;
      *(long *)(param_1 + 0x95a8) = (long)pvVar5 + 0x1ff0;
    }
  }
  return pvVar5;
}

