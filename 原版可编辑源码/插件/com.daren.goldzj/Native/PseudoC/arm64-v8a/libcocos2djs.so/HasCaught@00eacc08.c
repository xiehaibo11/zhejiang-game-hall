
/* v8::TryCatch::HasCaught() const */

bool __thiscall v8::TryCatch::HasCaught(TryCatch *this)

{
  if ((*(ulong *)(this + 0x10) & 1) == 0) {
    return true;
  }
  return (int)*(ulong *)(this + 0x10) != *(int *)(*(long *)this + 0xa8);
}

