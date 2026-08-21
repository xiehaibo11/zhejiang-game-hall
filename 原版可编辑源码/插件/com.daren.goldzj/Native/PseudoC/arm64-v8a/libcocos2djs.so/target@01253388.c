
/* v8::internal::ImportedFunctionEntry::target() */

undefined8 __thiscall v8::internal::ImportedFunctionEntry::target(ImportedFunctionEntry *this)

{
  return *(undefined8 *)(*(long *)(**(long **)this + 0x2f) + (long)*(int *)(this + 8) * 8);
}

