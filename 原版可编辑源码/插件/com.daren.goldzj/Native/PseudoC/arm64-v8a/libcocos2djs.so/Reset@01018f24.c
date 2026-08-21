
/* v8::internal::SemiSpace::Reset() */

void __thiscall v8::internal::SemiSpace::Reset(SemiSpace *this)

{
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(this + 0x20);
  return;
}

