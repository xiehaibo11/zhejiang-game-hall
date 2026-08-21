
/* v8::internal::compiler::BasicBlock::ResetRPOInfo() */

void __thiscall v8::internal::compiler::BasicBlock::ResetRPOInfo(BasicBlock *this)

{
  *(undefined8 *)this = 0xffffffffffffffff;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  return;
}

