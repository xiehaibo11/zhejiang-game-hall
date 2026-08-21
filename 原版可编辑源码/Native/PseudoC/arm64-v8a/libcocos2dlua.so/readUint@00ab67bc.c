
/* fairygui::ByteBuffer::readUint() */

uint __thiscall fairygui::ByteBuffer::readUint(ByteBuffer *this)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x1c);
  *(int *)(this + 0x1c) = iVar2 + 4;
  pbVar1 = (byte *)(*(long *)(this + 8) + (long)iVar2 + (long)*(int *)(this + 0x10));
  if (this[0x18] != (ByteBuffer)0x0) {
    return CONCAT13(pbVar1[3],CONCAT12(pbVar1[2],CONCAT11(pbVar1[1],*pbVar1)));
  }
                    /* try { // try from 00ab6800 to 00bb6803 has its CatchHandler @ 00ab6aa0 */
                    /* try { // try from 00ab6804 to 00bb692f has its CatchHandler @ 00ab679c */
  return (uint)*pbVar1 << 0x18 | (uint)pbVar1[1] << 0x10 | (uint)pbVar1[2] << 8 | (uint)pbVar1[3];
}

