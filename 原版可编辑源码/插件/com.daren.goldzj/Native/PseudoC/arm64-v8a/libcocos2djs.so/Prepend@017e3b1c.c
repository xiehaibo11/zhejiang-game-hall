
/* v8::internal::wasm::LocalDeclEncoder::Prepend(v8::internal::Zone*, unsigned char const**,
   unsigned char const**) const */

void __thiscall
v8::internal::wasm::LocalDeclEncoder::Prepend
          (LocalDeclEncoder *this,Zone *param_1,uchar **param_2,uchar **param_3)

{
  uint *puVar1;
  uchar *puVar2;
  long lVar3;
  ulong uVar4;
  size_t __n;
  
  puVar1 = *(uint **)(this + 8);
  lVar3 = 0;
  uVar4 = (long)*(uint **)(this + 0x10) - (long)puVar1 >> 3;
  do {
    uVar4 = uVar4 >> 7;
    lVar3 = lVar3 + 1;
  } while (uVar4 != 0);
  __n = (long)*param_3 - (long)*param_2;
  for (; puVar1 != *(uint **)(this + 0x10); puVar1 = puVar1 + 2) {
    uVar4 = (ulong)*puVar1;
    lVar3 = lVar3 + 1;
    do {
      uVar4 = uVar4 >> 7;
      lVar3 = lVar3 + 1;
    } while (uVar4 != 0);
  }
  puVar2 = *(uchar **)(param_1 + 0x10);
  uVar4 = __n + lVar3 + 7 & 0xfffffffffffffff8;
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar2) < uVar4) {
    puVar2 = (uchar *)Zone::NewExpand(param_1,uVar4);
  }
  else {
    *(uchar **)(param_1 + 0x10) = puVar2 + uVar4;
  }
  lVar3 = Emit(this,puVar2);
  if (__n != 0) {
    memcpy(puVar2 + lVar3,*param_2,__n);
  }
  *param_2 = puVar2;
  *param_3 = puVar2 + lVar3 + __n;
  return;
}

