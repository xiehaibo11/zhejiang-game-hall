
/* v8::internal::compiler::EffectControlLinearizer::LowerStringLessThan(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerStringLessThan
          (EffectControlLinearizer *this,Node *param_1)

{
  Builtins aBStack_38 [24];
  
  Builtins::CallableFor(aBStack_38,*(undefined8 *)(*(long *)this + 0x168),0x34);
  LowerStringComparison(this,(Callable *)aBStack_38,param_1);
  return;
}

