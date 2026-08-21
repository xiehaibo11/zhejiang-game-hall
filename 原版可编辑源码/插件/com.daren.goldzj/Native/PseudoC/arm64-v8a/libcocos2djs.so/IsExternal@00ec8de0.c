
/* v8::ArrayBuffer::IsExternal() const */

uint __thiscall v8::ArrayBuffer::IsExternal(ArrayBuffer *this)

{
  return *(uint *)(*(long *)this + 0x1b) & 1;
}

