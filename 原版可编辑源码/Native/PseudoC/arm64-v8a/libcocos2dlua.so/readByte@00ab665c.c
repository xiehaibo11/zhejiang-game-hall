
/* fairygui::ByteBuffer::readByte() */

undefined1 __thiscall fairygui::ByteBuffer::readByte(ByteBuffer *this)

{
  undefined1 uVar1;
  
                    /* try { // try from 00ab665c to 00bb666b has its CatchHandler @ 00ab6720 */
  uVar1 = *(undefined1 *)
           (*(long *)(this + 8) + (long)*(int *)(this + 0x1c) + (long)*(int *)(this + 0x10));
                    /* try { // try from 00ab6670 to 00bb6697 has its CatchHandler @ 00ab671c */
  *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
  return uVar1;
}

