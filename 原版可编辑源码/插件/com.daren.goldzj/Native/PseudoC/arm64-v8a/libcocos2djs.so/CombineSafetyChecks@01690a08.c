
/* v8::internal::compiler::CombineSafetyChecks(v8::internal::compiler::IsSafetyCheck,
   v8::internal::compiler::IsSafetyCheck) */

undefined4 v8::internal::compiler::CombineSafetyChecks(char param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_2 != '\x01' && param_1 != '\x01') {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (param_2 != '\0' && param_1 != '\0') {
    uVar1 = uVar2;
  }
  return uVar1;
}

