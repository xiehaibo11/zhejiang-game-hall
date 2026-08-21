
/* v8::internal::UnoptimizedCompilationJob::ExecuteJob() */

int __thiscall v8::internal::UnoptimizedCompilationJob::ExecuteJob(UnoptimizedCompilationJob *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
  lVar2 = base::TimeTicks::HighResolutionNow();
  iVar1 = (**(code **)(*(long *)this + 0x10))(this);
  uVar4 = 2;
  if (iVar1 != 0) {
    uVar4 = 4;
  }
  *(undefined4 *)(this + 8) = uVar4;
  lVar3 = base::TimeTicks::HighResolutionNow();
  *(long *)(this + 0x30) = (lVar3 - lVar2) + *(long *)(this + 0x30);
  return iVar1;
}

