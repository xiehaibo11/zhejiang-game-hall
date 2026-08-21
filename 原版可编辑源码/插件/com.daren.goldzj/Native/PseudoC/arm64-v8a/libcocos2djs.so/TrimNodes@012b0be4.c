
/* WARNING: Removing unreachable block (ram,0x012b0c1c) */
/* v8::internal::compiler::BasicBlock::TrimNodes(std::__ndk1::__wrap_iter<v8::internal::compiler::Node**>)
    */

void __thiscall v8::internal::compiler::BasicBlock::TrimNodes(BasicBlock *this,long param_2)

{
  if (param_2 != *(long *)(this + 0x48)) {
    *(long *)(this + 0x48) = param_2;
  }
  return;
}

