
/* v8::internal::compiler::GraphAssembler::BasicBlockUpdater::StartBlock(v8::internal::compiler::BasicBlock*)
    */

void __thiscall
v8::internal::compiler::GraphAssembler::BasicBlockUpdater::StartBlock
          (BasicBlockUpdater *this,BasicBlock *param_1)

{
  undefined8 uVar1;
  
  BasicBlock::ResetRPOInfo(param_1);
  *(BasicBlock **)(this + 8) = param_1;
  *(BasicBlock **)(this + 0x10) = param_1;
  this[0x88] = *(BasicBlockUpdater *)(param_1 + 8);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x20) = uVar1;
  return;
}

