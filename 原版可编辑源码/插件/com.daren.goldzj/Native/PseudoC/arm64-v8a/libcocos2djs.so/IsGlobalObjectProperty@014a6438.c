
/* v8::internal::Variable::IsGlobalObjectProperty() const */

bool __thiscall v8::internal::Variable::IsGlobalObjectProperty(Variable *this)

{
  bool bVar1;
  
  bVar1 = false;
  if (((*(ushort *)(this + 0x28) & 0xf) < 7) &&
     ((1 << (ulong)(*(ushort *)(this + 0x28) & 0xf) & 0x74U) != 0)) {
    if (*(long *)this == 0) {
      return false;
    }
    bVar1 = *(char *)(*(long *)this + 0x80) == '\x04';
  }
  return bVar1;
}

