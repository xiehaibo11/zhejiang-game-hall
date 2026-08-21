
/* v8::internal::OptimizedCompilationJob::FinalizeJob(v8::internal::Isolate*) */

int __thiscall
v8::internal::OptimizedCompilationJob::FinalizeJob(OptimizedCompilationJob *this,Isolate *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> aPStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::PerIsolateAssertScope
            (aPStack_48,param_1);
  lVar3 = base::TimeTicks::HighResolutionNow();
  iVar2 = (**(code **)(*(long *)this + 0x20))(this,param_1);
  uVar5 = 3;
  if (iVar2 != 0) {
    uVar5 = 4;
  }
  *(undefined4 *)(this + 8) = uVar5;
  lVar4 = base::TimeTicks::HighResolutionNow();
  *(long *)(this + 0x30) = (lVar4 - lVar3) + *(long *)(this + 0x30);
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::~PerIsolateAssertScope
            (aPStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

