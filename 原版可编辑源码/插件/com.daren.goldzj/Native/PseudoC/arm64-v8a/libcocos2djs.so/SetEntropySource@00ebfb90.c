
/* v8::V8::SetEntropySource(bool (*)(unsigned char*, unsigned long)) */

void v8::V8::SetEntropySource(_func_bool_uchar_ptr_ulong *param_1)

{
  base::RandomNumberGenerator::SetEntropySource(param_1);
  return;
}

