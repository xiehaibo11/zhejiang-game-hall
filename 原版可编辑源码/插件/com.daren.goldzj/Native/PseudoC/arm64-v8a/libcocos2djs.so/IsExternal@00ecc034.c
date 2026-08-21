
/* v8::SharedArrayBuffer::IsExternal() const */

uint __thiscall v8::SharedArrayBuffer::IsExternal(SharedArrayBuffer *this)

{
  return *(uint *)(*(long *)this + 0x1b) & 1;
}

