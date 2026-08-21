
/* v8::internal::FreeListMap::GetPageForSize(unsigned long) */

ulong v8::internal::FreeListMap::GetPageForSize(ulong param_1)

{
  if (**(long **)(param_1 + 0x20) != 0) {
    return *(ulong *)(**(long **)(param_1 + 0x20) + 8) & 0xfffffffffffc0000;
  }
  return 0;
}

