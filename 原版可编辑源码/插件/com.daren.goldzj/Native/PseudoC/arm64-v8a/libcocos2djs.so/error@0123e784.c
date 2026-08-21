
/* v8::internal::wasm::Decoder::error(unsigned char const*, char const*) */

void __thiscall v8::internal::wasm::Decoder::error(Decoder *this,uchar *param_1,char *param_2)

{
  errorf((uint)this,
         (char *)(ulong)(uint)(*(int *)(this + 0x20) + ((int)param_1 - *(int *)(this + 8))),"%s",
         param_2);
  return;
}

