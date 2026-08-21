
/* v8::internal::OptimizedCompilationJob::RecordFunctionCompilation(v8::internal::CodeEventListener::LogEventsAndTags,
   v8::internal::Isolate*) const */

void __thiscall
v8::internal::OptimizedCompilationJob::RecordFunctionCompilation
          (OptimizedCompilationJob *this,undefined4 param_2,Isolate *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar3 = *(undefined8 *)(*(long *)(this + 0x18) + 0x28);
  dVar5 = (double)base::TimeDelta::InMillisecondsF((TimeDelta *)(this + 0x20));
  dVar6 = (double)base::TimeDelta::InMillisecondsF((TimeDelta *)(this + 0x28));
  dVar7 = (double)base::TimeDelta::InMillisecondsF((TimeDelta *)(this + 0x30));
  uVar2 = **(ulong **)(*(long *)(this + 0x18) + 0x18) & 0xffffffff00000000;
  uVar4 = uVar2 | *(uint *)(**(ulong **)(*(long *)(this + 0x18) + 0x18) + 0xf);
  if (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x5b) {
    uVar4 = uVar2 | *(uint *)(uVar4 + 0xb);
  }
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(param_3 + 0x95a0);
    if (puVar1 == *(ulong **)(param_3 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)(param_3 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar4;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar4);
  }
  FUN_00edf34c(dVar5 + dVar6 + dVar7,param_2,*(undefined8 *)(*(long *)(this + 0x18) + 0x18),puVar1,
               uVar3,1,param_3);
  return;
}

