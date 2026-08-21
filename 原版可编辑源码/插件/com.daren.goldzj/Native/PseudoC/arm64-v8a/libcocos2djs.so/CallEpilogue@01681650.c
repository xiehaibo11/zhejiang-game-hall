
/* v8::internal::compiler::CodeAssembler::CallEpilogue() */

void __thiscall v8::internal::compiler::CodeAssembler::CallEpilogue(CodeAssembler *this)

{
  if (*(long **)(*(long *)this + 0x90) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01681664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(*(long *)this + 0x90) + 0x30))();
    return;
  }
  return;
}

