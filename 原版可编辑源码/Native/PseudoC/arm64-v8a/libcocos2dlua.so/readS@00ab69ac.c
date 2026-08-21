
/* fairygui::ByteBuffer::readS() */

undefined1 * __thiscall fairygui::ByteBuffer::readS(ByteBuffer *this)

{
  undefined1 *puVar1;
  int iVar2;
  ushort uVar3;
  
  iVar2 = *(int *)(this + 0x1c);
  *(int *)(this + 0x1c) = iVar2 + 2;
  puVar1 = (undefined1 *)(*(long *)(this + 8) + (long)iVar2 + (long)*(int *)(this + 0x10));
  if (this[0x18] == (ByteBuffer)0x0) {
    uVar3 = CONCAT11(*puVar1,puVar1[1]);
  }
  else {
    uVar3 = CONCAT11(puVar1[1],*puVar1);
  }
  if ((uVar3 + 3 & 0xffff) < 2) {
    return &cocos2d::STD_STRING_EMPTY;
  }
  return (undefined1 *)(**(long **)(this + 0x20) + (ulong)(uint)uVar3 * 0x18);
}

