
/* v8::internal::interpreter::BytecodeGenerator::AllocateBlockCoverageSlotIfEnabled(v8::internal::AstNode*,
   v8::internal::SourceRangeKind) */

undefined8
v8::internal::interpreter::BytecodeGenerator::AllocateBlockCoverageSlotIfEnabled(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x208) != 0) {
    uVar1 = BlockCoverageBuilder::AllocateBlockCoverageSlot();
    return uVar1;
  }
  return 0xffffffff;
}

