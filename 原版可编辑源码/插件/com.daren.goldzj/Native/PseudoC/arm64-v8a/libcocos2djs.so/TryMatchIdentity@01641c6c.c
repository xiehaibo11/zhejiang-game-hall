
/* v8::internal::compiler::InstructionSelector::TryMatchIdentity(unsigned char const*) */

bool v8::internal::compiler::InstructionSelector::TryMatchIdentity(uchar *param_1)

{
  if (((((*param_1 == '\0') && (param_1[1] == '\x01')) && (param_1[2] == '\x02')) &&
      (((param_1[3] == '\x03' && (param_1[4] == '\x04')) &&
       ((param_1[5] == '\x05' && ((param_1[6] == '\x06' && (param_1[7] == '\a')))))))) &&
     ((param_1[8] == '\b' &&
      (((((param_1[9] == '\t' && (param_1[10] == '\n')) && (param_1[0xb] == '\v')) &&
        ((param_1[0xc] == '\f' && (param_1[0xd] == '\r')))) && (param_1[0xe] == '\x0e')))))) {
    return param_1[0xf] == '\x0f';
  }
  return false;
}

