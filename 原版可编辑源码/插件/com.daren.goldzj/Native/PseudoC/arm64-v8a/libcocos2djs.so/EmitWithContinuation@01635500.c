
/* v8::internal::compiler::InstructionSelector::EmitWithContinuation(unsigned int,
   v8::internal::compiler::InstructionOperand, v8::internal::compiler::FlagsContinuation*) */

void __thiscall
v8::internal::compiler::InstructionSelector::EmitWithContinuation
          (InstructionSelector *this,uint param_1,undefined8 param_3,FlagsContinuation *param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  EmitWithContinuation
            (this,param_1,0,(InstructionOperand *)0x0,1,(InstructionOperand *)&uStack_18,0,
             (InstructionOperand *)0x0,param_4);
  return;
}

