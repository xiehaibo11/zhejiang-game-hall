
/* v8::internal::Heap::UncommitFromSpace() */

undefined8 __thiscall v8::internal::Heap::UncommitFromSpace(Heap *this)

{
  undefined8 uVar1;
  
  if (*(char *)(*(long *)(this + 0xe8) + 0x1f8) != '\0') {
    uVar1 = SemiSpace::Uncommit((SemiSpace *)(*(long *)(this + 0xe8) + 0x170));
    return uVar1;
  }
  return 1;
}

