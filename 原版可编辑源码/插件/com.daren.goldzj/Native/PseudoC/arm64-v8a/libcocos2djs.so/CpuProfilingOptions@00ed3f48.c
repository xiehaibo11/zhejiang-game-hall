
/* v8::CpuProfilingOptions::CpuProfilingOptions(v8::CpuProfilingMode, unsigned int, int,
   v8::MaybeLocal<v8::Context>) */

void __thiscall
v8::CpuProfilingOptions::CpuProfilingOptions
          (CpuProfilingOptions *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          ulong *param_5)

{
  undefined8 uVar1;
  
  *(undefined4 *)this = param_2;
  *(undefined4 *)(this + 4) = param_3;
  *(undefined4 *)(this + 8) = param_4;
  *(undefined8 *)(this + 0x10) = 0;
  if (param_5 != (ulong *)0x0) {
    uVar1 = V8::GlobalizeReference((Isolate *)((ulong)*(uint *)((long)param_5 + 4) << 0x20),param_5)
    ;
    *(undefined8 *)(this + 0x10) = uVar1;
  }
  return;
}

