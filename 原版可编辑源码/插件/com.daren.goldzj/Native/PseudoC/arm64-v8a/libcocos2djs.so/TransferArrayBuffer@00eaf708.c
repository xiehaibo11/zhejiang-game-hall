
/* v8::ValueSerializer::TransferArrayBuffer(unsigned int, v8::Local<v8::ArrayBuffer>) */

void v8::ValueSerializer::TransferArrayBuffer(long *param_1)

{
  internal::ValueSerializer::TransferArrayBuffer((ValueSerializer *)(*param_1 + 8));
  return;
}

