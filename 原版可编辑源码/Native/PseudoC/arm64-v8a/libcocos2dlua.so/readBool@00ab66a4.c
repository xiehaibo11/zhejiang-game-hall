
/* fairygui::ByteBuffer::readBool() */

bool __thiscall fairygui::ByteBuffer::readBool(ByteBuffer *this)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(this + 8) + (long)*(int *)(this + 0x1c) + (long)*(int *)(this + 0x10))
  ;
  *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
                    /* try { // try from 00ab66c0 to 00bb66d3 has its CatchHandler @ 00ab6720 */
  return cVar1 == '\x01';
}

