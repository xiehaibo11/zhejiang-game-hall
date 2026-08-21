
/* v8::internal::compiler::CodeAssembler::CallPrologue() */

void __thiscall v8::internal::compiler::CodeAssembler::CallPrologue(CodeAssembler *this)

{
  if (*(long **)(*(long *)this + 0x60) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01681648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(*(long *)this + 0x60) + 0x30))();
    return;
  }
  return;
}

