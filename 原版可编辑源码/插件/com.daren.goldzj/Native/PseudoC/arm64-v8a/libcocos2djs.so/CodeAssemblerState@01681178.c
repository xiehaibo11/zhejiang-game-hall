
/* v8::internal::compiler::CodeAssemblerState::CodeAssemblerState(v8::internal::Isolate*,
   v8::internal::Zone*, v8::internal::compiler::CallDescriptor*, v8::internal::Code::Kind, char
   const*, v8::internal::PoisoningMitigationLevel, int) */

void __thiscall
v8::internal::compiler::CodeAssemblerState::CodeAssemblerState
          (CodeAssemblerState *this,undefined8 param_1,Zone *param_2,undefined8 param_3,
          undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  RawMachineAssembler *pRVar2;
  Graph *this_00;
  undefined1 auVar3 [16];
  
  pRVar2 = operator_new(0xa8);
  this_00 = *(Graph **)(param_2 + 0x10);
  if ((ulong)(*(long *)(param_2 + 0x18) - (long)this_00) < 0x40) {
    this_00 = (Graph *)Zone::NewExpand(param_2,0x40);
  }
  else {
    *(Graph **)(param_2 + 0x10) = this_00 + 0x40;
  }
  Graph::Graph(this_00,param_2);
  uVar1 = InstructionSelector::SupportedMachineOperatorFlags();
  auVar3 = InstructionSelector::AlignmentRequirements();
  RawMachineAssembler::RawMachineAssembler
            (pRVar2,param_1,this_00,param_3,5,uVar1,auVar3._0_8_,auVar3._8_8_ & 0xffffffff,param_7);
  *(RawMachineAssembler **)this = pRVar2;
  *(undefined4 *)(this + 8) = param_5;
  *(undefined8 *)(this + 0x10) = param_6;
  *(undefined4 *)(this + 0x18) = param_8;
  this[0x1c] = (CodeAssemblerState)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  *(Zone **)(this + 0x30) = param_2;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(CodeAssemblerState **)(this + 0x20) = this + 0x28;
  *(undefined4 *)(this + 0xb8) = 0;
  return;
}

