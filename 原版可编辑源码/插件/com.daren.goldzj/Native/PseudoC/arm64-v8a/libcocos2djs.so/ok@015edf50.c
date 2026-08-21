
/* v8::internal::wasm::ModuleDecoder::ok() */

bool __thiscall v8::internal::wasm::ModuleDecoder::ok(ModuleDecoder *this)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *(byte *)(*(long *)(this + 8) + 0x30);
  if ((bVar1 & 1) == 0) {
    uVar2 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar2 = *(ulong *)(*(long *)(this + 8) + 0x38);
  }
  return uVar2 == 0;
}

