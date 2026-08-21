
/* v8::HandleScope::CreateHandle(v8::internal::Isolate*, unsigned long) */

void v8::HandleScope::CreateHandle(Isolate *param_1,ulong param_2)

{
  ulong *puVar1;
  
  puVar1 = *(ulong **)(param_1 + 0x95a0);
  if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
    puVar1 = (ulong *)internal::HandleScope::Extend(param_1);
  }
  *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
  *puVar1 = param_2;
  return;
}

