
/* v8::internal::compiler::PropertyAccessBuilder::ConvertRepresentation(v8::internal::Representation)
    */

uint v8::internal::compiler::PropertyAccessBuilder::ConvertRepresentation(char param_1)

{
  if ((int)param_1 - 1U < 4) {
    return 0x8070c06 >> (ulong)(((int)param_1 - 1U) * 8 & 0x1f);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

