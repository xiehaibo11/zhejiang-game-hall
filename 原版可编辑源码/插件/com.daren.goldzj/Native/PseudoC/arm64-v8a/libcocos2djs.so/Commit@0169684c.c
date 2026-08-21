
/* v8::internal::compiler::CompilationDependencies::Commit(v8::internal::Handle<v8::internal::Code>)
    */

undefined8 __thiscall
v8::internal::compiler::CompilationDependencies::Commit
          (CompilationDependencies *this,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  CompilationDependencies *pCVar3;
  long *plVar4;
  CompilationDependencies *pCVar5;
  long *plVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  
  pCVar5 = this + 0x10;
  plVar6 = *(long **)pCVar5;
  if (plVar6 != (long *)0x0) {
    do {
      plVar4 = (long *)plVar6[1];
      uVar1 = (**(code **)*plVar4)(plVar4);
      pCVar3 = pCVar5;
      if ((uVar1 & 1) == 0) goto LAB_01696930;
      (**(code **)(*plVar4 + 8))(plVar4);
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
    for (plVar6 = *(long **)pCVar5; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      plVar4 = (long *)plVar6[1];
      uVar1 = (**(code **)*plVar4)(plVar4);
      if ((uVar1 & 1) == 0) goto LAB_01696940;
      local_50 = 0;
      uStack_48 = param_2;
      (**(code **)(*plVar4 + 0x10))(plVar4,&local_50);
    }
  }
  pCVar3 = pCVar5;
  if (FLAG_stress_gc_during_compilation != '\0') {
    Heap::PreciseCollectAllGarbage((Heap *)(**(long **)(this + 8) + 0x8850),0,0x15,4);
  }
  do {
    pCVar3 = *(CompilationDependencies **)pCVar3;
  } while (pCVar3 != (CompilationDependencies *)0x0);
  uVar2 = 1;
  goto LAB_0169694c;
LAB_01696940:
  do {
    pCVar3 = *(CompilationDependencies **)pCVar3;
  } while (pCVar3 != (CompilationDependencies *)0x0);
  goto LAB_01696948;
LAB_01696930:
  do {
    pCVar3 = *(CompilationDependencies **)pCVar3;
  } while (pCVar3 != (CompilationDependencies *)0x0);
LAB_01696948:
  uVar2 = 0;
LAB_0169694c:
  *(long *)pCVar5 = 0;
  return uVar2;
}

