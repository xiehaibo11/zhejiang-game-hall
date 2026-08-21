
/* v8::internal::CalcLSPairDataSize(v8::internal::LoadStorePairOp) */

undefined8 v8::internal::CalcLSPairDataSize(int param_1)

{
  if (param_1 < -0x7bc00000) {
    if ((param_1 != -0x80000000) && (param_1 != -0x7fc00000)) {
      if (param_1 == -0x7c000000) {
        return 4;
      }
      return 2;
    }
  }
  else {
    if (param_1 == -0x7bc00000) {
      return 4;
    }
    if ((param_1 != 0x44400000) && (param_1 != 0x44000000)) {
      return 2;
    }
  }
  return 3;
}

