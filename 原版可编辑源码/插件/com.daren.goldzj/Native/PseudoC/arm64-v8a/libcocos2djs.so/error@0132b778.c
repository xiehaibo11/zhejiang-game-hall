
/* v8::internal::wasm::Decoder::error(char const*) */

void __thiscall v8::internal::wasm::Decoder::error(Decoder *this,char *param_1)

{
  errorf((uint)this,
         (char *)(ulong)(uint)(*(int *)(this + 0x20) + (*(int *)(this + 0x10) - *(int *)(this + 8)))
         ,"%s",param_1);
  return;
}

