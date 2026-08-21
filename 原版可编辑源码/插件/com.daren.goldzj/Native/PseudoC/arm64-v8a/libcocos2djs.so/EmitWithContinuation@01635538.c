
/* v8::internal::compiler::InstructionSelector::EmitWithContinuation(unsigned int,
   v8::internal::compiler::InstructionOperand, v8::internal::compiler::InstructionOperand,
   v8::internal::compiler::FlagsContinuation*) */

void __thiscall
v8::internal::compiler::InstructionSelector::EmitWithContinuation
          (InstructionSelector *this,uint param_1,undefined8 param_3,undefined8 param_4,
          FlagsContinuation *param_5)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = param_3;
  uStack_18 = param_4;
  EmitWithContinuation
            (this,param_1,0,(InstructionOperand *)0x0,2,(InstructionOperand *)&local_20,0,
             (InstructionOperand *)0x0,param_5);
  return;
}

