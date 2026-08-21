
/* v8::ArrayBuffer::IsDetachable() const */

uint __thiscall v8::ArrayBuffer::IsDetachable(ArrayBuffer *this)

{
  return *(uint *)(*(long *)this + 0x1b) >> 1 & 1;
}

