
/* cocosbuilder::CCBReader::alignBits() */

void __thiscall cocosbuilder::CCBReader::alignBits(CCBReader *this)

{
  if (*(int *)(this + 0x44) != 0) {
    *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
    *(undefined4 *)(this + 0x44) = 0;
  }
  return;
}

