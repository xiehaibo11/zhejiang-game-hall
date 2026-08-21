
/* v8::internal::interpreter::BytecodeGenerator::AllocateNaryBlockCoverageSlotIfEnabled(v8::internal::NaryOperation*,
   unsigned long) */

undefined8 __thiscall
v8::internal::interpreter::BytecodeGenerator::AllocateNaryBlockCoverageSlotIfEnabled
          (BytecodeGenerator *this,NaryOperation *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (*(BlockCoverageBuilder **)(this + 0x208) != (BlockCoverageBuilder *)0x0) {
    uVar1 = BlockCoverageBuilder::AllocateNaryBlockCoverageSlot
                      (*(BlockCoverageBuilder **)(this + 0x208),param_1,param_2);
    return uVar1;
  }
  return 0xffffffff;
}

