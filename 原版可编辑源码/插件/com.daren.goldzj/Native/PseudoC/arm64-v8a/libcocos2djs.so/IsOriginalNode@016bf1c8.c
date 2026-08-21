
/* v8::internal::compiler::GraphAssembler::BasicBlockUpdater::IsOriginalNode(v8::internal::compiler::Node*)
    */

bool __thiscall
v8::internal::compiler::GraphAssembler::BasicBlockUpdater::IsOriginalNode
          (BasicBlockUpdater *this,Node *param_1)

{
  return ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) < *(ulong *)(this + 0x90);
}

