
/* v8::internal::compiler::ObjectData::IsName() const */

bool __thiscall v8::internal::compiler::ObjectData::IsName(ObjectData *this)

{
  ushort uVar1;
  ulong uVar2;
  
  if (*(int *)(this + 8) == 0) {
    return false;
  }
  if (*(int *)(this + 8) == 2) {
    uVar2 = **(ulong **)this;
    if ((uVar2 & 1) == 0) {
      return false;
    }
    uVar1 = *(ushort *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1));
  }
  else {
    uVar1 = *(ushort *)(*(long *)(this + 0x10) + 0x18);
  }
  return uVar1 < 0x41;
}

