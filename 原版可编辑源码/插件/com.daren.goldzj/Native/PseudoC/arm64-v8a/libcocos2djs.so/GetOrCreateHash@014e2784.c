
/* v8::internal::GetOrCreateHash(v8::internal::Isolate*, unsigned long) */

void v8::internal::GetOrCreateHash(Isolate *param_1,ulong param_2)

{
  ulong local_18;
  
  local_18 = param_2;
  Object::GetOrCreateHash((Object *)&local_18,param_1);
  return;
}

