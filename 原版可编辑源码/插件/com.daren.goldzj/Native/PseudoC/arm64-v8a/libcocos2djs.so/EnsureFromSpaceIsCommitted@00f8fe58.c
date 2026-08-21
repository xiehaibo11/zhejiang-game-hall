
/* v8::internal::Heap::EnsureFromSpaceIsCommitted() */

void __thiscall v8::internal::Heap::EnsureFromSpaceIsCommitted(Heap *this)

{
  ulong uVar1;
  
  if ((*(char *)(*(long *)(this + 0xe8) + 0x1f8) == '\0') &&
     (uVar1 = SemiSpace::Commit((SemiSpace *)(*(long *)(this + 0xe8) + 0x170)), (uVar1 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    FatalProcessOutOfMemory(this,"Committing semi space failed.");
  }
  return;
}

