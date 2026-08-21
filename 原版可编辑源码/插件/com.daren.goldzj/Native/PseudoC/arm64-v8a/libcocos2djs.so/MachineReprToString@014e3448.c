
/* v8::internal::MachineReprToString(v8::internal::MachineRepresentation) */

undefined * v8::internal::MachineReprToString(byte param_1)

{
  if (param_1 < 0xe) {
    return (&PTR_s_kMachNone_01cc6798)[(char)param_1];
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

