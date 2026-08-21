
/* v8::internal::Variable::IsReplGlobalLet() const */

bool __thiscall v8::internal::Variable::IsReplGlobalLet(Variable *this)

{
  if ((*(byte *)(*(long *)this + 0x82) >> 3 & 1) == 0) {
    return false;
  }
  return ((byte)this[0x28] & 0xf) == 0;
}

