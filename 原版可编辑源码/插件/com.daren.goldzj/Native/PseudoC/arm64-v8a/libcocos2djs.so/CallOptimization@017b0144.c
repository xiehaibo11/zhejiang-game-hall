
/* v8::internal::CallOptimization::CallOptimization(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>) */

void __thiscall
v8::internal::CallOptimization::CallOptimization
          (CallOptimization *this,undefined8 param_2,ulong *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  this[8] = (CallOptimization)0x0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  uVar4 = *param_3;
  if ((uVar4 & 1) != 0) {
    uVar3 = uVar4 & 0xffffffff00000000;
    uVar2 = uVar3 | 7;
    if (*(short *)(uVar2 + *(uint *)(uVar4 - 1)) == 0x439) {
      if ((param_3 != (ulong *)0x0) && (*(int *)((uVar3 | *(uint *)(uVar4 + 0x17)) + 0x27) != 0x42))
      {
        uVar1 = *(uint *)((uVar3 | *(uint *)(uVar4 + 0xb)) + 3);
        if ((uVar1 != 0x84) &&
           (((uVar1 & 1) == 0 || (1 < *(ushort *)(uVar2 + *(uint *)((uVar3 | uVar1) - 1)) - 0x95))))
        {
          *(ulong **)this = param_3;
          AnalyzePossibleApiFunction();
          return;
        }
      }
    }
    else if (*(short *)(uVar2 + *(uint *)(uVar4 - 1)) == 0x4e) {
      Initialize();
      return;
    }
  }
  return;
}

