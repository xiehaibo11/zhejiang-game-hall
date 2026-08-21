
/* v8::internal::RuntimeProfiler::ShouldOptimize(v8::internal::JSFunction,
   v8::internal::BytecodeArray) */

undefined8 __thiscall
v8::internal::RuntimeProfiler::ShouldOptimize(RuntimeProfiler *this,ulong param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong local_18;
  
  uVar2 = param_2 & 0xffffffff00000000;
  if (*(int *)((uVar2 | *(uint *)(param_2 + 0x17)) + 0x27) != 0x42) {
    uVar1 = *(uint *)((uVar2 | *(uint *)(param_2 + 0xb)) + 3);
    if (((uVar1 != 0x84) &&
        ((((uVar1 & 1) == 0 ||
          (1 < *(ushort *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | uVar1) - 1)) - 0x95)) &&
         (uVar2 = param_2 & 0xffffffff00000000,
         (*(byte *)((uVar2 | *(uint *)(param_2 + 0x17)) + 0x17) & 0x3e) == 0)))) &&
       ((*(uint *)((uVar2 | *(uint *)((uVar2 | *(uint *)(param_2 + 0x17)) + 0xf)) + 7) & 1) == 0)) {
      return 0;
    }
  }
  uVar1 = *(uint *)((param_2 & 0xffffffff00000000 |
                    (ulong)*(uint *)((param_2 & 0xffffffff00000000 |
                                     (ulong)*(uint *)(param_2 + 0x13)) + 3)) + 0x17);
  if ((*(int *)(param_3 + 3) >> 1) / 0x4b0 + 2 <= (int)uVar1) {
    return 1;
  }
  if ((*(int *)(param_3 + 3) < 0xb4) && (this[8] == (RuntimeProfiler)0x0)) {
    return 2;
  }
  if (FLAG_trace_opt_verbose != '\0') {
    local_18 = param_2;
    PrintF("[not yet optimizing ");
    JSFunction::PrintName((JSFunction *)&local_18,(__sFILE *)waitpid);
    PrintF(", not enough ticks: %d/%d and ",(ulong)uVar1,2);
    if (this[8] == (RuntimeProfiler)0x0) {
      PrintF(" too large for small function optimization: %d/%d]\n",
             (ulong)(uint)(*(int *)(param_3 + 3) >> 1),0x5a);
    }
    else {
      PrintF("ICs changed]\n");
    }
  }
  return 0;
}

