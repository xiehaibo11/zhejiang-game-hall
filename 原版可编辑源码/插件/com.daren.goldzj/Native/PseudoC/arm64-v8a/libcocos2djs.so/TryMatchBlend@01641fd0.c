
/* v8::internal::compiler::InstructionSelector::TryMatchBlend(unsigned char const*) */

bool v8::internal::compiler::InstructionSelector::TryMatchBlend(uchar *param_1)

{
  if ((((((*param_1 & 0xf) == 0) && ((param_1[1] & 0xf) == 1)) && ((param_1[2] & 0xf) == 2)) &&
      ((((param_1[3] & 0xf) == 3 && ((param_1[4] & 0xf) == 4)) &&
       (((param_1[5] & 0xf) == 5 && (((param_1[6] & 0xf) == 6 && ((param_1[7] & 0xf) == 7)))))))) &&
     (((param_1[8] & 0xf) == 8 &&
      ((((((param_1[9] & 0xf) == 9 && ((param_1[10] & 0xf) == 10)) && ((param_1[0xb] & 0xf) == 0xb))
        && (((param_1[0xc] & 0xf) == 0xc && ((param_1[0xd] & 0xf) == 0xd)))) &&
       ((param_1[0xe] & 0xf) == 0xe)))))) {
    return ((param_1[0xf] ^ 0xff) & 0xf) == 0;
  }
  return false;
}

