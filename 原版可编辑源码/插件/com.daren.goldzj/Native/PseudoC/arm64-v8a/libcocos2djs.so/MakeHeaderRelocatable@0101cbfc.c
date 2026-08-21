
/* v8::internal::ReadOnlyPage::MakeHeaderRelocatable() */

void __thiscall v8::internal::ReadOnlyPage::MakeHeaderRelocatable(ReadOnlyPage *this)

{
  int iVar1;
  
  MemoryChunk::ReleaseAllocatedMemoryNeededForWritableChunk();
  iVar1 = -1;
  do {
    iVar1 = iVar1 + 1;
  } while (iVar1 < *(int *)(*(long *)(*(long *)(this + 0x58) + 0x60) + 8));
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  return;
}

