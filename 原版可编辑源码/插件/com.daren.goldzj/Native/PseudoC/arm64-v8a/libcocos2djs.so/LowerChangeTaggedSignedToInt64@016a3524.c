
/* v8::internal::compiler::EffectControlLinearizer::LowerChangeTaggedSignedToInt64(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerChangeTaggedSignedToInt64
          (EffectControlLinearizer *this,Node *param_1)

{
  Node *pNVar1;
  
  pNVar1 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar1 = (Node *)(*(long *)pNVar1 + 0x10);
  }
  if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
    ChangeSmiToIntPtr(this,*(Node **)pNVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","machine()->Is64()");
}

