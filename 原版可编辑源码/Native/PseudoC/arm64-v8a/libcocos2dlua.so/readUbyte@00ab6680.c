
/* fairygui::ByteBuffer::readUbyte() */

undefined1 __thiscall fairygui::ByteBuffer::readUbyte(ByteBuffer *this)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)
           (*(long *)(this + 8) + (long)*(int *)(this + 0x1c) + (long)*(int *)(this + 0x10));
                    /* try { // try from 00ab6698 to 00bb66bf has its CatchHandler @ 00ab65f8 */
  *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
  return uVar1;
}

