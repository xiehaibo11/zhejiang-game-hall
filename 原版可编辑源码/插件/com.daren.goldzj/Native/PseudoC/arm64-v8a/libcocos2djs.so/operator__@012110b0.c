
/* v8::internal::wasm::WasmImportWrapperCache::CacheKeyHash::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,
   v8::internal::Signature<v8::internal::wasm::ValueType>*> const&) const */

void __thiscall
v8::internal::wasm::WasmImportWrapperCache::CacheKeyHash::operator()
          (CacheKeyHash *this,pair *param_1)

{
  pair pVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  byte *pbVar5;
  long lVar6;
  
  puVar4 = *(ulong **)(param_1 + 8);
  pVar1 = *param_1;
  uVar2 = base::hash_combine(puVar4[1],*puVar4);
  pbVar5 = (byte *)puVar4[2];
  if (pbVar5 != pbVar5 + puVar4[1] + *puVar4) {
    lVar6 = *puVar4 + puVar4[1];
    do {
      uVar3 = base::hash_combine(0,(ulong)*pbVar5);
      uVar2 = base::hash_value(uVar2);
      uVar2 = base::hash_combine(uVar3,uVar2);
      lVar6 = lVar6 + -1;
      pbVar5 = pbVar5 + 1;
    } while (lVar6 != 0);
  }
  uVar2 = base::hash_combine(0,uVar2);
  base::hash_combine(uVar2,(ulong)(byte)pVar1);
  return;
}

