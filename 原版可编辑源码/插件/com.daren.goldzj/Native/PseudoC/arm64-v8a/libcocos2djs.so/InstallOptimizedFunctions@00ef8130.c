
/* v8::internal::OptimizingCompileDispatcher::InstallOptimizedFunctions() */

void __thiscall
v8::internal::OptimizingCompileDispatcher::InstallOptimizedFunctions
          (OptimizingCompileDispatcher *this)

{
  Mutex *this_00;
  Isolate *pIVar1;
  ulong *puVar2;
  long lVar3;
  Isolate *pIVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  OptimizedCompilationJob *pOVar8;
  ulong local_68;
  
  pIVar4 = *(Isolate **)this;
  this_00 = (Mutex *)(this + 0x78);
  uVar5 = *(undefined8 *)(pIVar4 + 0x95a0);
  lVar6 = *(long *)(pIVar4 + 0x95a8);
  *(int *)(pIVar4 + 0x95b0) = *(int *)(pIVar4 + 0x95b0) + 1;
  base::Mutex::Lock(this_00);
  lVar3 = *(long *)(this + 0x70);
  while (lVar3 != 0) {
    uVar7 = *(ulong *)(this + 0x68);
    pOVar8 = *(OptimizedCompilationJob **)
              (*(long *)((long)*(undefined8 **)(this + 0x50) + (uVar7 >> 6 & 0x3fffffffffffff8)) +
              (uVar7 & 0x1ff) * 8);
    *(ulong *)(this + 0x68) = uVar7 + 1;
    *(long *)(this + 0x70) = lVar3 + -1;
    if (0x3ff < uVar7 + 1) {
      operator_delete((void *)**(undefined8 **)(this + 0x50));
      *(long *)(this + 0x50) = *(long *)(this + 0x50) + 8;
      *(long *)(this + 0x68) = *(long *)(this + 0x68) + -0x200;
    }
    base::Mutex::Unlock(this_00);
    pIVar1 = *(Isolate **)this;
    uVar7 = **(ulong **)(*(long *)(pOVar8 + 0x18) + 0x20);
    if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar1 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar1);
      }
      *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar7;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar7);
      uVar7 = *puVar2;
    }
    local_68 = uVar7;
    uVar7 = JSFunction::HasOptimizedCode((JSFunction *)&local_68);
    if ((uVar7 & 1) == 0) {
      Compiler::FinalizeOptimizedCompilationJob(pOVar8,*(Isolate **)this);
    }
    else {
      if (FLAG_trace_concurrent_recompilation != '\0') {
        PrintF("  ** Aborting compilation for ");
        local_68 = *puVar2;
        Object::ShortPrint((Object *)&local_68,(__sFILE *)waitpid);
        PrintF(" as it has already been optimized.\n");
      }
      (**(code **)(*(long *)pOVar8 + 8))(pOVar8);
    }
    base::Mutex::Lock(this_00);
    lVar3 = *(long *)(this + 0x70);
  }
  base::Mutex::Unlock(this_00);
  if (pIVar4 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar4 + 0x95a0) = uVar5;
    *(int *)(pIVar4 + 0x95b0) = *(int *)(pIVar4 + 0x95b0) + -1;
    if (*(long *)(pIVar4 + 0x95a8) != lVar6) {
      *(long *)(pIVar4 + 0x95a8) = lVar6;
      HandleScope::DeleteExtensions(pIVar4);
    }
  }
  return;
}

