
/* v8::internal::ImportedFunctionEntry::object_ref() */

ulong __thiscall v8::internal::ImportedFunctionEntry::object_ref(ImportedFunctionEntry *this)

{
  ulong uVar1;
  
  uVar1 = **(ulong **)this & 0xffffffff00000000;
  return uVar1 | *(uint *)((uVar1 | *(uint *)(**(ulong **)this + 0x2b)) +
                           (long)(*(int *)(this + 8) << 2) + 7);
}

