
/* v8::internal::ValueSerializer::WriteUint32(unsigned int) */

void v8::internal::ValueSerializer::WriteUint32(uint param_1)

{
  uint in_w1;
  
  WriteVarint<unsigned_int>((ValueSerializer *)(ulong)param_1,in_w1);
  return;
}

