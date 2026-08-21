
/* v8::internal::compiler::BasicBlock::set_loop_header(v8::internal::compiler::BasicBlock*) */

void __thiscall
v8::internal::compiler::BasicBlock::set_loop_header(BasicBlock *this,BasicBlock *param_1)

{
  *(BasicBlock **)(this + 0x20) = param_1;
  return;
}

