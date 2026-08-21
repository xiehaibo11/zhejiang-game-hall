
/* v8::internal::interpreter::BytecodeGenerator::BuildSuspendPoint(int) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildSuspendPoint(BytecodeGenerator *this,int param_1)

{
  BytecodeArrayBuilder *this_00;
  int iVar1;
  uint uVar2;
  
  if (this[0x1b2] != (BytecodeGenerator)0x0) {
    return;
  }
  iVar1 = *(int *)(this + 0x330);
  uVar2 = *(uint *)(this + 0x118);
  this_00 = (BytecodeArrayBuilder *)(this + 0x18);
  *(int *)(this + 0x330) = iVar1 + 1;
  if ((param_1 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
    this[0x1c0] = (BytecodeGenerator)0x1;
    *(int *)(this + 0x1c4) = param_1;
  }
  BytecodeArrayBuilder::SuspendGenerator
            (this_00,*(undefined4 *)(this + 0x308),(ulong)uVar2 << 0x20,iVar1);
  BytecodeArrayBuilder::Bind(this_00,*(BytecodeJumpTable **)(this + 0x328),iVar1);
  BytecodeArrayBuilder::ResumeGenerator(this_00,*(undefined4 *)(this + 0x308),(ulong)uVar2 << 0x20);
  return;
}

