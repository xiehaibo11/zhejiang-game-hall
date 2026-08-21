
/* v8::internal::OrderedHashMap::GetHash(v8::internal::Isolate*, unsigned long) */

ulong v8::internal::OrderedHashMap::GetHash(Isolate *param_1,ulong param_2)

{
  ulong uVar1;
  ulong local_28;
  
  uVar1 = Object::GetSimpleHash(param_2);
  if ((uVar1 & 1) != 0) {
    local_28 = param_2;
    uVar1 = JSReceiver::GetIdentityHash((JSReceiver *)&local_28);
    if (((uVar1 & 1) != 0) && ((int)uVar1 == *(int *)(param_1 + 0xa0))) {
      uVar1 = 0xfffffffffffffffe;
    }
  }
  return uVar1;
}

