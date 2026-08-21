
/* v8::internal::InternalizedStringKey::IsMatch(v8::internal::String) */

uint v8::internal::InternalizedStringKey::IsMatch(long param_1)

{
  uint uVar1;
  undefined8 local_18;
  
  local_18 = **(undefined8 **)(param_1 + 0x10);
  uVar1 = String::SlowEquals((String *)&local_18);
  return uVar1 & 1;
}

