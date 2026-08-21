
/* v8::internal::DependentCode::DeoptimizeDependentCodeGroup(v8::internal::Isolate*,
   v8::internal::DependentCode::DependencyGroup) */

void v8::internal::DependentCode::DeoptimizeDependentCodeGroup(undefined8 param_1,Isolate *param_2)

{
  ulong uVar1;
  
  uVar1 = MarkCodeForDeoptimization();
  if ((uVar1 & 1) != 0) {
    Deoptimizer::DeoptimizeMarkedCode(param_2);
    return;
  }
  return;
}

