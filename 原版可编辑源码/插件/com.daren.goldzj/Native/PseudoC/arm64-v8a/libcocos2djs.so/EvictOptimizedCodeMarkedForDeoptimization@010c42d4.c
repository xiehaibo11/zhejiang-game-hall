
/* v8::internal::FeedbackVector::EvictOptimizedCodeMarkedForDeoptimization(v8::internal::SharedFunctionInfo,
   char const*) */

void __thiscall
v8::internal::FeedbackVector::EvictOptimizedCodeMarkedForDeoptimization
          (FeedbackVector *this,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 local_18;
  
  uVar3 = *(ulong *)this;
  uVar2 = *(uint *)(uVar3 + 7);
  if ((uVar2 & 1) != 0) {
    if (uVar2 != 3) {
      uVar3 = uVar3 & 0xffffffff00000000;
      uVar4 = (ulong)uVar2 & 0xfffffffffffffffd | uVar3;
      if ((*(uint *)((uVar3 | *(uint *)(uVar4 + 0xf)) + 7) & 1) == 0) {
        return;
      }
      if (FLAG_trace_deopt != '\0') {
        local_18 = param_2;
        PrintF("[evicting optimizing code marked for deoptimization (%s) for ",param_3);
        Object::ShortPrint((Object *)&local_18,(__sFILE *)waitpid);
        PrintF("]\n");
      }
      puVar1 = (uint *)(uVar4 + 0xf);
      if ((*(uint *)((uVar3 | *puVar1) + 7) >> 2 & 1) == 0) {
        *(uint *)((uVar3 | *puVar1) + 7) = *(uint *)((uVar3 | *puVar1) + 7) | 4;
      }
      uVar3 = *(ulong *)this;
    }
    *(undefined4 *)(uVar3 + 7) = 2;
  }
  return;
}

