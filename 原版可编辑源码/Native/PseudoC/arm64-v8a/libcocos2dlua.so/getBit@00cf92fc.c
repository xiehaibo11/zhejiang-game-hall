
/* cocosbuilder::CCBReader::getBit() */

bool __thiscall cocosbuilder::CCBReader::getBit(CCBReader *this)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = *(uint *)(this + 0x44);
  bVar2 = *(byte *)(*(long *)(this + 0x38) + (long)*(int *)(this + 0x40));
  *(uint *)(this + 0x44) = uVar1 + 1;
  if (6 < (int)uVar1) {
    *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
    *(undefined4 *)(this + 0x44) = 0;
  }
  return (1 << (ulong)(uVar1 & 0x1f) & (uint)bVar2) != 0;
}

