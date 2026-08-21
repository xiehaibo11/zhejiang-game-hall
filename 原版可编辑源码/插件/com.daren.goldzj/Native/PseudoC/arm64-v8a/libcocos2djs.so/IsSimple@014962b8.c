
/* v8::internal::MaterializedLiteral::IsSimple() const */

uint __thiscall v8::internal::MaterializedLiteral::IsSimple(MaterializedLiteral *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 4) & 0x3f;
  if ((uVar1 != 0x16) && (uVar1 != 0x17)) {
    return 0;
  }
  return *(uint *)(this + 4) >> 8 & 1;
}

