
/* v8::internal::StringTableInsertionKey::ComputeHashField(v8::internal::String) */

uint __thiscall
v8::internal::StringTableInsertionKey::ComputeHashField(undefined8 param_1,long param_2)

{
  uint uVar1;
  long local_8;
  
  uVar1 = *(uint *)(param_2 + 3);
  if ((uVar1 & 1) != 0) {
    local_8 = param_2;
    String::ComputeAndSetHash((String *)&local_8);
    uVar1 = *(uint *)(param_2 + 3);
  }
  return uVar1;
}

