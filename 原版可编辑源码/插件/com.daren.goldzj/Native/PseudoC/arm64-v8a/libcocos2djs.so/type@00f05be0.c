
/* v8::internal::BreakLocation::type() const */

undefined4 __thiscall v8::internal::BreakLocation::type(BreakLocation *this)

{
  if (*(int *)(this + 0xc) - 1U < 4) {
    return *(undefined4 *)(&DAT_019a77a4 + (long)(int)(*(int *)(this + 0xc) - 1U) * 4);
  }
  return 3;
}

