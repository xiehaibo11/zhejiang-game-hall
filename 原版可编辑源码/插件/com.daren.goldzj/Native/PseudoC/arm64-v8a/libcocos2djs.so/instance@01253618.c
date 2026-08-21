
/* v8::internal::ImportedFunctionEntry::instance() */

ulong __thiscall v8::internal::ImportedFunctionEntry::instance(ImportedFunctionEntry *this)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = **(ulong **)this & 0xffffffff00000000;
  uVar1 = *(uint *)((uVar3 | *(uint *)(**(ulong **)this + 0x2b)) + (long)(*(int *)(this + 8) << 2) +
                   7);
  uVar2 = uVar3 | uVar1;
  if (((uVar1 & 1) == 0) || (*(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar2 - 1)) != 0x434)) {
    uVar2 = uVar3 | *(uint *)(uVar2 + 3);
  }
  return uVar2;
}

