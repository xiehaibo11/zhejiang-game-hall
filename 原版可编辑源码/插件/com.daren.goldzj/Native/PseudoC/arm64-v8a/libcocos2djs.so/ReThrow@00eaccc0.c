
/* v8::TryCatch::ReThrow() */

long __thiscall v8::TryCatch::ReThrow(TryCatch *this)

{
  long lVar1;
  
  if ((*(ulong *)(this + 0x10) & 1) == 0) {
    lVar1 = *(long *)this;
  }
  else {
    lVar1 = *(long *)this;
    if ((int)*(ulong *)(this + 0x10) == *(int *)(lVar1 + 0xa8)) {
      return 0;
    }
  }
  this[0x28] = (TryCatch)((byte)this[0x28] | 8);
  return lVar1 + 0xa0;
}

