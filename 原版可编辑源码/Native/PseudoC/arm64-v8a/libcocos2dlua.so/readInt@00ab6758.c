
/* fairygui::ByteBuffer::readInt() */

uint __thiscall fairygui::ByteBuffer::readInt(ByteBuffer *this)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x1c);
  *(int *)(this + 0x1c) = iVar2 + 4;
  pbVar1 = (byte *)(*(long *)(this + 8) + (long)iVar2 + (long)*(int *)(this + 0x10));
  if (this[0x18] != (ByteBuffer)0x0) {
    return CONCAT13(pbVar1[3],CONCAT12(pbVar1[2],CONCAT11(pbVar1[1],*pbVar1)));
  }
                    /* try { // try from 00ab679c to 00bb67ff has its CatchHandler @ 00ab679c
                       catch() { ... } // from try @ 00ab679c with catch @ 00ab679c
                       catch() { ... } // from try @ 00ab6804 with catch @ 00ab679c
                       catch() { ... } // from try @ 00ab697c with catch @ 00ab679c
                       catch() { ... } // from try @ 00ab6a74 with catch @ 00ab679c */
  return (uint)*pbVar1 << 0x18 | (uint)pbVar1[1] << 0x10 | (uint)pbVar1[2] << 8 | (uint)pbVar1[3];
}

