
/* v8::internal::RelocInfo::IsInConstantPool() */

bool __thiscall v8::internal::RelocInfo::IsInConstantPool(RelocInfo *this)

{
  return *(char *)(*(long *)this + 3) == 'X';
}

