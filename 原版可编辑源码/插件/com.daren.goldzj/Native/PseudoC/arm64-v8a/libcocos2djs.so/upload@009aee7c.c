
/* cocos2d::TextRenderGroupItem::upload() */

void __thiscall cocos2d::TextRenderGroupItem::upload(TextRenderGroupItem *this)

{
  ulong uVar1;
  int iVar2;
  MeshBuffer *this_00;
  
  addIndexes(this);
  this_00 = *(MeshBuffer **)(this + 8);
  iVar2 = *(int *)(this + 0x18);
  uVar1 = *(long *)(this_00 + 0x58) + (long)(iVar2 * 0x50);
  if (*(ulong *)(this_00 + 0x50) < uVar1) {
    this_00[0x68] = (MeshBuffer)0x1;
  }
  else {
    *(ulong *)(this_00 + 0x58) = uVar1;
  }
  uVar1 = *(long *)(this_00 + 0xf8) + (long)(iVar2 * 0xc);
  if (*(ulong *)(this_00 + 0xf0) < uVar1) {
    this_00[0x108] = (MeshBuffer)0x1;
  }
  else {
    *(ulong *)(this_00 + 0xf8) = uVar1;
  }
  middleware::MeshBuffer::uploadIB(this_00);
  middleware::MeshBuffer::uploadVB(*(MeshBuffer **)(this + 8));
  *(undefined4 *)(this + 0x20) = 0;
  return;
}

