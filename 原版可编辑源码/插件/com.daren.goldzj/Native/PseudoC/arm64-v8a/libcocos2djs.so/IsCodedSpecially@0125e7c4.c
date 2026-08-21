
/* v8::internal::RelocInfo::IsCodedSpecially() */

bool __thiscall v8::internal::RelocInfo::IsCodedSpecially(RelocInfo *this)

{
  return *(char *)(*(long *)this + 3) != 'X';
}

