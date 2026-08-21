
/* v8::internal::ExistingCodeLogger::LogCompiledFunctions() */

void __thiscall v8::internal::ExistingCodeLogger::LogCompiledFunctions(ExistingCodeLogger *this)

{
  Isolate *pIVar1;
  int iVar2;
  ulong uVar3;
  void *__s;
  long *plVar4;
  void *__s_00;
  Isolate *pIVar5;
  ulong *puVar6;
  undefined8 *__s_01;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  size_t __n;
  ulong *puVar13;
  undefined8 *puVar14;
  long lVar15;
  Isolate *pIVar16;
  HeapObjectIterator aHStack_88 [40];
  
  pIVar16 = *(Isolate **)this;
  uVar9 = *(undefined8 *)(pIVar16 + 0x95a0);
  pIVar1 = pIVar16 + 0x8850;
  lVar10 = *(long *)(pIVar16 + 0x95a8);
  *(int *)(pIVar16 + 0x95b0) = *(int *)(pIVar16 + 0x95b0) + 1;
  uVar3 = FUN_01061184(pIVar1,0,0);
  iVar2 = (int)uVar3;
  uVar8 = -(uVar3 >> 0x1f & 1) & 0xfffffff800000000 | (uVar3 & 0xffffffff) << 3;
  if ((ulong)(long)iVar2 >> 0x3d != 0) {
    uVar8 = 0xffffffffffffffff;
  }
  __s = operator_new__(uVar8,(nothrow_t *)&std::nothrow);
  __n = (long)iVar2 << 3;
  if (__s == (void *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    __s = operator_new__(uVar8,(nothrow_t *)&std::nothrow);
    if (__s == (void *)0x0) goto LAB_0105a6d0;
  }
  if (iVar2 != 0) {
    memset(__s,0,__n);
  }
  __s_00 = operator_new__(uVar8,(nothrow_t *)&std::nothrow);
  if (__s_00 == (void *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    __s_00 = operator_new__(uVar8,(nothrow_t *)&std::nothrow);
    if (__s_00 == (void *)0x0) goto LAB_0105a6d0;
  }
  if (iVar2 == 0) {
    FUN_01061184(pIVar1,__s,__s_00);
  }
  else {
    memset(__s_00,0,__n);
    FUN_01061184(pIVar1,__s,__s_00);
    if (0 < iVar2) {
      lVar15 = 0;
      do {
        SharedFunctionInfo::EnsureSourcePositionsAvailable
                  (*(undefined8 *)this,*(undefined8 *)((long)__s + lVar15));
        uVar12 = *(uint *)(**(ulong **)((long)__s + lVar15) + 3);
        if (((uVar12 & 1) != 0) &&
           (uVar8 = **(ulong **)((long)__s + lVar15) & 0xffffffff00000000,
           *(short *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar12) - 1)) == 0x61)) {
          puVar13 = *(ulong **)((long)__s + lVar15);
          uVar8 = *puVar13;
          pIVar5 = *(Isolate **)this;
          uVar11 = uVar8 & 0xffffffff00000000;
          uVar11 = uVar11 | *(uint *)((uVar11 | *(uint *)(uVar8 + 3)) + 7);
          if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar6 = *(ulong **)(pIVar5 + 0x95a0);
            if (puVar6 == *(ulong **)(pIVar5 + 0x95a8)) {
              puVar6 = (ulong *)HandleScope::Extend(pIVar5);
            }
            *(ulong **)(pIVar5 + 0x95a0) = puVar6 + 1;
            *puVar6 = uVar11;
          }
          else {
            puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar11);
          }
          LogExistingFunction(this,puVar13,puVar6,0xc);
        }
        plVar4 = (long *)Builtins::builtin_handle((Builtins *)(*(long *)this + 0x9e00),0x42);
        plVar7 = *(long **)((long)__s_00 + lVar15);
        if ((plVar7 != plVar4) &&
           (((plVar4 == (long *)0x0 || (plVar7 == (long *)0x0)) || (*plVar7 != *plVar4)))) {
          LogExistingFunction(this,*(undefined8 *)((long)__s + lVar15),plVar7,0xf);
        }
        lVar15 = lVar15 + 8;
      } while ((uVar3 & 0xffffffff) * 8 - lVar15 != 0);
    }
  }
  HeapObjectIterator::HeapObjectIterator(aHStack_88,pIVar1,0);
  uVar3 = HeapObjectIterator::Next(aHStack_88);
  uVar8 = 0;
  iVar2 = (int)uVar3;
  while (uVar12 = (uint)uVar8, iVar2 != 0) {
    if (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x436) {
      uVar12 = uVar12 + 1;
    }
    uVar8 = (ulong)uVar12;
    uVar3 = HeapObjectIterator::Next(aHStack_88);
    iVar2 = (int)uVar3;
  }
  HeapObjectIterator::~HeapObjectIterator(aHStack_88);
  uVar3 = -(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3;
  if ((ulong)(long)(int)uVar12 >> 0x3d != 0) {
    uVar3 = 0xffffffffffffffff;
  }
  __s_01 = operator_new__(uVar3,(nothrow_t *)&std::nothrow);
  if (__s_01 == (undefined8 *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    __s_01 = operator_new__(uVar3,(nothrow_t *)&std::nothrow);
    if (__s_01 == (undefined8 *)0x0) {
LAB_0105a6d0:
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  if (uVar12 != 0) {
    memset(__s_01,0,(long)(int)uVar12 << 3);
  }
  HeapObjectIterator::HeapObjectIterator(aHStack_88,pIVar1,0);
  uVar3 = HeapObjectIterator::Next(aHStack_88);
  if ((int)uVar3 != 0) {
    iVar2 = 0;
    do {
      if (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x436) {
        if (__s_01 != (undefined8 *)0x0) {
          if (*(CanonicalHandleScope **)(pIVar16 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar13 = *(ulong **)(pIVar16 + 0x95a0);
            if (puVar13 == *(ulong **)(pIVar16 + 0x95a8)) {
              puVar13 = (ulong *)HandleScope::Extend(pIVar16);
            }
            *(ulong **)(pIVar16 + 0x95a0) = puVar13 + 1;
            *puVar13 = uVar3;
          }
          else {
            puVar13 = (ulong *)CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(pIVar16 + 0x95b8),uVar3);
          }
          __s_01[iVar2] = puVar13;
        }
        iVar2 = iVar2 + 1;
      }
      uVar3 = HeapObjectIterator::Next(aHStack_88);
    } while ((int)uVar3 != 0);
  }
  HeapObjectIterator::~HeapObjectIterator(aHStack_88);
  puVar14 = __s_01;
  if ((int)uVar12 < 1) {
    if (__s_01 == (undefined8 *)0x0) goto LAB_0105a664;
  }
  else {
    do {
      wasm::NativeModule::LogWasmCodes
                ((NativeModule *)
                 **(undefined8 **)
                   (*(long *)((*(ulong *)*puVar14 & 0xffffffff00000000 |
                              (ulong)*(uint *)(*(ulong *)*puVar14 + 0xb)) + 3) + 0x18),
                 *(Isolate **)this);
      uVar8 = uVar8 - 1;
      puVar14 = puVar14 + 1;
    } while (uVar8 != 0);
  }
  operator_delete__(__s_01);
LAB_0105a664:
  if (__s_00 != (void *)0x0) {
    operator_delete__(__s_00);
  }
  if (__s != (void *)0x0) {
    operator_delete__(__s);
  }
  if (pIVar16 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar16 + 0x95a0) = uVar9;
    *(int *)(pIVar16 + 0x95b0) = *(int *)(pIVar16 + 0x95b0) + -1;
    if (*(long *)(pIVar16 + 0x95a8) != lVar10) {
      *(long *)(pIVar16 + 0x95a8) = lVar10;
      HandleScope::DeleteExtensions(pIVar16);
    }
  }
  return;
}

