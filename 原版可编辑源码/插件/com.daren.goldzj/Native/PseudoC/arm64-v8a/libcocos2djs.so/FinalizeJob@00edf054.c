
/* v8::internal::UnoptimizedCompilationJob::FinalizeJob(v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Isolate*) */

int __thiscall
v8::internal::UnoptimizedCompilationJob::FinalizeJob
          (UnoptimizedCompilationJob *this,undefined8 param_2,Isolate *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> aPStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::PerIsolateAssertScope
            (aPStack_58,param_3);
  lVar3 = base::TimeTicks::HighResolutionNow();
  iVar2 = (**(code **)(*(long *)this + 0x18))(this,param_2,param_3);
  uVar5 = 3;
  if (iVar2 != 0) {
    uVar5 = 4;
  }
  *(undefined4 *)(this + 8) = uVar5;
  lVar4 = base::TimeTicks::HighResolutionNow();
  *(long *)(this + 0x38) = (lVar4 - lVar3) + *(long *)(this + 0x38);
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::~PerIsolateAssertScope
            (aPStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

