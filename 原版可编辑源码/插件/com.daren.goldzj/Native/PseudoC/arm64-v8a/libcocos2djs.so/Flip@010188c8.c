
/* v8::internal::NewSpace::Flip() */

void __thiscall v8::internal::NewSpace::Flip(NewSpace *this)

{
  SemiSpace::Swap((SemiSpace *)(this + 0x170),(SemiSpace *)(this + 0xd0));
  return;
}

