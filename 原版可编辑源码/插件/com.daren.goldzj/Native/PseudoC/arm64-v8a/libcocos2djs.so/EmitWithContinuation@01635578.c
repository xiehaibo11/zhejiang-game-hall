
/* v8::internal::compiler::InstructionSelector::EmitWithContinuation(unsigned int,
   v8::internal::compiler::InstructionOperand, v8::internal::compiler::InstructionOperand,
   v8::internal::compiler::InstructionOperand, v8::internal::compiler::FlagsContinuation*) */

void __thiscall
v8::internal::compiler::InstructionSelector::EmitWithContinuation
          (InstructionSelector *this,uint param_1,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,FlagsContinuation *param_6)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = param_3;
  uStack_20 = param_4;
  local_18 = param_5;
  EmitWithContinuation
            (this,param_1,0,(InstructionOperand *)0x0,3,(InstructionOperand *)&local_28,0,
             (InstructionOperand *)0x0,param_6);
  return;
}

