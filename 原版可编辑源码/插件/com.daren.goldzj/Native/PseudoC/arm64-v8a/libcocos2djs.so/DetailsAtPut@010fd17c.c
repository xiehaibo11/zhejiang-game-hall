
/* v8::internal::Dictionary<v8::internal::GlobalDictionary,
   v8::internal::GlobalDictionaryShape>::DetailsAtPut(v8::internal::Isolate*,
   v8::internal::InternalIndex, v8::internal::PropertyDetails) */

void __thiscall
v8::internal::Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>::
DetailsAtPut(Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape> *this,
            undefined8 param_1,int param_3,uint param_4)

{
  ulong uVar1;
  ulong local_28;
  
  local_28 = *(ulong *)this & 0xffffffff00000000;
  uVar1 = local_28 | *(uint *)(*(ulong *)this + (long)(param_3 * 4 + 0x14) + 7);
  if ((param_4 >> 3 & 1) != (*(byte *)(uVar1 + 7) & 0x10) >> 4) {
    local_28 = local_28 | *(uint *)(uVar1 + 0xf);
    DependentCode::DeoptimizeDependentCodeGroup(&local_28,param_1,2);
  }
  *(uint *)(uVar1 + 7) = param_4 << 1;
  return;
}

