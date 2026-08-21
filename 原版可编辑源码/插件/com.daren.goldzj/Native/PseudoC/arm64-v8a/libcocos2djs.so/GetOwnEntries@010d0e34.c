
/* v8::internal::JSReceiver::GetOwnEntries(v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::PropertyFilter, bool) */

void v8::internal::JSReceiver::GetOwnEntries(long param_1,undefined4 param_2,uint param_3)

{
  GetOwnValuesOrEntries((ulong)*(uint *)(param_1 + 4) << 0x20,param_1,param_2,param_3 & 1,1);
  return;
}

