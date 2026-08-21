
/* v8::Name::GetIdentityHash() */

ulong __thiscall v8::Name::GetIdentityHash(Name *this)

{
  ulong uVar1;
  long local_18;
  
  local_18 = *(long *)this;
  if ((*(uint *)(local_18 + 3) & 1) == 0) {
    uVar1 = (ulong)(*(uint *)(local_18 + 3) >> 3);
  }
  else {
    uVar1 = internal::String::ComputeAndSetHash((String *)&local_18);
  }
  return uVar1;
}

