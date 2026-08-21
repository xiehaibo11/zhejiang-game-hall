
/* cocosbuilder::CCBReader::readByte() */

undefined1 __thiscall cocosbuilder::CCBReader::readByte(CCBReader *this)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(*(long *)(this + 0x38) + (long)*(int *)(this + 0x40));
  *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
  return uVar1;
}

