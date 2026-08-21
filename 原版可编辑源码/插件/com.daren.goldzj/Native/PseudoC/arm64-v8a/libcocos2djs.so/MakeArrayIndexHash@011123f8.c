
/* v8::internal::StringHasher::MakeArrayIndexHash(unsigned int, int) */

uint v8::internal::StringHasher::MakeArrayIndexHash(uint param_1,int param_2)

{
  return param_2 << 0x1b | param_1 << 3;
}

