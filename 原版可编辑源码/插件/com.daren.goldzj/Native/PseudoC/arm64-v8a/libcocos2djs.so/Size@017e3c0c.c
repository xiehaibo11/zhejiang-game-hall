
/* v8::internal::wasm::LocalDeclEncoder::Size() const */

long __thiscall v8::internal::wasm::LocalDeclEncoder::Size(LocalDeclEncoder *this)

{
  long lVar1;
  uint *puVar2;
  ulong uVar3;
  
  puVar2 = *(uint **)(this + 8);
  lVar1 = 0;
  uVar3 = (long)*(uint **)(this + 0x10) - (long)puVar2 >> 3;
  do {
    uVar3 = uVar3 >> 7;
    lVar1 = lVar1 + 1;
  } while (uVar3 != 0);
  for (; puVar2 != *(uint **)(this + 0x10); puVar2 = puVar2 + 2) {
    uVar3 = (ulong)*puVar2;
    lVar1 = lVar1 + 1;
    do {
      uVar3 = uVar3 >> 7;
      lVar1 = lVar1 + 1;
    } while (uVar3 != 0);
  }
  return lVar1;
}

