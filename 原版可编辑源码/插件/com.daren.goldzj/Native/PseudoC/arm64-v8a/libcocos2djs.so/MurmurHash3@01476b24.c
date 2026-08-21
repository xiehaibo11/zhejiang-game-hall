
/* v8::base::RandomNumberGenerator::MurmurHash3(unsigned long) */

ulong v8::base::RandomNumberGenerator::MurmurHash3(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = (param_1 ^ param_1 >> 0x21) * -0xae502812aa7333;
  uVar1 = (uVar1 ^ uVar1 >> 0x21) * -0x3b314601e57a13ad;
  return uVar1 ^ uVar1 >> 0x21;
}

