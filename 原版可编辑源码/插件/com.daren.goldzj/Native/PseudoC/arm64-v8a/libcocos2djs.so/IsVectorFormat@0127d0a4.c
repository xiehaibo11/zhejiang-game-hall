
/* v8::internal::IsVectorFormat(v8::internal::VectorFormat) */

bool v8::internal::IsVectorFormat(int param_1)

{
  return 3 < (param_1 + 0xf0000000U >> 0x16 | param_1 << 10);
}

