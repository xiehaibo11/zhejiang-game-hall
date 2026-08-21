
/* v8::internal::NewSpace::TearDown() */

void __thiscall v8::internal::NewSpace::TearDown(NewSpace *this)

{
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  SemiSpace::TearDown((SemiSpace *)(this + 0xd0));
  SemiSpace::TearDown((SemiSpace *)(this + 0x170));
  return;
}

