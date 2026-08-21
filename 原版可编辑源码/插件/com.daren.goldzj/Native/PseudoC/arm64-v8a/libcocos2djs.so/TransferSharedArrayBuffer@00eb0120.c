
/* v8::ValueDeserializer::TransferSharedArrayBuffer(unsigned int, v8::Local<v8::SharedArrayBuffer>)
    */

void v8::ValueDeserializer::TransferSharedArrayBuffer(long *param_1)

{
  if (*(char *)(*param_1 + 0x48) == '\0') {
    internal::ValueDeserializer::TransferArrayBuffer((ValueDeserializer *)(*param_1 + 8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!private_->has_aborted");
}

