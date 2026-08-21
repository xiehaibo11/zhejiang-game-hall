
/* v8::internal::CallOptimization::Initialize(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSFunction>) */

void __thiscall
v8::internal::CallOptimization::Initialize(CallOptimization *this,undefined8 param_2,ulong *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_3 != (ulong *)0x0) {
    uVar3 = *param_3;
    uVar2 = uVar3 & 0xffffffff00000000;
    if (*(int *)((uVar2 | *(uint *)(uVar3 + 0x17)) + 0x27) != 0x42) {
      uVar1 = *(uint *)((uVar2 | *(uint *)(uVar3 + 0xb)) + 3);
      if ((uVar1 != 0x84) &&
         (((uVar1 & 1) == 0 ||
          (1 < *(ushort *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | uVar1) - 1)) - 0x95)))) {
        *(ulong **)this = param_3;
        AnalyzePossibleApiFunction();
        return;
      }
    }
  }
  return;
}

