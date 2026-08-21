
/* fairygui::ByteBuffer::~ByteBuffer() */

void __thiscall fairygui::ByteBuffer::~ByteBuffer(ByteBuffer *this)

{
  if ((this[0x19] != (ByteBuffer)0x0) && (*(void **)(this + 8) != (void *)0x0)) {
    operator_delete(*(void **)(this + 8));
    return;
  }
  return;
}

