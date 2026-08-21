
/* fairygui::ByteBuffer::readBuffer() */

void __thiscall fairygui::ByteBuffer::readBuffer(ByteBuffer *this)

{
  long lVar1;
  byte *pbVar2;
  int iVar3;
  void *__dest;
  undefined4 *puVar4;
  uint uVar5;
  long lVar6;
  
                    /* try { // try from 00ab6d8c to 00bb6db3 has its CatchHandler @ 00ab6ce8 */
  iVar3 = *(int *)(this + 0x1c);
  lVar6 = *(long *)(this + 8);
  lVar1 = (long)iVar3 + 4;
  *(int *)(this + 0x1c) = (int)lVar1;
  pbVar2 = (byte *)(lVar6 + (long)iVar3 + (long)*(int *)(this + 0x10));
                    /* try { // try from 00ab6db4 to 00bb6dc7 has its CatchHandler @ 00ab6e24 */
  if (this[0x18] == (ByteBuffer)0x0) {
    uVar5 = (uint)*pbVar2 << 0x18 | (uint)pbVar2[1] << 0x10 | (uint)pbVar2[2] << 8 | (uint)pbVar2[3]
    ;
  }
  else {
    uVar5 = CONCAT13(pbVar2[3],CONCAT12(pbVar2[2],CONCAT11(pbVar2[1],*pbVar2)));
  }
  __dest = malloc((long)(int)uVar5);
                    /* try { // try from 00ab6e04 to 00bb6e0b has its CatchHandler @ 00ab6e20 */
                    /* try { // try from 00ab6e0c to 00bb6e3f has its CatchHandler @ 00ab6ce8 */
  memcpy(__dest,(void *)(lVar6 + lVar1),(long)(int)uVar5);
  puVar4 = operator_new(0x28);
                    /* catch() { ... } // from try @ 00ab6d68 with catch @ 00ab6e20
                       catch() { ... } // from try @ 00ab6e04 with catch @ 00ab6e20 */
  *(void **)(puVar4 + 2) = __dest;
                    /* catch() { ... } // from try @ 00ab6d24 with catch @ 00ab6e24
                       catch() { ... } // from try @ 00ab6db4 with catch @ 00ab6e24 */
  puVar4[4] = 0;
  puVar4[5] = uVar5;
  *(undefined2 *)(puVar4 + 6) = 0x100;
  puVar4[7] = 0;
  *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(this + 0x20);
  *puVar4 = *(undefined4 *)this;
                    /* try { // try from 00ab6e40 to 00bb6e8b has its CatchHandler @ 00ab6e40
                       catch() { ... } // from try @ 00ab6e40 with catch @ 00ab6e40
                       catch() { ... } // from try @ 00ab7148 with catch @ 00ab6e40
                       catch() { ... } // from try @ 00ab71fc with catch @ 00ab6e40 */
  *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar5;
  return;
}

