
/* v8::internal::OptimizedCompilationJob::ExecuteJob(v8::internal::RuntimeCallStats*) */

int __thiscall
v8::internal::OptimizedCompilationJob::ExecuteJob
          (OptimizedCompilationJob *this,RuntimeCallStats *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
  lVar2 = base::TimeTicks::HighResolutionNow();
  iVar1 = (**(code **)(*(long *)this + 0x18))(this,param_1);
  uVar4 = 2;
  if (iVar1 != 0) {
    uVar4 = 4;
  }
  *(undefined4 *)(this + 8) = uVar4;
  lVar3 = base::TimeTicks::HighResolutionNow();
  *(long *)(this + 0x28) = (lVar3 - lVar2) + *(long *)(this + 0x28);
  return iVar1;
}

