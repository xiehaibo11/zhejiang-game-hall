
/* v8::internal::Page::contains_array_buffers() */

bool __thiscall v8::internal::Page::contains_array_buffers(Page *this)

{
  if (*(long *)(this + 0xf8) != 0) {
    return *(long *)(*(long *)(this + 0xf8) + 0x20) != 0;
  }
  return false;
}

