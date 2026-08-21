
/* v8::internal::RuntimeProfiler::Optimize(v8::internal::JSFunction,
   v8::internal::OptimizationReason) */

void __thiscall
v8::internal::RuntimeProfiler::Optimize(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 local_28;
  undefined8 local_8;
  
  local_28 = param_2;
  local_8 = param_2;
  if (FLAG_trace_opt != '\0') {
    puVar1 = (&PTR_s_do_not_optimize_01ca6f10)[param_3 & 0xff];
    PrintF("[marking ");
    Object::ShortPrint((Object *)&local_8,(__sFILE *)waitpid);
    PrintF(" for %s recompilation, reason: %s","optimized",puVar1);
    PrintF("]\n");
  }
  JSFunction::MarkForOptimization((JSFunction *)&local_28,1);
  return;
}

