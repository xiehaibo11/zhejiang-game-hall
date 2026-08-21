
/* v8::internal::compiler::GraphAssembler::Reset(v8::internal::compiler::BasicBlock*) */

void __thiscall
v8::internal::compiler::GraphAssembler::Reset(GraphAssembler *this,BasicBlock *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x30);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  if (lVar2 != 0) {
    BasicBlock::ResetRPOInfo(param_1);
    *(BasicBlock **)(lVar2 + 8) = param_1;
    *(BasicBlock **)(lVar2 + 0x10) = param_1;
    *(BasicBlock *)(lVar2 + 0x88) = param_1[8];
    *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(param_1 + 0x40);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined4 *)(lVar2 + 0x98) = 0;
    *(undefined8 *)(lVar2 + 0x20) = uVar1;
  }
  return;
}

