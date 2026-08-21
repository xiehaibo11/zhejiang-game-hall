
/* fairygui::ByteBuffer::readShort() */

undefined2 __thiscall fairygui::ByteBuffer::readShort(ByteBuffer *this)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x1c);
                    /* try { // try from 00ab66dc to 00bb66e3 has its CatchHandler @ 00ab671c */
                    /* try { // try from 00ab66e4 to 00bb6733 has its CatchHandler @ 00ab65f8 */
  *(int *)(this + 0x1c) = iVar2 + 2;
  puVar1 = (undefined1 *)(*(long *)(this + 8) + (long)iVar2 + (long)*(int *)(this + 0x10));
  if (this[0x18] != (ByteBuffer)0x0) {
    return CONCAT11(puVar1[1],*puVar1);
  }
  return CONCAT11(*puVar1,puVar1[1]);
}

