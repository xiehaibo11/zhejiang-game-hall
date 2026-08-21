
/* v8::internal::compiler::EffectControlLinearizer::ChangeSmiToInt64(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::ChangeSmiToInt64
          (EffectControlLinearizer *this,Node *param_1)

{
  if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
    ChangeSmiToIntPtr(this,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","machine()->Is64()");
}

