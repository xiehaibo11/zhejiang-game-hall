
/* fairygui::ByteBuffer::getBytesAvailable() const */

int __thiscall fairygui::ByteBuffer::getBytesAvailable(ByteBuffer *this)

{
  return *(int *)(this + 0x14) - *(int *)(this + 0x1c);
}

