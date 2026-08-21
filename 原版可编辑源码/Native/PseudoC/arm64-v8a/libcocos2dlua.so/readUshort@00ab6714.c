
/* fairygui::ByteBuffer::readUshort() */

undefined2 __thiscall fairygui::ByteBuffer::readUshort(ByteBuffer *this)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x1c);
                    /* catch() { ... } // from try @ 00ab6670 with catch @ 00ab671c
                       catch() { ... } // from try @ 00ab66dc with catch @ 00ab671c */
                    /* catch() { ... } // from try @ 00ab665c with catch @ 00ab6720
                       catch() { ... } // from try @ 00ab66c0 with catch @ 00ab6720 */
  *(int *)(this + 0x1c) = iVar2 + 2;
  puVar1 = (undefined1 *)(*(long *)(this + 8) + (long)iVar2 + (long)*(int *)(this + 0x10));
  if (this[0x18] != (ByteBuffer)0x0) {
    return CONCAT11(puVar1[1],*puVar1);
  }
  return CONCAT11(*puVar1,puVar1[1]);
}

