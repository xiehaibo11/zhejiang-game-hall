
/* v8::internal::RegExpKey::IsMatch(v8::internal::Object) */

bool __thiscall v8::internal::RegExpKey::IsMatch(RegExpKey *this,ulong param_2)

{
  ulong uVar1;
  ulong local_28;
  
  local_28 = **(ulong **)(this + 0x10);
  if (*(uint *)(param_2 + 0xb) != (uint)local_28) {
    if (((*(ushort *)((local_28 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_28 - 1)) < 0x20)
        && (*(ushort *)
             ((param_2 & 0xffffffff00000000 | 7) +
             (ulong)*(uint *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0xb)) - 1))
            < 0x20)) || (uVar1 = String::SlowEquals((String *)&local_28), (uVar1 & 1) == 0)) {
      return false;
    }
  }
  return *(int *)(param_2 + 0xf) == *(int *)(this + 0x18);
}

