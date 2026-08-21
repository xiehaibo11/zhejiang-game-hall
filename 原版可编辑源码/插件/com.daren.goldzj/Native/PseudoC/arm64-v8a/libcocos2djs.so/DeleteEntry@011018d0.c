
/* v8::internal::Dictionary<v8::internal::SimpleNumberDictionary,
   v8::internal::SimpleNumberDictionaryShape>::DeleteEntry(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SimpleNumberDictionary>, v8::internal::InternalIndex) */

void v8::internal::
     Dictionary<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>::
     DeleteEntry(undefined8 param_1,ulong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  uint *puVar3;
  ulong local_28;
  
  local_28 = *param_2;
  uVar1 = *(undefined8 *)((local_28 & 0xffffffff00000000) + 0xa8);
  SetEntry(&local_28,param_1,param_3,uVar1,uVar1,0xc0);
  uVar2 = *param_2;
  puVar3 = (uint *)(uVar2 + 7);
  *puVar3 = *puVar3 - 2 & 0xfffffffe;
  puVar3 = (uint *)(uVar2 + 0xb);
  *puVar3 = *puVar3 + 2 & 0xfffffffe;
  HashTable<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>::Shrink
            (param_1,param_2,0);
  return;
}

