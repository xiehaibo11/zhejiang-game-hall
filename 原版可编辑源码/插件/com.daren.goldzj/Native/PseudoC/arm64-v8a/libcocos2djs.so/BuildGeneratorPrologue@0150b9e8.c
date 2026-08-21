
/* v8::internal::interpreter::BytecodeGenerator::BuildGeneratorPrologue() */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildGeneratorPrologue(BytecodeGenerator *this)

{
  undefined8 uVar1;
  
  uVar1 = BytecodeArrayBuilder::AllocateJumpTable
                    ((BytecodeArrayBuilder *)(this + 0x18),
                     *(int *)(*(long *)(*(long *)(this + 0x1d0) + 0x10) + 0x18),0);
  *(undefined8 *)(this + 0x328) = uVar1;
  BytecodeArrayBuilder::SwitchOnGeneratorState
            ((BytecodeArrayBuilder *)(this + 0x18),*(undefined4 *)(this + 0x308),uVar1);
  return;
}

