
/* v8::internal::compiler::InstructionSequence::SetRegisterConfigurationForTesting(v8::internal::RegisterConfiguration
   const*) */

void v8::internal::compiler::InstructionSequence::SetRegisterConfigurationForTesting
               (RegisterConfiguration *param_1)

{
  registerConfigurationForTesting_ = param_1;
  GetRegConfig = RegisterConfigurationForTesting;
  return;
}

