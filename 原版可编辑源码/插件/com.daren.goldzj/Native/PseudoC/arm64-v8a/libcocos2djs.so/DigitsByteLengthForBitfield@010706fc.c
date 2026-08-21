
/* v8::internal::BigInt::DigitsByteLengthForBitfield(unsigned int) */

uint v8::internal::BigInt::DigitsByteLengthForBitfield(uint param_1)

{
  return param_1 >> 1 & 0x3fffffff;
}

