
/* v8::internal::wasm::SectionName(v8::internal::wasm::SectionCode) */

char * v8::internal::wasm::SectionName(byte param_1)

{
  if (param_1 < 0x12) {
    return *(char **)(&DAT_01cc9e78 + (long)(char)param_1 * 8);
  }
  return "<unknown>";
}

