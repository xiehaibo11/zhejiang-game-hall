
/* v8::internal::compiler::CsaLoadEliminationHelpers::IsCompatible(v8::internal::MachineRepresentation,
   v8::internal::MachineRepresentation) */

bool v8::internal::compiler::CsaLoadEliminationHelpers::IsCompatible(char param_1,char param_2)

{
  if (param_1 == param_2) {
    return true;
  }
  if ((byte)(param_1 - 6U) < 3) {
    return param_2 == '\x06' || (byte)(param_2 - 7U) < 2;
  }
  return false;
}

