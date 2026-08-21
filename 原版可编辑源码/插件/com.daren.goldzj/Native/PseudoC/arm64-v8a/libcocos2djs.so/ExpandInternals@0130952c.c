
/* v8::internal::compiler::BitsetType::ExpandInternals(unsigned int) */

uint v8::internal::compiler::BitsetType::ExpandInternals(uint param_1)

{
  if ((param_1 & 0x45e) != 0) {
    if ((param_1 & 0x10) != 0) {
      param_1 = param_1 | 0x45e;
    }
    if ((param_1 & 8) != 0) {
      param_1 = param_1 | 0x48;
    }
    if ((param_1 & 2) != 0) {
      param_1 = param_1 | 0x402;
    }
    if ((param_1 & 4) != 0) {
      param_1 = param_1 | 0x406;
    }
    if ((param_1 & 0x10) != 0) {
      param_1 = param_1 | 0x45e;
    }
  }
  return param_1;
}

